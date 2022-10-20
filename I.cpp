#include<bits/stdc++.h>
using namespace std;

void SWAP( int N, int X, int Y )
{
    int A[N][N];
    int row, col, i;
    int a[N], b[N];
    for( row=0; row<N; row++ )
    {
        for( col=0; col<N; col++ )
        {
            cin>>A[row][col];
        }
    }
    for( i=0; i<N; i++ )
    {
        a[i] = A[X-1][i];
    }
    for( i=0; i<N; i++ )
    {
        b[i] = A[Y-1][i];
    }
    for( i=0; i<N; i++ )
    {
        A[X-1][i] = b[i];
        A[Y-1][i] = a[i];
    }

    for( i=0; i<N; i++ )
    {
        a[i] = A[i][X-1];
    }
    for( i=0; i<N; i++ )
    {
        b[i] = A[i][Y-1];
    }
    for( i=0; i<N; i++ )
    {
        A[i][X-1] = b[i];
        A[i][Y-1] = a[i];
    }
    for( row=0; row<N; row++ )
    {
        for( col=0; col<N; col++ )
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int N, X, Y, row, col;
    cin>>N>>X>>Y;
    SWAP( N, X, Y );
    return 0;
}
