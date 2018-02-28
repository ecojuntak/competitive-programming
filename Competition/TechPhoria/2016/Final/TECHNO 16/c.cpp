#include <bits/stdc++.h>
#define ft first
#define sc second
#define mp make_pair
#define pb push_back

using namespace std;
bool flag[1000005];
int arr[1005];
int angka[1005];
pair<int,int>memo[1005][1005];
int n;
map<int,int>pt;
void sieve() {
	flag[1]=0;
	for(int i = 2; i<=1000; i++) {
		if(flag[i]) {
			for(int j = i*i; j<=1000000; j+=i) {
				flag[j]=0;
			}
		}
	}
}

pair<int,int>dp(int indx, int last){
	
	if(indx==n)return mp(0,0);
	if(memo[indx][last].ft!=-1)return memo[indx][last];
	
	pair<int,int>res1 = dp(indx+1,last);
	
	pair<int,int>res2 = dp(indx+1,pt[angka[indx]]);
	
	int prim = 0, notprim = 1;
	
	if(flag[angka[indx]]==true)prim++;
	//else notprim++;
	
	res2.ft+=prim;
	res2.sc+=notprim;
	if(pt[angka[indx]]<=last)res2=mp(0,0);
	
	if(res1.ft>res2.ft)return memo[indx][last]=res1;
	else if(res1.ft<res2.ft)return memo[indx][last]=res2;
	else{
		if(res1.sc>res2.sc)return memo[indx][last]=res1;
		else return memo[indx][last]=res2;
	}
}

int main() {
	memset(flag,true, sizeof flag);
	sieve();
	
	for(int x=0;x<1002;x++){
		for(int y=0;y<1002;y++){
			memo[x][y].ft=-1;
			memo[x][y].sc=-1;
		}
	}
	
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d",&arr[x]);
		angka[x]=arr[x];
	}
	
	sort(arr,arr+n);
	int idx=1;
	for(int x=0;x<n;x++){
		if(pt[arr[x]]==0){
			//cout<<"fu "<<arr[x]<<" "<<idx<<endl;
			pt[arr[x]]=idx;
			idx++;
		}	
	}
	
	pair<int,int>ans = dp(0,0);
	printf("%d %d\n",ans.ft,ans.sc);
	
	
	return 0;
}
