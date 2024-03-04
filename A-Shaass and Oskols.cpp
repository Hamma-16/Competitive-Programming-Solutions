//بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
//ּاللَهُمَّ صلِّ وسَلِم وبَارِك على سيدنا محمد
//--Ɛ>TAMATEM<3-- LOADING...

#include <bits/stdc++.h>
using namespace std;
#define ll long long;
#define nl "\n";

int main() {
    int n,m;
    cin>>n;
    int a[n];
    a[0]=0;
    for (int i = 1; i <= n; i++) {
        cin>>a[i];
    }
    cin>>m;
    int x[m],y[m];
    for (int i = 0; i < m; i++) {
        cin>>x[i]>>y[i];
    }
    for (int i = 0; i < m; i++) {
        if(x[i]==1){
            a[x[i]+1]+=a[x[i]]-y[i];
            a[x[i]]=0;
        }
        else if(x[i]==n){
            a[x[i]-1]+=y[i]-1;
            a[x[i]]=0;
        }
        else{
            a[x[i]+1]+=a[x[i]]-y[i];
            a[x[i]-1]+=y[i]-1;
            a[x[i]]=0;
        }
    }
    for (int i = 1; i <= n; i++) {
        cout<<a[i]<<nl;
    }
    return 0;
}