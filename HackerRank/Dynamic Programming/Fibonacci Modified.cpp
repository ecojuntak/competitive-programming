#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int t1, t2, n, sum = 0,temp;
    
    cin>>t1>>t2>>n;
    
    if(n==1) printf("%llu\n",t1);
    else if(n==2) printf("%llu\n",t2);
    
    for(int i=3;i<=n;i++){
        temp = pow(t2,2);
        sum = t1 + temp;
        t1 = t2;
        t2 = sum;
    }
    
    printf("%llu\n",sum);
    return 0;
}

