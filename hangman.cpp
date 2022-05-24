#include <iostream>
#include <string.h>
#include <windows.h>
using namespace std;

int main(){
    char a[256], g;
    cout << "Enter word: ";
    cin >> a;
    int i, pos[256] = {0}, lives=5, l, ok, comp=0;
    l = strlen(a);
    system("cls");
    while(lives){
        cin >> g;
        ok = 0;
        for(i=0;i<l;i++){
            if(g == a[i]){
                pos[i] = 1;
                ok = 1;
                comp++;
            }
        }
        system("cls");
        if(!ok){lives--;}
        cout << "Lives: " << lives << "\n";
        for(i=0;i<l;i++){
            if(pos[i]){
                cout << a[i];
            }else{cout << "_";}
        }
        if(comp == l){return 27;}
    }

}
