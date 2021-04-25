#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   int q,n,c;
   int a;
float b;
    float x[10],y[10];
    printf("How many data you want to calculate: ");
          scanf("%d",&n);
         for(q=0;q<n;q++){scanf("%f%f",&x[q],&y[q]);}
    float d1[10],d2[10];
    float res1,res2,p,p1,d3[10],d4[10],d5[10],d6[10];
    float h;
    p1=-0.2;
    h=x[1]-x[0];
    cout<<"Here h="<<h<<endl;
    int i=0;
    cout<<"\n\n";
   //cout<<"The differences are:\n";
    //cout<<"\n\nThe differences of del^1 del^2 is:\n\n";
    for(i=0;i<4;i++)
    {
        d1[i]=y[i+1]-y[i];
        //cout<<d1[i]<<endl;
        //cout<<"del:"<<i<<":"<<d1[i]<<endl;
        d1[i+1]=y[i+2]-y[i+1];
        d2[i]=d1[i+1]-d1[i];
        //cout<<d2[i]<<endl;
       // cout<<"del^2:"<<i<<":"<<d2[i]<<endl;

    }
    p=(((-d1[0]*2)+d2[0])/(d2[0]*2));
printf("Enter the value you want to check for maximum: ");
scanf("%f",&b);
for(a=0;a<n;a++){
if (x[a]==b);
c=a;break;
}
    res1=x[c]+p*h;
    cout<<res1<<endl;
    printf("Enter the value you want to check for minimum: ");
scanf("%f",&b);
for(a=0;a<n;a++){
if (y[a]==b);
c=a;break;}
    res2=y[c]-0.2*d1[3]+(((-0.2)*(-0.2+1))/2)*d2[2];
    cout<<res2<<endl;

}



