/*
 * Copyright 2021 RA Consulting
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
#pragma once

#ifdef _WIN32
#   ifdef EXPORT_OSC_EXPR
#       define OSC_EXPR_EXP __declspec(dllexport)
#       pragma message( "ExpressionLib: exporting symbols (dllexport)" )
#   elif defined(OSC_STATIC)
#       define OSC_EXPR_EXP
#       pragma message( "ExpressionLib: static" )
#   else
#       define OSC_EXPR_EXP __declspec(dllimport)
#       pragma message( "ExpressionLib: importing symbols (dllimport)" )
#   endif
#elif defined(__unix__) && defined(__linux__)
#   if  __GNUC__ >= 4
#       define OSC_EXPR_EXP __attribute__((visibility("default")))
#   else
#       define OSC_EXPR_EXP
#   endif
#elif defined(__APPLE__)
#   define OSC_EXPR_EXP
#else
#   error "OPENSCENARIOLIB: Operating system not supported."
#endif // _WIN32
