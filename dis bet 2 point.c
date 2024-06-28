#include<iostream>
#include <math.h>


int main(){
    float x1,x2,y1,y2,dis;
    cin>>x1>>y1;
    cin>>x2>>y2;
    dis=sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    cout<<fixed<<setprecision(4)<<dis;


}




