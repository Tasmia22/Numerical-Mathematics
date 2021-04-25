#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x[20],y[20],Xn,Yn=0,Ynn=1,x_r=0,y_r=0;
    int n,i,j;
    cout<<"Input the number of co-ordinates: "<<endl;
    cin>>n;
       cout<<"\nEnter the value of x & y :\n"<<endl;
    cout<<"X     Y"<<endl;
    for(i=0;i<n;i++)
    {
   cin>>x[i]>>y[i];
    }
    printf("\n\nInput the value of x(n) : ");
    scanf("%f",&Xn);
    for(i=0;i<n;i++)
    {
        Ynn=1;
        x_r=x[i];
        y_r=y[i];
        for(j=0;j<n;j++)
        {
            if(i==j)
            Ynn=Ynn*y[j];
            else
            Ynn=Ynn*((Xn-x[j])/(x[i]-x[j]));
        }
        Yn=Yn+Ynn;
    }
    printf("\n\ny(n)=%f\n\n",Yn);

    return 0;
}

