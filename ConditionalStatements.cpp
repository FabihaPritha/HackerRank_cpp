#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    
    if(n>=1 && n<=9)
    {
        string w[]={"one","two","three","four","five","six","seven","eight","nine"};
        cout<<w[n-1]<<endl;
    }
    else{
        cout<<"Greater than 9"<<endl;
    }
}