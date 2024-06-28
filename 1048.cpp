#include<bits/stdc++.h>
using namespace std;

int main()
{
    float a,b,salary,p;
    cin>>a;

   if(0<=a && a<=400.00)
    {
       b=(a*15)/100;
       salary=a+b;
       p=15;

    }
    else if(400.01<=a && a<=800.00)
    {
       b=(a*12)/100;
       salary=a+b;
       p=12;

    }
    else if(800.01<=a && a<=1200.00)
    {
       b=(a*10)/100;
       salary=a+b;
       p=10;

    }
    else if(1200.01<=a && a<=2000.00)
    {
       b=(a*7)/100;
       salary=a+b;
       p=7;
    }
    else if(2000.00<a)
    {
       b=(a*4)/100;
       salary=a+b;
       p=4;

    }
    cout<<fixed<<setprecision(2)<<"Novo salario: "<<salary<<endl;
    cout<<fixed<<setprecision(2)<<"Reajuste ganho: "<<b<<endl;
    cout<<fixed<<setprecision(0)<<"Em percentual: "<<p<<" %"<<endl;
    return 0;



}
