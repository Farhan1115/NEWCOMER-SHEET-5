#include<bits/stdc++.h>
using namespace std;
//N_Times
void N_Times( int N, char C )
{
    int i;
    for( i=1; i<=N; i++ )
    {
        cout<<C;
        if( i<N )
        {
            cout<<" ";
        }
    }
    cout<<"\n";
}
int main()
{
    int i, T, N;
    char C;
    cin>>T;
    for( i=1; i<=T; i++ )
    {
        cin>>N>>C;
        N_Times( N, C );
    }
    return 0;
}
