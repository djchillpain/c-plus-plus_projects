//this program counts the days from a date to another
#include <iostream>

using namespace std;

int luni[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int mij(int st, int dr){
    int m = (dr-st+1);
    return m*365 + m/4;
}

int inc(int zi, int luna, int an){
    bool bisect = !(an%4);
    int s=luni[luna-1]-zi+1;
    for(int i=luna;i<12;i++){
        s += luni[i];
        if(i == 1 && bisect)s++;
    }
    return s;
}

int sfs(int zi, int luna, int an){
    bool bisect = !(an%4);
    int s=zi;
    for(int i=0;i<luna;i++){
        s += luni[i];
        if(i == 1 && bisect)s++;
    }
    return s;
}

int main(){
    int p_zi, p_luna, p_an, u_zi, u_luna, u_an;
    cout << "Introduce doi ani astfel(z l aaaa z l aaaa): ";
    cin >> p_zi >> p_luna >> p_an >> u_zi >> u_luna >> u_an;
    cout << inc(p_zi, p_luna, p_an) + mij(p_an, u_an) + sfs(u_zi, u_luna, u_an)<< " zile";
}
