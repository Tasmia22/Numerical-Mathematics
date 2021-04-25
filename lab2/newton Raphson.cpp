#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    double y=pow(x,3)-2*pow(x,2)+3*x-5;
    return y;
}
double deriv(double x)
{
    double y=3*pow(x,2)-4*x+3;
    return y;
}
void newtn(double x)
{
    int i=0;
    double h=func(x)/deriv(x);
    while(fabs(h)>0.0001)
    {
         i++;
        h=func(x)/deriv(x);
        cout<<"\nn="<<i<<"    "<<"Xn="<<x<<"      ";
        x=x-h;
        cout<<"Xn+1 ="<<x<<endl;
    }
    cout<<"\nRoot is ="<<x<<endl;
}
int main()
{
    double x;
    cin>>x;
    newtn(x);
    return 0;
}
