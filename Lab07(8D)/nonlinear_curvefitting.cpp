#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    double sumx=0,sumy=0,sumx2=0,sumx3=0,sumx4=0,sumx2y=0,sumxy=0,D,dC,dA,dB,a,b,c;
    cout<<"Enter the number of record =";
    cin>>n;
    double x[n],y[n];
    cout<<"X  Y"<<endl;
    for(i=0; i<n; i++)
        cin>>x[i]>>y[i];
    for(i=0; i<n; i++)
    {
        sumx=sumx+x[i];
        sumy=sumy+y[i];
        sumx2=sumx2+(x[i]*x[i]);
        sumxy=sumxy+(x[i]*y[i]);
        sumx3=sumx3+(x[i]*x[i]*x[i]);
        sumx4=sumx4+(x[i]*x[i]*x[i]*x[i]);
        sumx2y=sumx2y+(x[i]*x[i]*y[i]);
    }
    D=n*(sumx2*sumx4-sumx3*sumx3)-sumx*(sumx*sumx4-sumx2*sumx3)+sumx2*(sumx*sumx3-sumx2*sumx2);
    dA=sumy*(sumx2*sumx4-sumx3*sumx3)-sumx*(sumxy*sumx4-sumx2y*sumx3)+sumx2*(sumxy*sumx3-sumx2*sumx2y);
    dB=n*(sumxy*sumx4-sumx2y*sumx3)-sumy*(sumx*sumx4-sumx2*sumx3)+sumx2*(sumx*sumx2y-sumx2*sumxy);
    dC=n*(sumx2*sumx2y-sumx3*sumxy)-sumx*(sumx*sumx2y-sumx2*sumxy)+sumy*(sumx*sumx3-sumx2*sumx2);
    a=dA/D;
    b=dB/D;
    c=dC/D;
    cout<<"\nao="<<a<<"\na1="<<b<<"\na2="<<c<<"\n";
    cout<<"The equation of the polynomial is of form\n Y="<<a<<"+"<<b<<"X"<<"+"<<c<<"x2\n";
    return 0;
}
