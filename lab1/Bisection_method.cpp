#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    double y=pow(x,3)+pow(x,2)-1;
    return y;
}
int main()
{
    int i=0;
    double a,b,r,fp,fq,fr;
    cout<<"Enter the initial value :  \na =";
    cin>>a;
    cout<<"f(a)="<<f(a)<<endl;
    cout<<"\nb  =";
    cin>>b;
     cout<<"f(b)="<<f(b)<<endl;

    while(fabs(a-b)>=0.0001)
    {
        i++;
        r=(a+b)/2;
        fp=f(a);
        fq=f(b);
        fr=f(r);
        cout<<"n="<<i<<"       "<<"a ="<<a<<"    "<<" b ="<<b<<"    "<<" f(a) ="<<fp<<"            "<<"r="<<r<<"             "<<"fr ="<<fr<<endl;
        cout<<"\n";
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
