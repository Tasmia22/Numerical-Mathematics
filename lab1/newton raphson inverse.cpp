#include<bits/stdc++.h>
using namespace std;
double func(double x)
{
    double y=pow(x,-1)-154;
    return y;
}
double deriv(double x)
{
    double y=-pow(x,-2);
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
        x=x-h;
    }
    cout<<"\nRoot is ="<<x<<"\nLoop number "<<i<<endl;
}
int main()
{
    double x;
    cin>>x;
    newtn(x);
    return 0;
}

