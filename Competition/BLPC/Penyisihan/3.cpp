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

inline unsigned long long int StringToInt(string a){
    char x[100]; unsigned long long int res;
    strcpy(x,a.c_str()); sscanf(x,"%lld",&res);
    return res;
}

int main(){
	int t,len;
	unsigned long long int sum;
	string bil;
	
	scanf("%d",&t);
	
	while(t--){
		sum=0;
		cin>>bil;
		len = bil.length();
		int bilAng = StringToInt(bil);
		for(int i=0;i<bil.length();i++){
			string a = "";
			a += bil[i];
			int x = StringToInt(a);
			int y = pow(x,len);
			sum += y;
		}
		
		if(sum == bilAng){
			printf("%d\n",len);
		} else{
			printf("TIDAK\n");
		}
	}
	
	
	return 0;
}
