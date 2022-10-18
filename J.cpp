#include<bits/stdc++.h>
using namespace std;

double average(int N)
{
    int i;
    double A[N];
    double result, sum = 0;
    for( i=0; i<N; i++ )
    {
        cin>>A[i];
       sum = sum+A[i];
    }
    return result = sum/N;
}

int main()
{
    int N;
    cin>>N;
    double result = average( N );
    cout<<fixed<<setprecision(6);
    cout<<result<<endl;
    return 0;
}
