#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a,ch;
    float ax[10],diff[20][20],x,y=0,yp,p,y1,y2,y3,y4,h;
    printf("gauss central interpolation formula..\n");
     printf("Enter the value of n:");
 scanf("%d",&n);
 printf("\nEnter the values:\nx      y\n");
   for(i=0;i<n;i++)
    {
        cin>>ax[i]>>diff[0][i];
    }
     while(1){
    cout<<"1.Forward interpolation\t2.Backward interpolation\t0.Exit"<<endl;
    cout<<"Enter your choice:";
    cin>>ch;
    if(ch==1){
 printf("\nEnter the value of x for which you want the value of y:");
 scanf("%f",&x);
 h=ax[1]-ax[0];
 a=(int)(n/2);
 p=(x-ax[a])/h;
   cout<<"The Difference Table"<<endl;
     cout<<" X"<<" \t       "<<"Y"<<"\t        ";
     for(i=2;i<=n;i++)
     {cout<<"del_y"<<i-2<<"\t      ";}
     cout<<"\n";
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            diff[i][j]=diff[i-1][j+1]-diff[i-1][j];
        }
    }
    for(j=0;j<n;j++)
    {
       cout<<ax[j]<<"\t";
        for(i=0;i<n-j;i++)
        {
            cout<<fixed<<setprecision(4)<<"["<<i<<"]"<<"["<<j<<"]="<<diff[i][j]<<"\t";

        }
        printf("\n");
    }

 y1=p*diff[3][1];
 y2=p*(p-1)*diff[3-1][2]/2;
 y3=p*(p-1)*(p+1)*diff[3-2][3]/6;
 y4=p*(p-1)*(p+1)*(p-2)*diff[3-3][4]/24;
 yp=diff[0][3]+y1+y2+y3+y4;
 printf("\n\n Gauss forward difference formula result=%f\n",yp);
    }
    else if(ch==2){
 printf("\nEnter the value of x for which you want the value of y:");
 scanf("%f",&x);
 h=ax[1]-ax[0];
 a=(int)(n/2);
 p=(x-ax[a])/h;
   cout<<"The Difference Table"<<endl;
     cout<<" X"<<" \t       "<<"Y"<<"\t        ";
     for(i=2;i<=n;i++)
     {cout<<"del_y"<<i-2<<"\t      ";}
     cout<<"\n";
    for(i=1;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            diff[i][j]=diff[i-1][j+1]-diff[i-1][j];
        }
    }
    for(j=0;j<n;j++)
    {
       cout<<ax[j]<<"\t";
        for(i=0;i<n-j;i++)
        {
            cout<<fixed<<setprecision(4)<<"["<<i<<"]"<<"["<<j<<"]="<<diff[i][j]<<"\t";

        }
        printf("\n");
    }

 y1=p*diff[1][a];
 y2=p*(p+1)*diff[a-1][2]/2;
 y3=p*(p-1)*(p+1)*diff[a][2]/6;
 y4=p*(p-1)*(p+1)*(p+2)*diff[a+1][1]/24;
 yp=diff[0][3]+y1+y2+y3+y4;
 printf("\n\nBackward difference formula result=%f\n",yp);
    }
    else if(ch==0) {
        exit(1);}
    }
    return 0;

}


