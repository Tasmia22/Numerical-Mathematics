#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    double y=pow(x,3)-2*x-5;
    return y;
}
int main()
{
    int i=0;
    double a,b,r,fp,fq,fr;
    cout<<"Enter the initial value :  \na =";
    cin>>a;
    cout<<"\nb  =";
    cin>>b;
    while(fabs(a-b)>=0.0001)
    {
        i++;
        r=(a+b)/2;
        fp=f(a);
        fq=f(b);
        fr=f(r);
        cout<<" a ="<<a<<"    "<<" b ="<<b<<"    "<<" r ="<<r<<"       fr ="<<fr<<endl;
        if(fr==0)
        {
            cout<<"The root of the eqn is "<<r;
        }
        if(fp*fr>0)
        {
            a=r;
        }
        else if (fp*fr<0)
        {
            b=r;
        }
    }

    cout<<"\nThe root of the eqn is\n "<<r;
    cout<<"\nThe loop number="<<i;
    return 0;
}
