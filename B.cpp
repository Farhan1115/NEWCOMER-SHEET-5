#include<iostream>
using namespace std;
void Print( int N )
{
    for( int i=1; i<=N; i++ )
    {
        cout<<i;
        if( i<N )
        {
            cout<<" ";
        }
    }
}
int main()
{
    int N;
    cin>>N;
    Print( N );

    return 0;
}
