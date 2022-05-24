#include <iostream>
#include <windows.h>

using namespace std;
char str[93] = {"URMATOAREA STATIE ESTE PANTELIMON, CU PERON PE PARTEA DREAPTA, CORESPONDENTA CU MAGISTRALA 1"};
void inv(int a){
    char temp;
    int i;
    temp = str[0];
    for(i=1;i<=a-1;i++){

        str[i-1] = str[i];
    }
    str[a-1] = temp;
}

int main(){
    int i, a=sizeof(str)/sizeof(char);
    while(1){
        inv(a);
        for(i=0;i<a-1;i++){
            cout << str[i];
        }
        cout << "\r";
        Sleep(50);
    }
}
