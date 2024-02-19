//بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
//ּاللَهُمَّ صلِّ وسَلِم وبَارِك على سيدنا محمد
//--Ɛ>TAMATEM<3-- LOADING...

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string ch,chres="";
    cin>>ch;
    transform(ch.begin(),ch.end(),ch.begin(),::tolower);

    for(int i =0;i<ch.length();i++){
//بِسْمِ اللَّـهِ الرَّحْمَـٰنِ الرَّحِيمِ
//ּاللَهُمَّ صلِّ وسَلِم وبَارِك على سيدنا محمد
//--Ɛ>TAMATEM<3-- LOADING...

#include <bits/stdc++.h>
        using namespace std;

        int main()
        {
            string ch,chres="";
            cin>>ch;
            transform(ch.begin(),ch.end(),ch.begin(),::tolower);

            for(int i =0;i<ch.length();i++){

                if(ch[i] == 'a' || ch[i] == 'o' || ch[i] == 'y' || ch[i] == 'e' || ch[i] == 'u' || ch[i] == 'i'){
                    continue;
                }
                else
                    chres+=".";
                chres += ch[i];
            }

            cout<<chres<<endl;
            return 0;
        }
