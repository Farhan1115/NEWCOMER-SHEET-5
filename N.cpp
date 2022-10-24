#include<bits/stdc++.h>
using namespace std;

void Shift_Zero( int N )
{
    int i, A[N];
    for( i=0; i<N; i++ )
    {
        cin>>A[i];
    }
    for( i=0; i<N; i++ )
    {

        if( A[i]==0 )
        {
            for( int j=i+1; j<N; j++ )
            {
                if( A[j]!=0 )
                {
                    int temp = A[i];
                    A[i] = A[j];
                    A[j] = temp;
                    break;
                }
            }
        }

    }

    for( i=0; i<N; i++ )
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int N;
    cin>>N;
    Shift_Zero( N );
    return 0;
}
