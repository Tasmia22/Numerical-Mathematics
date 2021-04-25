#include<bits/stdc++.h>
using namespace std;
int main()
{
    float u,x[10],y[10],h,sum=0,sum2=0,T,S;
    int count=0;
    cout<<"Set upperlimit=";
    cin>>u;
    cout<<"\nSet lowerlimit=";
    cin>>x[0];
    while(1)
    {
        cout<<"\nSet h(dif)=";
        cin>>h;
        for(int i=0;; i++)
        {
            count++;
            x[i+1]= h+x[i];

            if(x[i+1]>=u)
                break;
        }
        for(int i=0; i<count; i++)
        {
            y[i]=1/(1+x[i]);
        }
        cout<<"Data Table"<<endl;
        cout<<" X       Y\n";
           for(int i=0; i<count; i++)
        {
           printf("%.4f\t%.4f\n",x[i],y[i]);
        }
        for(int i=1;i<count-1;i=i+2)
            sum=sum+y[i];
             for(int i=2;i<=count-2;i=i+2)
            sum2=sum2+y[i];
            cout<<"\nSum="<<sum<<endl;
         T=(y[0]+2*sum+y[count-1])/(2/h);
         cout<<"T=("<<y[0]<<"+"<<2*sum<<"+"<<y[count-1]<<")/"<<(2/h);
         cout<<"\n\nBy trapezoidal="<<T<<"\n\n";
        cout<<"\nu="<<u<<endl;
         //simpson
         S=(y[0]+4*sum+2*sum2+y[count-1])/(3/h);
         //cout<<"S=("<<y[0]<<"+"<<4*sum<<"+"<<y[count-1]<<")/"<<(3/h);
         cout<<"\n\nBy simpson Rule="<<S<<"\n\n";


    }
}
