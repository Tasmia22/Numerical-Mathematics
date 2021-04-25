#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    double y=0.5+sin(x);
    return y;
}
int main()
{
    double x0,x1;
    int i=0;
    cout<<"Enter initial value=";
    cin>>x0;
    x1=f(x0);
    while(fabs(x0-x1)>=0.0001)
    {
        i++;
           cout<<"\nn="<<i<<"    "<<"Xn="<<x0<<"      ";
        x0=x1;
        x1=f(x0);
          cout<<"Xn+1="<<x1<<endl;
    }
    cout<<"\nRoot is = "<<x1<<"\nloop number="<<i;
}
