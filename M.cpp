#include<bits/stdc++.h>
using namespace std;

void Distinct_Numbers( int N, int A[] )
{
    int i, C=N, F=0;
    for( i=0; i<N; i++ )
    {
        for( int j=i+1; j<N; j++ )
        {
            if( A[i]==A[j] && A[i]!=-10e4 )
              { C-=1;
                A[j] = -10e4;
              }
        }
        //if( F==0 )

    }
    cout<<C<<endl;
}
int main()
{
    int N, i;
    cin>>N;
    int A[N];
    for( i=0; i<N; i++ )
        {
            cin>>A[i];
        }
    Distinct_Numbers( N, A );

    return 0;
}
