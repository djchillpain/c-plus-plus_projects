#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    int zz = 63;
    int nr = zz-1;
    char str[zz] = {"URAMATOAREA STATIE ESTE POLITEHNICA, CU PERON PE PARTEA STANGA"};
    int a=0, b=1, c=2, d=3, e=4, f=5, g=6, h=7, i=8, j=9, k=10, l=11, m=12, n=13, o=14, p=15;
    while(1){
        cout <<str[a]<<str[b]<<str[c]<<str[d]<<str[e]<<str[f]<<str[g]<<str[h]<<str[i]<<str[j]<<str[k]<<str[l]<<str[m]<<str[n]<<str[o]<<str[p];
        if(a < nr){a++;}else{a=0;}
        if(b < nr){b++;}else{b=0;}
        if(c < nr){c++;}else{c=0;}
        if(d < nr){d++;}else{d=0;}
        if(e < nr){e++;}else{e=0;}
        if(f < nr){f++;}else{f=0;}
        if(g < nr){g++;}else{g=0;}
        if(h < nr){h++;}else{h=0;}
        if(i < nr){i++;}else{i=0;}
        if(j < nr){j++;}else{j=0;}
        if(k < nr){k++;}else{k=0;}
        if(l < nr){l++;}else{l=0;}
        if(m < nr){m++;}else{m=0;}
        if(n < nr){n++;}else{n=0;}
        if(o < nr){o++;}else{o=0;}
        if(p < nr){p++;}else{p=0;}
        cout << "\r";
        Sleep(50);
    }
}
