#include<bits/stdc++.h>
using namespace std;

int main ()
{
    string a,b,c;
    //char vertebrado,ave,carnivoro,onivoro,mamifero,herbivoro,invertebrado,inseto,hematopago,anelideo;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a=="vertebrado")
    {
        if(b="ave")
        {
            if(c=="carnivoro"){
                cout<<"aguia"<<endl;
            }
            else if(c=="onivoro"){
                cout<<"pomba"<<endl;
            }
        }
        else if(b=="mamifero")
        {
            if (c=="onivoro"){
                cout<<"homem"<<endl;
            }
            else if(c=="herbivoro"){
                cout<<"vaca"<<endl;
            }

        }
    }
    else if(a=="invertebrado"){
        if(b=="inseto"){
            if(c=="hematopago"){
                cout<<"pulga"<<endl;
            }
            else if(c=="herbivoro"){
                cout<<"lagarta"<<endl;
            }
        }
        else if(b=="anelideo"){
            if(c=="hematopago"){
                cout<<"sanguessuga"<<endl;
            }
            else if(c=="onivoro"){
                cout<<"minhoca"<<endl;
            }
        }
    }

    return 0;
}
