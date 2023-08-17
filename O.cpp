#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define st string
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define nl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define elif else if

vi A;
int n, M=1, m=100;

void MAX(void)
{
    int i;
    for( i=0; i<n; i++ )
    {
       if( A[i]>M )
            M=A[i];
    }
    cout<<"The maximum number : "<<M<<nl;

}

void MIN(void)
{
    int i;
    for( i=0; i<n; i++ )
    {
       if( A[i]<m )
            m=A[i];
    }
    cout<<"The minimum number : "<<m<<nl;

}

void PRIME(void)
{
    int i, j, r=0;
    for( i=0; i<n; i++ )
    {
        bool f=1;
        int x = ceil( sqrt(A[i]) );
        if( A[i]==1 )
            continue;
        for( j=2; j<=x; j++ )
        {
            if( A[i]%j==0 && j!=A[i] )
            {
                f=0;
                break;
            }
        }
//        cout<<f<<nl;
        if( f )
            r++;
    }
    cout<<"The number of prime numbers : "<<r<<nl;
}

void Palindrome(void)
{
    int i, temp, check=0, r=0;
    for( i=0; i<n; i++ )
    {
        temp=A[i];
        check=0;
        while( temp!=0 )
        {
            check = check*10 + temp%10;
            temp/=10;
        }
        if( check==A[i] )
            r++;
    }
    cout<<"The number of palindrome numbers : "<<r<<nl;
}

void Divisors(void)
{
    int i, r=A[0], j, divisor, prev=1;
    for( i=0; i<n; i++ )
    {
        int x = ( A[i]/2 );
        if( A[i]>1 )
            divisor=2;
        else
            divisor=1;
//        cout<<x<<' '<<prev<<' '<<r<<nl;
        for( j=2; j<=x; j++ )
        {
            if( A[i]%j==0 )
                divisor++;
        }
//        cout<<divisor<<nl;
        if( prev<divisor )
        {
            r=A[i];
            prev = divisor;
        }
        elif( prev==divisor && r<A[i] )
        {
            r = A[i];
            prev = divisor;
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<r<<nl;
}


int main()
{
    optimize();

    int i, j, t;
    cin>>n;
    for( i=0; i<n; i++ )
    {
        cin>>j;
        A.pb( j );
    }
    MAX();
    MIN();
    PRIME();
    Palindrome();
    Divisors();

    return 0;
}

