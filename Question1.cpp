#include<iostream>
using namespace std;
int main()
{
    int i,j,space;
    for(i=1;i<=7;i++)
    {
        for(space=1;space<=i;space++)
            cout<<" ";
        for(j=i;j<=7;j++)
            cout<<" "<<j;
        cout<<endl;
    }
    for(i=6;i>=1;i--)
    {
        for(space=1;space<=i;space++)
            cout<<" ";
        for(j=i;j<=7;j++)
            cout<<" "<<j;
        cout<<endl;
    }
}
