#include<iostream>
using namespace std;
int main()
{
       int n;cin>>n;
    string s;
    cin>>s;
    int a = 0,d = 0;
    for(int i =0; i<n;i++)
    {
        if(s[i] == 'A') a++;
        if(s[i] == 'D') d++;
    }

    if(a == d) cout<<"Friendship"<<endl;
    else if(a>d) cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;

}