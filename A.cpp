#include<iostream>
using namespace std;
int Add( int X, int Y )
{
    cin>>X>>Y;
    int Sum = X+Y;
    return Sum;
}
int main()
{
    int X, Y;
    int result = Add( X, Y );
    cout<<result<<endl;
    return 0;
}
