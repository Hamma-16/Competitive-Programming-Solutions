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
    int t,n,k,count;
    string ch;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cin>>ch;
        count=0;
        for (int i = 0; i < n; i++) {
            if(ch[i]=='B'){
                count++;
                i+=k-1;
            }
        }
        cout<<count<<nl;
    }
    return 0;
}