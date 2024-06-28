#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A,B,C;
    cin>>A>>B>>C;

    if (A>=(B+C) || B>=(A+C) || C>=(A+B))
    {
    cout<<"NAO FORMA TRIANGULO"<<endl;
    }
    else if(A*A==(B*B+C*C) || B*B==(A*A+C*C)|| C*C==(B*B+A*A)){
    cout<<"TRIANGULO RETANGULO"<<endl;
    }
    else if((A*A>(B*B+C*C)) || (B*B>(A*A+C*C)) || (C*C>(B*B+A*A))){
    cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }
    else if((A*A<(B*B+C*C)) || (B*B<(B*B+A*A)) || (C*C<(B*B+A*A))){
    cout<<"TRIANGULO ACUTANGULO"<<endl;
    }
    if(A==B && A==C){
        cout<<"TRIANGULO EQUILATERO"<<endl;
    }
    if((A == B && A != C)  || (A == C && A != B) || (B == C && B != A)){
        cout<<"TRIANGULO ISOSCELES"<<endl;
    }



}
