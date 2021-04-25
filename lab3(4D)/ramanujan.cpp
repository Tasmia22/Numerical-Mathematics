#include<bits/stdc++.h>
using namespace std;
double A[100];
double B[100];
double DIV[100];
double Find_B(int x)
{
    int i;
    double sum=0.0;
    for(i=1;i<x;i++)
    {
        sum=sum+1.0*(A[i]*B[x-i]);
    }
    return sum;
}
void divisn()
{
    for(int i=0;i<35;i++)
    {
        DIV[i]=B[i]/(1.0*B[i+1]);
    }
}
int main()
{
    double a,b,c,d;
    cout<<"Enter co-effeciant"<<endl;
    cout<<"co-effient of x3=";
    cin>>c;
    cout<<"co-effient of x2=";
    cin>>b;
        cout<<"co-effient of x=";
    cin>>a;
    cout<<"co-efficint of constant=";
    cin>>d;
    A[1]=a/(-d);
    A[2]=b/(-d);
    A[3]=c/(-d);
    B[1]=1;
    for(int i=2;i<35;i++)
    {
        B[i]=Find_B(i);
    }
    divisn();
    int i=1;
        double h=DIV[i]-DIV[i+1];
        while(fabs(h)>0.0001)
        {
            cout<<endl;
            i++;
                divisn();
            h=DIV[i]-DIV[i+1];
            cout<<"n="<<i<<"\t"<<"b"<<i<<"/b"<<i+1<<"="<<DIV[i]<<endl;
        }
        cout<<"\nRoot is="<<DIV[i];
}
