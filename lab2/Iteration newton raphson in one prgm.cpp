#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    double y=pow(1+x,-0.5);
    return y;
}
double func(double x)
{
    double y=pow(x,3)+pow(x,2)-1;
    return y;
}
double deriv(double x)
{
    double y=3*pow(x,2)+2*x;
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
void Iteration(double x)
{
    double x1;
    int i=0;
    x1=f(x);
    while(fabs(x-x1)>=0.0001)
    {
        i++;
        cout<<"\nn="<<i<<"    "<<"Xn="<<x<<"      ";
        x=x1;
        x1=f(x);
        cout<<"Xn+1="<<x1<<endl;
    }
    cout<<"\nRoot is = "<<x1<<endl;
}
int main()
{
    double x;
    int i=0,option;

    cout<<"*press '1'for Iteration method"<<"\n*press '2' for newton Raphson method"<<"\n*press '0' for exit"<<endl;

    while(option)
    {
        cin>>option;
        cout<<"\nEnter initial guesses\t"<<endl;
        cin>>x;
        switch(option)
        {
        case 1:
            Iteration(x);
            break;
        case 2:
            newtn(x);
            break;
        default :
            cout<<"Invalid option"<<endl;
        }
        cout<<"Press another option"<<endl;
    }
}
