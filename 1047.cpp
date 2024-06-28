#include<bits/stdc++.h>
using namespace std;

int main()
{
    int start,End,start_h,End_h,duration,duration_h;
    cin>>start>>start_h>>End>>End_h;
    duration=End-start;
    duration_h=End_h-start_h;
    if(duration<0)
    {
        duration=24+duration;
        cout<<"O JOGO DUROU "<<duration<<" HORA(S) E 0 MINUTO(S)";
    }
    if(duration_h<0)
    {
        duration_h=60+duration_h;
        cout<<"O JOGO DUROU 0 HORA(S) E "<<duration_h<<" MINUTO(S)"<<endl;
    }
    else if(start==End && start_h==End_h )
    {
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }
    else
    {
        cout<<"O JOGO DUROU "<<duration<<" HORA(S) E "<<duration_h<<" MINUTO(S)"<<endl;
    }
}

