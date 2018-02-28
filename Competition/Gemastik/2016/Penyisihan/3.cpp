#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<ii> vii;
typedef long long int ll;
typedef unsigned long long int ull;

#define REP(i,n) for(int (i) = 0; (i) < (int)(n); (i)++)
#define pb push_back
#define mp make_pair
#define f first
#define s second

struct nama{
	string nama;
	ull gem;
	ull can;
};

bool comp1(nama kata,nama kata2)
{
	if(kata.gem==kata2.gem) return kata.can < kata2.can;
	return kata.gem > kata2.gem; 
}

bool comp2(nama kata,nama kata2)
{
	if(kata.can==kata2.can) return kata.gem < kata2.gem;
	return kata.can > kata2.can; 
}

vector<nama> data; 

int main()
{
	int t,n;
	nama temp;
	cin>>t;
	vector <string> tim1;
	vector <string> tim2;
	
	while(t--)
	{
		ull sum1=1,sum2=1;
		ull g,c;
		string na;
		cin>>n;
		while(n--)
		{
			cin>>na;
			scanf("%llu %llu",&g,&c);
			temp.nama = na;
			temp.gem = g;
			temp.can = c;
			data.pb(temp);
		}
		
		sort(data.begin(),data.end(),comp1);
		
//		for(int i=0;i<data.size();i++)
//		{
//			if(data[i].flag==false) continue;
//			cout<<data[i].nama<<" "<<data[i].gem<<" "<<data[i].can<<endl;
//		}
		
		int hit=0;
		for(int i=0;i<data.size();i++)
		{
			if(hit==3)break;
			tim1.pb(data[i].nama);
			sum1 *= data[i].gem;
			data[i].gem=0;
			data[i].can=0;
			hit++;		
		}
		
		sort(data.begin(),data.end(),comp2);
		
//		for(int i=0;i<data.size();i++)
//		{
//			if(data[i].flag==false) continue;
//			cout<<data[i].nama<<" "<<data[i].gem<<" "<<data[i].can<<endl;
//		}
		
		hit=0;
		for(int i=0;i<data.size();i++)
		{
			if(hit==3) break;
//			if(data[i].flag==false) continue;
			tim2.pb(data[i].nama);
			sum2 *= data[i].can;
			hit++;		
		}

		printf("%llu\n",sum1+sum2);
		
		for(int i=0;i<tim1.size();i++)
		{
			cout<<tim1[i];
			if(i!=tim1.size()-1) printf(" ");
		}
		printf("\n");
		
		for(int i=0;i<tim2.size();i++)
		{
			cout<<tim2[i];
			if(i!=tim2.size()-1) printf(" ");
		}
		printf("\n");
		
		tim1.clear();
		tim2.clear();
		data.clear();
	}
	
	return 0;
}
