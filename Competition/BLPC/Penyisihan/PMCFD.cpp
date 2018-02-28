#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define f first 
#define s seconf
#define pb push_back
#define mp make_pair

inline int StringToInt(string a){
    char x[100]; int res;
    strcpy(x,a.c_str()); sscanf(x,"%d",&res);
    return res;
}


int main(){
	int t,pukulA,menit,pukulB,n;
	string awal, tanda, akhir;
	string a,aa,b;
	scanf("%d",&t);
	int maksMobil=0;
	int jam[25] = {0};
	int mins=25,maks=-1;
	
	while(t--){
		aa = a = b = "";
		cin>>awal;
		a += awal[0];
		a += awal[1];
		aa += awal[3];
		aa += awal[4];
		pukulA = StringToInt(a);
		menit = StringToInt(aa);
		
		cin>>tanda;
	
		cin>>akhir;
		b += akhir[0];
		b += akhir[1];
		pukulB = StringToInt(b);
		
//		printf("pukul %d - pukul %d\n",pukulA,pukulB);
		if(mins > pukulA) mins = pukulA;
		if(maks < pukulB) maks = pukulB; 
		
		while(pukulA != pukulB){
			jam[pukulA]++;
			pukulA++;
			if(pukulA==24) pukulA = 0;
		}
	}
	
	for(int i=0;i<=23;i++){
		if(maksMobil < jam[i]) maksMobil=jam[i];
	}
	
	while(mins!=maks){
		if(jam[mins] == maksMobil){
			break;
		}
		mins++;
		if(mins==24) mins = 0;
	}
	
	
	if(mins<10) printf("0%d.00\n",mins);
	else printf("%d.00\n",mins);
	
//	if(mins<10){
//		if(menit!=0){
//			if(mins<10) printf("0%d.0%d\n",mins,menit);
//			else printf("0%d.%d\n",mins,menit);
//		}
//		else printf("0%d.00\n",mins);
//	}
//	else{
//		if(menit!=0){
//			if(mins<10) printf("%d.0%d\n",mins,menit);
//			else printf("%d.%d\n",mins,menit);
//		}
//		else printf("%d.00\n",mins);
//	}
	return 0;
}
