#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define f first 
#define s seconf
#define pb push_back
#define mp make_pair

inline string IntToString(int a){
    char x[100];
    sprintf(x,"%d",a); string s = x;
    return s;
}

inline int StringToInt(string a){
    char x[100]; int res;
    strcpy(x,a.c_str()); sscanf(x,"%d",&res);
    return res;
}


int main(){
	int t,pukulA,pukulB,n;
	string awal, tanda, akhir;
	string a,b;
	scanf("%d",&t);
	n=t;
	int jam[25] = {0};
	
	while(t--){
		a = b = "";
		cin>>awal;
		a += awal[0];
		a += awal[1];
		pukulA = StringToInt(a);
		
		cin>>tanda;
	
		cin>>akhir;
		b += akhir[0];
		b += akhir[1];
		pukulB = StringToInt(b);
		
		for(int i=pukulA; i<=pukulB; i++){
			jam[i]++;
		}	
	}
	
	int i;
	for(i=1;i<=24;i++){
//		printf("%d ",jam[i]);
		if(jam[i] == n){
//			printf("%d\n",i);
			break;
		}
	}
	
	if(i<10) printf("0%d.00\n",i);
	else printf("%d.00\n",i);
	
	
	
	return 0;
}
