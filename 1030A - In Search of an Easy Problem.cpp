//بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
//ּاللَهُمَّ صلِّ وسَلِم وبَارِك على سيدنا محمد
//--Ɛ>TAMATEM<3-- LOADING...

#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define nl "\n";

int main() {
    int n,nb;
    bool b=true;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>nb;
        if(nb==1)
            b=false;
    }
    if(b){
        cout<<"EASY"<<nl;
    }
    else{
        cout<<"HARD"<<nl;
    }
    return 0;
}