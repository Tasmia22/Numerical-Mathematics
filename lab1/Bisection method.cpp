#include<bits/stdc++.h>
using namespace std;
double f(int a, int b, int c, int d, int x)
{
    double y=a*pow(x,3)+b*pow(x,2)+c*x+d;
    return y;
}
int main()
{
    double w,x,y,z,i=1.000;
    double a,b,fa,fb,fq,q;
    cout<<"Enter the coefficient "<<endl;
    cin>>w>>x>>y>>z;
    cout<<"Enter the initial value"<<endl;
    cin>>a;
    cin>>b;
  // q[i]=(a+b)/2;
    while(fabs(a-b)>=0.0001)
    { i++;
        q=(a+b)/2;
        fa=f(w,x,y,z,a);
        fb=f(w,x,y,z,b);
        fq=f(w,x,y,z,q);
        if(fa*fq==0)
        {
            cout<<"Root="<<q;
            break;
        }
        if(fa*fq<0)
        {
            a=q;
        }
        else if(fa*fq>0)
        {
            b=q;
        }


    }
    cout<<"\nLoop number="<<i;
    cout<<"\nRoot=  "<<q;
}
