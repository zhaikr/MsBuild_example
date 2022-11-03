set shell=wscript.createObject("wscript.shell")
cmd = "msbuild_cmd.bat" +" "+ WScript.Arguments(0) +" "+ WScript.Arguments(1) +" "+ WScript.Arguments(2)
run=shell.Run(cmd,0,True)