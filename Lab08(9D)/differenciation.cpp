#include<bits/stdc++.h>
using namespace std;
int main()
{

    float x[100],y[100][100],xn,u,h,d1f,d2f,d3f;
    int n,i,j;
    cout<<"Enter total number of values  n =   "<<endl;
    cin>>n;
    cout<<"X   Y\n";
    for(i=1;i<=n;i++)
    {
	cin>>x[i]>>y[i][0];
    }
    for(j=1;j<n;j++){
    for(i=1;i<=(n-j);i++)

    {y[i][j] = y[i+1][j-1] - y[i][j-1];
    }
    }
    cout<<"\n        Forward Difference Table \n";

    for(i=1;i<=n;i++)
    {
	printf("X[%d]=%.4f   Y[%d][0]=%.4f \t",i,x[i],i,y[i][0]);
	for(j=1;j<=(n-i);j++)
	printf("   y[%d][%d]=%.4f",i,j,y[i][j]);
	printf("\n");
    }

    printf("\nEnter x  =  ");
    cin>>xn;
    h=x[2]-x[1];
    u=(xn-x[1])/h;
    cout<<"\nThe value of u  =  "<<u<<"   and h="<<h<<"\n";
    d1f=(1/h)*(y[1][1]+(2*u-1)*y[1][2]/2+(3*pow(u,2)-6*u+2)*y[1][3]/6+(4*pow(u,3)-18*pow(u,2)+22*u-6)*y[1][4]/24);
    d2f=(1/(h*h))*(y[1][2]+(u-1)*y[1][3]+(6*pow(u,2)-18*u+11)*y[1][4]/12);
    cout<<endl<<"\nThe required values are   = "<<d1f<<"  ,  "<<d2f<<"\n\n";

  }

