/* programa que resuelve ecuaciones cuadraticas por formula general */

#include <ionstream>
#include <math.h>
using namespace std;
int main(){
    double a,b,c,d,x1,x2;
    cout<<"\n Da el valor de a: ";
    cin>>a;
    cout<<"\n Da el valor de b: ";
    cin>>b;
    cout<<"\n Da el valor de c: ";
    cin>>c;
    d = pow(b,2)-(4*a*c);
    
    if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        cout<<"\n x1 ="<<x1;
        cout<<"\n x2 ="<<x2;
         }
    if(d==0){
         x1=(-b/(2*a));
         x2=(-b/(2*a));
         cout<<"\n x1="<<x1;
         cout<<"\n x2="<<x2;
         }     
    if(d<0){
         d=d*(-1)
         x1=(-b)/(2*a)
         x2=(sqrt(d))/(2*a);
         cout<<"\n x1="<<x1<<" + "<<x2<<"i";
         cout<<"\n x1="<<x1<<" - "<<x2<<"i";
         }     
    return 0;
}
