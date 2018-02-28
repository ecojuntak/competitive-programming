#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define f first 
#define s seconf
#define pb push_back
#define mp make_pair

int main(){
	int a;
	
	cin>>a;
	
	if(a==1) printf("0\n");
	else if(a%2==0) printf("%d\n",a/2);
	else printf("%d\n",a);
	
	
	return 0;
}
