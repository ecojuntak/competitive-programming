#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n,m,a;
    unsigned long long int x,y;
    cin>>n>>m>>a;

    if(n%a > 0){
        x = (n/a)+1;
    }else{
        x = (n/a);
    }

    if(m%a > 0){
        y = (m/a)+1;
    }else{
        y = (m/a);
    }

    cout<<y*x<<endl;

	return 0;
}
