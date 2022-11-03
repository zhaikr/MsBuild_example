// vbs_bat.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <Windows.h>

#include <tchar.h>

std::wstring Str2Wstr(std::string str)
{
  size_t converted = 0;
  size_t  len = str.size() * 2;// 预留字节数
  setlocale(LC_CTYPE, "");     //必须调用此函数
  wchar_t* p = new wchar_t[len];// 申请一段内存存放转换后的字符串
  mbstowcs_s(&converted, p, len, str.c_str(), len);// 转换
  std::wstring str1(p);
  delete[] p;// 释放申请的内存
  return str1;
}

void CallCmd(const std::string& call_cmd)
{
  std::wstring pszCmd_w = Str2Wstr(call_cmd);
  STARTUPINFO si;
  PROCESS_INFORMATION pi;
  //PROCESS_INFORMATION pi = { 0 };
  //STARTUPINFO si = { sizeof(STARTUPINFO) };
  //GetStartupInfo(&si);
  ZeroMemory( &si, sizeof(si) );
  si.cb = sizeof(si);
  si.dwFlags = STARTF_USESHOWWINDOW | STARTF_USESHOWWINDOW;
  si.wShowWindow = SW_HIDE;
  ZeroMemory(&pi, sizeof(pi));
  //PROCESS_INFORMATION pi;
  // Start the child process.
  if (!CreateProcess(NULL,
    (LPWSTR)pszCmd_w.c_str(),
    NULL,
    NULL,
    FALSE,
    CREATE_NO_WINDOW,
    NULL,
    NULL,
    &si,    // Pointer to STARTUPINFO structure.
    &pi)) // Pointer to PROCESS_INFORMATION
  {
    std::cout << "@ CreateProcess failed!" << std::endl;
    return;
  }

  // Wait until child process exits.
  WaitForSingleObject(pi.hProcess, INFINITE);
  CloseHandle(pi.hProcess);
  CloseHandle(pi.hThread);
}

int main()
{
  std::string cmd = "msbuild_cmd.bat";
  std::string cmd_ms = "msbuild Add_.vcxproj /p:configuration=Release /p:platform=x64";
  std::string disk = "E:";
  std::string paths = "\\test1\\12";
  //std::system("msbuild_cmd.vbs E: \\test1\\12 Add_.vcxproj");
  //WinExec("cmd.exe /c msbuild_cmd.vbs E: /operamange/oper/baseoperator/v0.92/package/通用算法 GeneralAlg_pack.vcxproj", SW_HIDE);
 // CallCmd("msbuild_cmd.bat E: /operamange/oper/baseoperator/v0.92/package/通用算法 GeneralAlg_pack.vcxproj");
  CallCmd("ping www.baidu.com");
  std::cout << "lll";
}





