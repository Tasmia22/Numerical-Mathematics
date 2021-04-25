# include <iostream>
using namespace std;
int main (void)
{
    int n, i;
    double result,result2,result3, h, sum=0,sum2=0;
    cout<<"Enter num of data"<<endl;
    cin>>n;
    double X[n], Y[n];
    cout<<"Enter value of X and Y"<<endl;
    for (i=0; i<n; i++)
        cin>>X[i]>>Y[i];

    h=X[1]-X[0];

    for (i=1; i<n-1; i++)
        sum+=Y[i];
    result= (h/2)*(Y[0]+(2*sum)+Y[n-1]);

    sum=0;
    for (i=1; i<=n-1; i=i+2)
        sum+=Y[i];
    for (i=2; i<=n-2; i=i+2)
        sum2+=Y[i];
    result2=(h/3)*(Y[0]+(4*sum)+(2*sum2)+Y[n-1]);

    sum=0;
    for (i=1; i<n-1; i++)
    {
        if (i%3==0)
            sum=sum+(2*Y[i]);
        else
            sum=sum+(3*Y[i]);
    }
    result3=(3*h/8)*(Y[0]+sum+Y[n-1]);

    cout<<"Using Trapezoidal rule the result is = "<<result<<endl;
    cout<<"Using Simpson's 1/3 rule the result is = "<<result2<<endl;
    cout<<"Using Simpson's 3/8 rule the result is = "<<result3<<endl;
    return 0;
}

