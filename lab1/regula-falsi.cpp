#include<bits/stdc++.h>
using namespace std;
float f(double x)
{
    float y=x*tan(x)+1;
    return y;
}
int main()
{
    int i=0;
    float a,b,r=0,fp,fq,fr,temp,diff;
    cout<<"Enter the initial value :  \na =";
    cin>>a;
    cout<<"f(a)="<<f(a)<<endl;
    cout<<"\nb  =";
    cin>>b;
     cout<<"f(b)="<<f(b)<<endl;

  do{
        i++;
        temp=r;
        r=((a*f(b))-(b*f(a)))/(f(b)-f(a));
        fp=f(a);
        fq=f(b);
        fr=f(r);
        cout<<"n="<<i<<"       "<<"a ="<<a<<"    "<<" f(a) ="<<fp<<"         "<<" b ="<<b<<"    "<<"f(b)"<<fq<<"    "<<"r="<<r<<"         "<<"fr ="<<fr<<endl;
        cout<<"\n";
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
        diff=fabs(r-temp);
    }while(diff>=0.0001);

    cout<<"\nThe root of the eqn is\n "<<r;
    cout<<"\nThe loop number="<<i;
    return 0;
}

