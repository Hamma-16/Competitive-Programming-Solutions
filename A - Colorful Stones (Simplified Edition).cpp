//بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
//ּاللَهُمَّ صلِّ وسَلِم وبَارِك على سيدنا محمد
//--Ɛ>TAMATEM<3-- LOADING...

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i=0, j=0;
    string ch1,ch2;
    cin>>ch1>>ch2;
    while (j<ch2.length()){
        if(ch2[j]==ch1[i]){
            i++;
        }
        j++;
    }
    cout<<i+1<<endl;
    return 0;
}
