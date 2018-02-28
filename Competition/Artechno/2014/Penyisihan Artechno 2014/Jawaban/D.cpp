
// Template by Hierony

#include <cstdio>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <iostream>
#include <limits.h>

#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <set>
#include <bitset>

using namespace std;

typedef unsigned long long ULL;
typedef long long LL;
typedef pair<int,int> pii;
typedef pair<pii,pii> ppi;
typedef pair<LL,LL> pll;
typedef pair<string,string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<LL> vl;
typedef vector<vl> vvl;
typedef vector<string> vstr;
typedef vector<char> vc;
typedef map <int,int> mii;

double PI = acos(-1);

#define REP(i,n) for(int (i) = 0; (i) < (int)(n); (i)++)
#define READ_int(data) scanf("%d",&data); 
#define RESET(c,v) memset(c, v, sizeof(c))
#define MAX(a,b) a = max(a,b)
#define MIN(a,b) a = min(a,b)
#define pb push_back
#define mp make_pair
#define ALL(vec) vec.begin(),vec.end()
#define sI(val) scanf("%d",&val)
#define sID(val,val2) scanf("%d %d",&val,&val2)
#define INF 2123123123

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

inline string GetString(void){
	char x[1000005];
	scanf("%s",x); string s = x;
	return s;
}


// FPB gan
int gcd(int  a, int b){
	if(b == 0)return a;
    else return gcd(b,a%b);
}

bitset<10000010> bs;
vi primes;

// Prima pertama terdapat di primes[1] yah :D
void sieve(LL upperbound){
	bs.set();
	bs[0]=bs[1]=0;
	primes.pb(0);
	for(LL i=2; i<=upperbound+1; i++)if(bs[i]){
	for(LL j=i*i; j<= upperbound+1; j+=i)bs[j] = 0;
			primes.pb((int) i);
	}
}

int main()
{
	int stat[15];    // Status Lampu
	
	string data[15];
	data[1] = "coklat";
	data[2] = "merah";
	data[3] = "orange";
	data[4] = "kuning";
	data[5] = "hijau";
	data[6] = "biru";
	data[7] = "ungu";
	data[8] = "abu-abu";
	data[9] = "putih";
	
	for(int i = 1; i <= 9; i++)
	{
		int val;
		sI(val);
		
		stat[i] = val;
	}
	
	// Perubahan
	int N;
	sI(N);
	REP(a,N)
	{
		int A,X;
		sID(A,X);
		
		int hasil = 0;
		if(X % 2 == 0) hasil = 0;
		else hasil = 1;
		
		// Berarti harus berubah
		if(hasil == 1)
		{
			if(stat[A] == 1) stat[A] = 0;
			else if(stat[A] == 0) stat[A] = 1;
		} 
	}
	
	// Hitung banyaknya.
	int cou = 0;
	for(int i = 1; i <= 9; i++)
	{
		//printf("stat[%d] : %d\n",i,stat[i]);
		if(stat[i] == 1) cou++;
	}
	
	if(cou > 0) printf("%s\n",data[cou].c_str());
	else printf("mati\n");
}
