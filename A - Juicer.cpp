//بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
//ּاللَهُمَّ صلِّ وسَلِم وبَارِك على سيدنا محمد
//--Ɛ>TAMATEM<3-- LOADING...

#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define nl "\n";

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n,b,d,a,var=0,count=0;
    cin>>n>>b>>d;
    while(n--){
        cin>>a;
        if(a<=b)
            var+=a;
        if(var>d){
            count++;
            var = 0;
        }
    }
    cout<<count<<nl;
    return 0;
}