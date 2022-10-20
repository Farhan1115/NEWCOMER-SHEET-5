#include<bits/stdc++.h>
using namespace std;

//ShiftRight
void Shift( int N, int X )
{
    int A[N], i, j, Replace;
    for( i=0; i<N; i++ )
    {
        cin>>A[i];
    }
    for( j=0; j<X; j++ )
    {
        for(i=0; i<N; i++ )
        {
            Replace = A[i];
            A[i] = A[N-1];
            A[N-1] = Replace;
        }
    }
    for( i=0; i<N; i++ )
    {
        cout<<A[i]<<" ";
    }
}
int main()
{
    int N, X;
    cin>>N>>X;
    Shift( N, X );
    return 0;
}
