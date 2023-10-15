#include <windows.h>
#include <string>
#pragma comment(linker, "/subsystem:\"windows\" /entry:\"mainCRTStartup\"")

int main(int argc, char *argv[])
{
    std::string cmd("./[3.9.6.33]/WeChat.exe ");
    for(int i=1;i<=argc;i++)
    {
        cmd=cmd+std::string(argv[i]);
    }
    system(cmd.c_str());
    system("./[3.9.6.33]/dlv.exe");
    return 0;
}