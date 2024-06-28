#include<bits/stdc++.h>
using namespace std;

int main(){
float A,B,C,Triangle,circule,Tra,Square,Rectangle,pi;
cin>>A>>B>>C;
pi=3.14159;
Triangle=.5*A*C;
circule=pi*C*C;
Tra=((A+B)*C)/2;
Square=B*B;
Rectangle=A*B;

cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<Triangle<<endl;
cout<<fixed<<setprecision(3)<<"CIRCULO: "<<circule<<endl;

cout<<fixed<<setprecision(3)<<"TRAPEZIO:  "<<Tra<<endl;
cout<<fixed<<setprecision(3)<<"SQUARE: "<<Square<<endl;
cout<<fixed<<setprecision(3)<<"RECTANGLE: "<<Rectangle<<endl;
  return 0;
}
