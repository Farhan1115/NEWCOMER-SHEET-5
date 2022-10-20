#include<bits/stdc++.h>
using namespace std;
void New_Array( int N, int A[], int B[] )
{
    for( int i=0; i<N; i++ )
    {
        cout<<B[i]<<" ";
    }
    for( int i=0; i<N; i++ )
    {
        cout<<A[i]<<" ";
    }

}
int main()
{
    int N, i;
    cin>>N;
    int A[N], B[N];
    for( i=0; i<N; i++ )
    {
        cin>>A[i];
    }
    for( i=0; i<N; i++ )
    {
        cin>>B[i];
    }
    New_Array( N, A, B );
    return 0;
}
