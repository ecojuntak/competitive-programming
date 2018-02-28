#include <bits/stdc++.h>

using namespace std;

inline string toString(unsigned long long int a){
	char x[100], y[100];
	sprintf(x,"%llu",a);
	
//	int j=0;
//	for(int i=strlen(x)-1;i>=0;i--){
//		y[j]=x[i];
//		j++;
//	}
	
	string s = x;
	return s;
}

inline string toString2(unsigned long long int a){
	char x[100], y[100];
	sprintf(x,"%llu",a);
	
	int j=0;
	for(int i=strlen(x)-1;i>=0;i--){
		y[j]=x[i];
		j++;
	}
	
	string s = y;
	return s;
}

int main(){
	int t;
	unsigned long long n,m,x;
	cin>>t;
	
	while(t--){
		cin>>n>>m;
		x = m*n;
		string s = toString(x);
		string ss = toString2(n);
		
//		cout<<s<<" "<<ss<<endl;
		if(s==ss) printf("V\n");
		else printf("X\n");
	}
	
	return 0;
}
