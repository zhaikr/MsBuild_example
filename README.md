# MsBuild_example
MsBuild_example project
 
要在环境变量中添加：
C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin

在cmd里面运行msbuild

 




运行成功截图，
 

Msbuild运行主要依靠.vcxproj工程文件来进行编译
对于c++代码编译使用msbuild必须有.vcxproj文件进行项目编译
对于最简单的工程结构目录如下：
 
.vcxproj工程文件本质为xml文件

 
更多内容请查看Microsoft Learning：以下网址
演练：使用 MSBuild 创建 Visual Studio C++ 项目 | Microsoft Learn
https://learn.microsoft.com/zh-cn/cpp/build/walkthrough-using-msbuild-to-create-a-visual-cpp-project?view=msvc-160
