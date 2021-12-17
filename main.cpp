#include <iostream>
#include "complex.h"
#include <iomanip>
using namespace std;

int main()
{
    Complex Ob,Ob1(2,2),a,b(3,5);
    //cin>>Ob;
    a=Ob1;
    //cout<<Ob;
    cout<<"a= "<<a;
    cout<<"a+b= "<<a+a;
    cout<<a-b;
    cout<<fixed<<setprecision(2)<<a*b;
    cout<<fixed<<setprecision(2)<<a/b;
    cout<<a+3.4;
    cout<<3.4+a;
    cout<<a-2;
    cout<<-2-a;
    cout<<a*2;
    cout<<3*b;
    cout<<a/2;
    cout<<++a<<endl;
    return 0;
}
