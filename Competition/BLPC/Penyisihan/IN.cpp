#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

ll power(ll x,ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res*x;
        y = y>>1;
        x = x*x;
    }
    return res;
}

int main(){
	ll bil, t, temp;
    vector<ll> data;
	
	cin>>t;
	
	while(t--){
		data.clear();
		cin>>bil;
		ll bilangan;
		ll cek=0;
		bilangan = bil;
		
		if(bil>=0 && bil<=9){
			printf("1\n");
			continue;
		} else{
			while(bil){
	            temp = bil%10;
	            if(bil!=0) data.push_back(temp);
	            bil /= 10;
       		}
       		
       		bool narsis = false;
		   	ll orde = 1;
		   	ll sum = 0;
		   	
			while(sum<=bilangan){
				sum=0;
				for(int i=0;i<data.size();i++){
					sum += power(data[i],orde);
				}
				
				if(sum == bilangan){
					narsis = true;
					break;
				}
				if(sum==cek) break;
				cek=sum;			
				orde++;
			}
			
			if(narsis){
				printf("%d\n",orde);
			} else{
				printf("TIDAK\n");
			}
		}
	}
	
	
	return 0;
}
