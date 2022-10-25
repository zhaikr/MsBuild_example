// env.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdlib.h>
#include <tchar.h>
#include <windows.h>

using namespace std;

bool BF(string s1, string s2)
{
	int i = 0, j = 0;
	while (i < s1.size() && j < s2.size())
	{
		if (s1[i] == s2[j])
			i++, j++;
		else
		{
			i = i - j + 1;
			j = 0;
		}
	}
	if (j >= s2.size())
	{
			return true;
	}
	else
	{
			return false;
	}

}


int main()
{
  const DWORD buffSize = 65535;
  char buffer[buffSize];
  GetEnvironmentVariableA("Path", buffer, buffSize);
  string path_s = static_cast<string>(buffer);
  //printf("\nPATH = %s\n\n", buffer);
	string target_path = "BuildTools\\MSBuild\\Current\\Bin";
	bool res = BF(path_s, target_path);
	string disk = "E:";
	string paths = "\\test1\\12";
	string cd = "cd ";
	string bat = "./bat";
	string build_cmd = disk + " & " + cd + " " + paths + " & " + bat;
	//cout << path_s;
  cout << res;
  return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
