#include <windows.h>
#include <iostream>
using namespace std;
#pragma comment( linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"" ) 
int main() 
{
	
	//make a memory leak
	while (true) 
	{
		new int[100000];
	}
    return 0;
}