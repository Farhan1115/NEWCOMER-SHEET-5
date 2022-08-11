#include<iostream>
#include<math.h>
using namespace std;
//PrimeFunction
void Prime( int N )
{
    int i, count=0;
    if( N==1 )
    {
      count = 1;
    }
    for( i=2; i<=sqrt(N); i++ )
    {
        if( N%i==0 )
        {
            count=1;
            break;
        }
    }
    if( count==0 )
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
int main()
{
    int T, N;
    cin>>T;
    for( int i=1; i<=T; i++ )
    {
        cin>>N;
        Prime( N );
    }
    return 0;
}
