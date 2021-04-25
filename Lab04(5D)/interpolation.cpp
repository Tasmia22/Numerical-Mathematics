#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int factp(int k)
{
    int i,p=1;
    for(i=1;i<=k;i++)
    {
        p=p*i;
    }
    return p;
}
double forwrd(int m,double p)
{
    int i;
    double pr=1.0,q;
    for(i=1;i<=m-1;i++)
    {
        pr=pr*(p-i);
    }
    q=p*pr;
    return q;
}
double backwrd(int m,double p)
{
    int h;
    double pr=1.0,q;
    for(h=1;h<=m-1;h++)
    {
        pr=pr*(p+h);
    }
    q=p*pr;
    return q;
}
int main()
{
    double y[50][50],x[50];
    int n,i,j;
    double p,e,s,d,sum=0,r,sum1=0,r1;
    cout<<"Enter n=";
    cin>>n;
    cout<<"\nx0=";
    cin>>s;
    cout<<"\nmissing Point=";
    cin>>e;
    cout<<"\nDiff=";
    cin>>d;
    p=(e-s)/d;
    cout<<"p="<<p<<endl;
    cout<<"X"<<" "<<"Y"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>x[i]>>y[0][i];
    }
       cout<<"Forward Difference Table"<<endl;
     cout<<" X"<<" \t"<<"Y"<<"\t";
     for(i=2;i<=n;i++)
     {cout<<"del_y"<<i-1<<"\t";}
     cout<<"\n";
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            y[i][j]=y[i-1][j+1]-y[i-1][j];
        }
    }
    for(j=0;j<n;j++)
    {
       cout<<x[j]<<"\t";
        for(i=0;i<n-j;i++)
        {
            cout<<y[i][j]<<"\t";
        }
        printf("\n");
    }
    for(i=2;i<=n-1;i++)
    {
        sum=sum+(forwrd(i,p)/(factp(i)))*y[i][0];
    }
    r=y[0][0]+p*y[1][0]+sum;
    cout<<"Y("<<e<<") is="<<r<<endl;

cout<<"Backward Difference"<<endl;
 cout<<" X"<<" \t"<<"Y"<<"\t";
for(i=2;i<=n;i++)
     {cout<<"del_y"<<i-1<<"\t";}
     cout<<"\n";
    for(i=1;i<n;i++)
    {
        for(j=n-1;j>=i;j--)
        {
            y[i][j]=y[i-1][j]-y[i-1][j-1];
        }
    }
    for(j=0;j<n;j++)
    {
        cout<<x[j]<<"\t";
        for(i=0;i<=j;i++)
        {
            cout<<y[i][j]<<"\t";
        }
        printf("\n");
    }
     for(i=2;i<=n-1;i++)
    {
        sum1=sum1+(backwrd(i,p)/(factp(i)))*y[i][i];
    }
    r1=y[n-1][n-1]+p*y[1][n-1]+sum1;
 cout<<"Y("<<e<<") is="<<r<<endl;
}
