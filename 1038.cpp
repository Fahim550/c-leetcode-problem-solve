#include <bits/stdc++.h>

using namespace std;

int main() {

   int x,y;
   float total;
   cin>>x,y;
    total=0;
    if(x==1){
            total = y * 4.00;
    }
    else if(x==2){
            total =  y * 4.50;
    }
    else if(x==3){
            total = y * 5;
    }
    else if(x==4){
            total = y * 2.00;
    }
    else if(x==5){
            total = y * 1.50;
    }
    cout<<fixed<<setprecision(2)<<"Total: R$ "<<total<<endl;


    return 0;
}
