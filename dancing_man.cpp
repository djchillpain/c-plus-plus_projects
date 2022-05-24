#include <iostream>
#include <fstream>
#include <string.h>
#include <Windows.h>

using namespace std;

int main(){
    char top[4][5] = {"\\O\\", "|O|", "/O/", "|O|"};
    int i;
    while(true){
        for(i=0;i<4;i++){
            cout << top[i] << "\n" << " |\n/ \\";
            Sleep(500);
            system("cls");
        }
    }
}
