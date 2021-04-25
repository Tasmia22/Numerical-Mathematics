#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,m;
    float x[10],y[10],sum1=0,sum2=0,sum3=0,sum4=0;
    float avr1, avr2,a1,a0;
    cout<<"The Itaration number : ";
    cin>>m;
    cout<<"\nEnter the value of x & y :\n"<<endl;
    cout<<"X  Y"<<endl;
    for(i=0;i<m;i++)
    {
        cin>>x[i]>>y[i];
        sum1+=x[i];
        sum2+=y[i];
        sum3+=x[i]*x[i];
        sum4+=x[i]*y[i];
    }
    avr1=sum1/m;
    avr2=sum2/m;
    cout<<"\n\t   Xi      Yi      X*X     Xi*Yi\n"<<endl;
    printf("\t-----------------------------------");
    for(i=0;i<m;i++){
            printf("\n\t %.3f  %.3f   %.3f    %.3f ",x[i],y[i],x[i]*x[i],x[i]*y[i]);
    }
     cout<<"\n\t-----------------------------------"<<endl;
    printf("\n\t%.3f  %.3f  %.3f  %.3f \n",sum1,sum2,sum3,sum4);
    a1=(m*sum4-sum1*sum2)/(m*sum3-sum1*sum1);
    a0=avr2-a1*avr1;
    printf("\nValue of a0=%.3f  and a1=%.3f\n",a0,a1);
    cout<<"\nY="<<a0<<"+X("<<a1<<")\n";
}

