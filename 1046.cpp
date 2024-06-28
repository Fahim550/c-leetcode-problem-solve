#include<bits/stdc++.h>
using namespace std;

int main()
{
    int start,End,duration;

    cin>>start>>End;
    duration=End-start;
    if(duration<0)
    {
        duration=24+duration;
        cout<<"O JOGO DUROU "<<duration<<" HORA(S)";
    }
    else if(start==End)
    {
        cout<<"O JOGO DUROU 24 HORA(S)";
    }
    else
    {
        cout<<"O JOGO DUROU "<<duration<<" HORA(S)";
    }
}
