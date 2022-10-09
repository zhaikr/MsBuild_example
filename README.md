# MsBuild_example
MsBuild_example project
小科普：VCXPROJ文件是Microsoft Visual Studio的一个组件，用于开发c++程序。 它包含xml格式的文本，定义了项目的内容、平台需求、版本信息以及web服务器或数据库服务器设置。 VCXPROJ文件用于使用MSBuild编译器 (Microsoft build Engine)构建开发人员的项目。
VCXPROJ文件是包含由MSBuild的XML模式定义的元素的XML文件。 这些元素告诉MSBuild要构建哪些项以及如何构建它们。 例如，VCXPROJ文件可能包含一些设置，这些设置告诉MSBuild在针对不同操作系统

VCXPROJ文件包含的一些元素包括:
"<"Project">" : 用于标识项目文件的XML模式，并为构建过程指定入口点
<PropertyGroup>: 用于定义生成配置属性
<ItemGroup>: 用于向构建系统中添加输入，如源代码文件
<Target>: 用于指定和执行生成操作
<OutDir>输出文件目录
<IncludePath>包含路径
<AdditionalIncludeDirectories>附加包含目录
<RuntimeLibrary>运行库
<AdditionalLibraryDirectories>附加库目录
<ClInclude>头文件
<ClCompile>源文件

![img](https://github.com/zhaikr/MsBuild_example/blob/main/doc/image/image1.jpg) 

要在环境变量中添加：
C:\Program Files (x86)\Microsoft Visual Studio\2019\Community\MSBuild\Current\Bin

在cmd里面运行msbuild
运行命令：msbuild Add_.vcxproj /p:configuration=Release /p:platform=x64
 
![img](https://github.com/zhaikr/MsBuild_example/blob/main/doc/image/image2.jpg)
 
运行成功截图，

![img](https://github.com/zhaikr/MsBuild_example/blob/main/doc/image/image3.jpg)

Msbuild运行主要依靠.vcxproj工程文件来进行编译
对于c++代码编译使用msbuild必须有.vcxproj文件进行项目编译
对于最简单的工程结构目录如下：
 
.vcxproj工程文件本质为xml文件

![img](https://github.com/zhaikr/MsBuild_example/blob/main/doc/image/image4.jpg)
 
更多内容请查看Microsoft Learning：以下网址
演练：使用 MSBuild 创建 Visual Studio C++ 项目 | Microsoft Learn
https://learn.microsoft.com/zh-cn/cpp/build/walkthrough-using-msbuild-to-create-a-visual-cpp-project?view=msvc-160
