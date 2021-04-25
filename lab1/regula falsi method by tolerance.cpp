#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    double y=x*log10(x)-1.2;
    return y;
}
int main()
{
    int i=0;
    double a,b,r=0,fp,fq,fr,temp,diff;
    cout<<"Enter the initial value :  \na =";
    cin>>a;
    cout<<"f(a)="<<f(a)<<endl;
    cout<<"\nb  =";
    cin>>b;
     cout<<"f(b)="<<f(b)<<endl;

  do{
        i++;
        temp=r;
        r=(float)((a*f(b))-(b*f(a)))/(f(b)-f(a));
        fp=f(a);
        fq=f(b);
        fr=f(r);
  cout<<"n="<<i<<"       "<<"a ="<<a<<"    "<<" f(a) ="<<fp<<"         "<<" b ="<<b<<"    "<<"f(b)"<<fq<<"    "<<"r="<<r<<"         "<<"fr ="<<fr;
        if(fr==0)
        {
            cout<<"The root of the eqn is "<<r;
        }
       else if(fp*fr>0)
        {
            a=r;
        }
        else if (fp*fr<0)
        {
            b=r;
        }
        diff=fabs((r-temp)/r)*100;
        cout<<"         E= "<<fixed<<setprecision(4)<<diff<<"%\n\n";
    }while(diff>=0.5);

    cout<<"\nThe root of the eqn is\n "<<r;
    cout<<"\nThe loop number="<<i;
    return 0;
}



