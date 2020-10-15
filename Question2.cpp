#include<iostream>
#include<string.h>
using namespace std;
int x=0,y=0,z=0;
int main()
{
    int i,j=0;
    char str1[15],str2[10];
    cout<<"String str1=";
    cin>>str1;
    cout<<"String str2=";
    cin>>str2;
    while(j != strlen(str1))
    {
        for(i=j;i<j+3;i++)
        {
            if(str1[i]==str2[0])
                x++;
            else if(str1[i]==str2[1])
                z++;
            else
                y++;
        }
        if(x==1&&y==1&&x==1)
        {
            cout<<"Substring ";
            for(i=j;i<j+3;i++)
                cout<<str1[i];
            cout<<" index is: "<<j;

        }
        j++;
        x=y=z=0;
        cout<<endl;
    }
}
