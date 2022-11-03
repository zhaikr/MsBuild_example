set disk="%1%"
set target_path="%2%"
set target="%3%" 
%disk%
cd %target_path%
msbuild "%target%" /p:configuration=Debug /p:platform=x64 >> log.txt
exit

