#include<iostream>
using namespace std;
//Swapping
void Swap( int X, int Y )
{
    int Replace;
    Replace = X;
    X = Y;
    Y = Replace;
    cout<<X<<" "<<Y<<endl;
}
int main()
{
    int X, Y;
    cin>>X>>Y;
    Swap( X, Y );
    return 0;
}
