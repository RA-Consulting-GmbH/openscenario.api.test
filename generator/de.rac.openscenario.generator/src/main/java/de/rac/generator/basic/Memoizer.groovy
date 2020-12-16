/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

 package de.rac.generator.basic

import groovy.lang.Closure;
import groovy.lang.MetaMethod;

public class Memoizer {

    public static def doInit(Class providerClass, Class targetClass) {
        providerClass.metaClass.methods.findAll{method -> method.declaringClass.toString() == providerClass.toString() && method.isStatic() && method.public && doesFirstArgumentFit(method, targetClass)}.each{MetaMethod method->
            targetClass.metaClass."${method.name}" = new MemoizingClosure(owner, providerClass.&"${method.name}");
        }
    }


    public static def doInitMethod(Class providerClass, String methodName, Class... targetClasses) {
        targetClasses.each{Class targetClass ->
            providerClass.metaClass.methods.findAll{it.getName() == methodName}.findAll{method -> (method.declaringClass.toString() == providerClass.toString() && method.isStatic() && method.public && doesFirstArgumentFit(method, targetClass)) }.each{MetaMethod method->
                targetClass.metaClass."${method.name}" = new MemoizingClosure(owner, providerClass.&"${method.name}");
            }
        }
    }

    public static def doesFirstArgumentFit(MetaMethod method, Class targetClass) {
        def parameterClasses = method.getNativeParameterTypes();
        return parameterClasses && parameterClasses[0].isAssignableFrom(targetClass);
    }

    public static def doesFirstArgumentFit(MetaMethod method, Class... targetClasses) {
        def parameterClasses = method.getNativeParameterTypes();
        boolean fit = true;
        targetClasses.each{Class targetClass ->
            fit = fit && parameterClasses && parameterClasses[0].isAssignableFrom(targetClass);
        }
        return fit;
    }

    public static class MemoizingClosure extends Closure{

        MemoizingClosure(Object owner, Closure c) {
            super(owner);
            innerClosure = c.memoize();
        }
        Closure innerClosure;

        def doCall(Object[] args) {
            innerClosure.call(delegate,*args);
        }

        def doCall() {
            innerClosure.call(delegate);
        }
    }
}
