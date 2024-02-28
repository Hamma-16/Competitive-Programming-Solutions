//بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
//ּاللَهُمَّ صلِّ وسَلِم وبَارِك على سيدنا محمد
//--Ɛ>TAMATEM<3-- LOADING...

#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int i = 0,j = 0;
    string s,ch="hello";
    cin>>s;
    while(i<ch.length() && j<s.length()){
        if(ch[i]==s[j]){
            i++;
            j++;
        }
        else j++;
    }
    if(i!=5) cout<<"NO";
    else cout<<"YES";
    return 0;
}