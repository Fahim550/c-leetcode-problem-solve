#include<bits/stdc++.h>
using namespace std;

int main() {
    int h,f,t,tn,fi,tw,one,pf,pff,pt,pfff,po;
    double n;

    cin>>n;
    int temp=n*100;
    cout<<"NOTAS:"<<endl;
    h=temp/10000;cout<<h<<" nota(s) de R$ 100,00"<<endl;
    temp=temp%10000;
    f=temp/5000;cout<<f<<" nota(s) de R$ 50,00"<<endl;
    temp=temp%5000;
    t=temp/2000; cout<<t<<" nota(s) de R$ 20,00"<<endl;
    temp=temp%2000;
    tn=temp/1000;cout<<tn<<" nota(s) de R$ 10,00"<<endl;
    temp=temp%1000;

    fi=temp/500;cout<<fi<<" nota(s) de R$ 5,00"<<endl;
    temp=temp%500;
    tw=temp/200;cout<<tw<<" nota(s) de R$ 2,00"<<endl;
    temp=temp%200;

    cout<<"MOEDAS:"<<endl;
    one=temp/100;cout<<one<<" moeda(s) de R$ 1,00"<<endl;
    temp=temp%100;
    pf=temp/50;cout<<pf<<" moeda(s) de R$ 0.50"<<endl;
    temp=temp%50;
    pff=temp/25;cout<<pff<<" moeda(s) de R$ 0.25"<<endl;
    temp=temp%25;
    pt=temp/10; cout<<pt<<" moeda(s) de R$ 0.10"<<endl;
    temp=temp%10;
    pfff=temp/5;cout<<pfff<<" moeda(s) de R$ 0.05"<<endl;
    temp=temp%5;

    po=temp/1;cout<<po<<" moeda(s) de R$ 0.01"<<endl;

    return 0;
}


