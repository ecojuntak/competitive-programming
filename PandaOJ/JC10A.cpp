#include <bits/stdc++.h>

using namespace std;

int main()
{
    string data;
    int satu=0,nol=0;
    cin>>data;
    
    for(int i=0;i<data.size();i++)
    {
        if(data[i]=='1') satu++;
        else nol++;
    }
    
    if((satu==0 && nol%2==0) || (satu%2==0 && nol==0)) printf("NO\n");
    else printf("YES\n");
    
    return 0;
}
