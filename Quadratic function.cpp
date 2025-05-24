//Hosama Adem
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a,b,c,disc,root1,root2;
    cout<<"welcome to this program that calculate aquadratic function root\n";
    cout<<"for the function  you give me\n ";
    cout<<"ax+bx+c=0 \n";
    cout<<"please  the value of a,b,c respectively please ";
    cin>>a>>b>>c;
    if (a==0.0 && b==0.0)
            cout<<"the equation has no root";
    else if (a==0.0)
        cout<<"the equation has one real root "<<-c/b<<endl;

    else{
     disc=pow(b,2) -(4*a*c);

     if (disc>0.0){
        disc=sqrt(disc);
        root1=(-b+disc)/2*a;
        root2=(-b-disc)/2*a;
        cout<<"the two reel roots are "<<root1<<" and "<<root2<<endl;

     }
     else if(disc<0.0)
        cout<<"both roots are imaginary ";
     else{
        cout<<"both have equall value "<<-b/2*a<<endl;

     }

    }

return 0;
}
