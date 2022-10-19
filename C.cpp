//Wonderful Number
#include<iostream>
using namespace std;

int OddOrNot( int N )
{
        if( N%2!=0 )
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
//Binary_Represtation
void BINARY_REPRESENTATION( int N )
{
    int A[1000], loop=0, i, j, count=0;
    while(N!=0)
    {
        A[loop] = N%2;
        N = N/2;
        loop++;
    }
    for( i=0, j=loop-1; i<loop, j>=0; i++, j-- )
    {
            if( A[i]==A[j] )
            {
                count++;
            }
    }
    if( count==loop )
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
    int N;
    cin>>N;
    int result = OddOrNot( N );
    if( result==1 )
    {
        BINARY_REPRESENTATION( N );
    }
    else
    {
        cout<<"NO\n";
    }
    return 0;
}
