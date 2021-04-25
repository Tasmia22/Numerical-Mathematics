#include<bits/stdc++.h>
using namespace std;
void main()
{
    int n,i,j;
    float ax[10],ay[10],x,y=0,yp,p,y1,y2,y3,y4,h;
    float diff[20][20];
    printf("gauss central interpolation formula..\n");
     printf("Enter the value of n:");
 scanf("%d",&n);
 printf("\nEnter the values:\nx   y\n");
 for(i=0;i<n;i++)
 scanf("%f%f",&ax[i],&ay[i]);
 printf("\nEnter the value of x for which you want the value of y:");
 scanf("%f",&x);
 h=ax[1]-ax[0];
 for(i=0;i<=n-1;i++)
 diff[i][1]=ay[i+1]-ay[i];
 for(j=2;j<=4;j++)
 for(i=0;i<=n-j;i++)
 {
     diff[i][j]=diff[i+1][j-1]-diff[i][j-1];
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

 i=0;
 do
 {
     i++;
 }
 while(ax[i]<x);
 i--;
 p=(x-ax[i])/h;
 y1=p*diff[i][1];
 y2=p*(p-1)*diff[i-1][2]/2;
 y3=p*(p-1)*(p+1)*diff[i-2][3]/6;
 y4=p*(p-1)*(p+1)*(p-2)*diff[i-3][4]/24;
 yp=ay[i]+y1+y2+y3+y4;
 printf("\n\nformula result=%f\n",yp);

}

