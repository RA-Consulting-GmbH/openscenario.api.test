//css_include all;

using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using RaLib.Utils.Arguments;

public static class Script
{
    private enum ParamMode
    {
        CONFIG,
        RES,
        LOG,
        HTDOCS,
        NONE
    }

    [MethodImpl(MethodImplOptions.NoInlining)]
    public static void Main(string[] args)
    {
        var paramMode = ParamMode.NONE;
        var paramModeStr = "";

        var paramModeDictionary = new Dictionary<string, ParamMode>()
        {
            {"/dreconfig", ParamMode.CONFIG},
            {"/dreres", ParamMode.RES},
            {"/drelog", ParamMode.LOG},
            {"/drehtdocs", ParamMode.HTDOCS}
        };

        var configDictionary = new Dictionary<string, bool>
        {
            {"X64", false},
            {"UDS_REST", false},
            {"UDS_SOAP", false},
            {"PARALLEL_FLASH", false},
            {"OBD_REST", false},
            {"OBD_SOAP", false},
            {"DIAGRAD_SOAP", false},
            {"OBD_SCAN_TOOL", false}
        };

        foreach (var arg in args)
        {
            foreach (var mode in paramModeDictionary)
            {
                if (arg.Equals(mode.Key))
                {
                    paramMode = mode.Value;
                    paramModeStr = mode.Key;
                }
            }

            if (ParamMode.NONE == paramMode)
            {
                continue;
            }

            switch (paramMode)
            {
                case ParamMode.CONFIG:
                {
                    if (arg.Equals("x64", StringComparison.OrdinalIgnoreCase))
                    {
                        configDictionary["X64"] = true;
                        continue;
                    }

                    if (!configDictionary.ContainsKey(arg))
                    {
                        Console.WriteLine( "Given parameter for option " + paramModeStr + " is unknown.");
                        continue;
                    }

                    configDictionary[arg] = true;
                } break;

                case ParamMode.RES:
                {

                } break;

                case ParamMode.LOG:
                {

                } break;

                case ParamMode.HTDOCS:
                {

                } break;

                case ParamMode.NONE:
                {

                } break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }


        var newArgs = new List<Argument>();
        Argument argg = new
        newArgs.Add("GFDSGS");

        var procExt = configDictionary["X64"] ? "_x64" : "";

        s.ForExecutable(a.ScriptPath.File("generate_vs2017" + procExt + ".bat"))
            .PrepareForExecution()
            .WithArg()
            .WithArgs(new List<Argument>())
            .DoExecute();
    }
}
