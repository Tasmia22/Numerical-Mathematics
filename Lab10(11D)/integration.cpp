#include<bits/stdc++.h>
using namespace std;
int main()
{
    float u,x[10],y[10],h,T,S;
    cout<<"Set upperlimit=";
    cin>>u;
    cout<<"\nSet lowerlimit=";
    cin>>x[0];
    while(1)
    {
        int count=0;
        float sum=0,sum2=0,sum3=0;
        cout<<"\nSet h(dif)=";
        cin>>h;
        for(int i=0;; i++)
        {

            x[i+1]= h+x[i];
            count++;
            if(x[i+1]>u)
            {
                //cout<<"x["<<i+1<<"]="<<x[i+1];
                break;
            }


        }
        //cout<<"\nCount="<<count<<endl;
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
        for(int i=1; i<count-1; i++)
        {
            sum=sum+y[i];
            //cout<<"\nsum="<<sum<<"\ty["<<i<<"]="<<y[i]<<endl;
        }
        // cout<<"\nSum="<<sum<<endl;
        T=(y[0]+2*sum+y[count-1])/(2/h);
        //cout<<"T=("<<y[0]<<"+"<<2*sum<<"+"<<y[count-1]<<")/"<<(2/h);
        cout<<"\n\nBy trapezoidal="<<T<<"\n\n";
        for(int i=1; i<count-1; i=i+2)
        {
            sum2=sum2+y[i];
            // cout<<"\nsum2="<<sum2<<"\ty["<<i<<"]="<<y[i]<<endl;
        }
        for(int i=1; i<count-2; i=i+2)
        {
            sum3=sum3+y[1+i];
            //cout<<"\nsum3="<<sum3<<"\ty["<<i+1<<"]="<<y[i+1]<<endl;
        }
//cout<<"\nSum2="<<sum2<<"\tSum3="<<sum3;
        //cout<<"\nu="<<u<<endl;
        S=(y[0]+4*sum2+2*sum3+y[count-1])/(3/h);
        cout<<"\nS=("<<y[0]<<"+"<<4*sum2<<"+"<<2*sum3<<"+"<<y[count-1]<<")/"<<(3/h);
        cout<<"\nBy simpson Rule="<<S<<"\n\n";
    }
}

