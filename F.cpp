#include<bits/stdc++.h>
using namespace std;
//equation
void Equation( int X, int N )
{
    int i, j;
    long long int S=0, S1=1;
    for( i=2; i<=N; i+=2 )
    {
        S1=1;
        for( j=1; j<=i; j++ )
        {
            S1 = S1*X;
        }
        S = S+S1;
    }
    cout<<S<<endl;
}
int main()
{
    int X, N;
    cin>>X>>N;
    Equation( X, N );
    return 0;
}
