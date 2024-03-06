//بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
//ּاللَهُمَّ صلِّ وسَلِم وبَارِك على سيدنا محمد
//--Ɛ>TAMATEM<3-- LOADING...

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl "\n"

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    ll n,x,d,nb=0;
    char c;
    cin>>n>>x;
    for (int i = 0; i < n; i++) {
        cin>>c>>d;
        if(c=='+'){
            x+=d;
        }
        else if(c=='-' && x>=d){
            x-=d;
        }
        else if(c=='-' && x<d)
            nb++;
    }
    cout<<x<<" "<<nb<<nl;
    return 0;
}