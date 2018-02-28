#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
//typedef first f;
//typedef second s;
//typedef push_back pb;
//typedef make_pair mp;

int main(){
	long long int x1,x2,y1,y2,n,t,posX,posY;
	string marni="Marni", jiseka="Jiseka", arah;
	string nama;
	scanf("%lld %lld %lld %lld %lld",&x1,&y1,&x2,&y2,&n);
	bool ketemu = false;
	
	for(int i=0;i<n;i++){
		cin>>nama;
		cin>>arah;
		cin>>t;
		
		if(nama == marni){
			if(arah=="U") y2 += t;
			else if(arah=="S") y2 -= t;
			else if(arah=="T") x2 += t;
			else if(arah=="B") x2 -= t;
		} else if(nama == jiseka){
			if(arah=="U") y1 += t;
			else if(arah=="S") y1 -= t;
			else if(arah=="T") x1 += t;
			else if(arah=="B") x1 -= t;
		}
		
//		printf("Jiseka (%d,%d) dan Marni (%d,%d)",x1,y1,x2,y2);
		
		if(x1==x2 && y1==y2){
			ketemu = true;
			posX = x1;
			posY = y2;
		}
	}
	
	if(ketemu){
		printf("Ya, di (%lld,%lld)\n",posX,posY);
	} else{
		printf("Tidak\n");
	}
	
	return 0;
}
