#include<bits/stdc++.h>
using namespace std;
int main()
{
    float x[10],y[10][10],h;
    double p,X,Y,p1;
    int n,i,j;
    cout<<"Enter total number of values  n =   "<<endl;
    cin>>n;
    cout<<"X\tY\n"<<endl;
    for(i=1;i<=n;i++)
    {
	scanf("%f %f",&x[i],&y[i][0]);
    }
    for(j=1;j<n;j++){
    for(i=1;i<=(n-j);i++)
    y[i][j] = y[i+1][j-1] - y[i][j-1];

    }
    printf("\n        Forward Difference Table \n");

    for(i=1;i<=n;i++)
    {
	printf("x[%d]=%.4f\ty[%d][0]=%.4f ",i,x[i],i,y[i][0]);
	for(j=1;j<=(n-i);j++)
	printf("\ty[%d][%d]=%.4f",i,j,y[i][j]);
	printf("\n");
    }
    h=x[2]-x[1];
    cout<<"\nh="<<h<<endl;
p=(-2*y[1][1]+y[1][2])/(2*y[1][2]);\
	printf("\np=%.1f",p);
	X=x[1]+p*h;
	printf("\nx=%.2f",X);
   p1=(X-x[n])/h;
   Y=y[5][0]+p1*y[4][2]+((p1*(p1+1)*y[3][2])/2);
   cout<<"\nY="<<fixed<<setprecision(1)<<Y<<endl;



}
