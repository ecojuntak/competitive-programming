#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define f first 
#define s seconf
#define pb push_back
#define mp make_pair

long long int x1,x2,Y1,y2,n,t,posX,posY;
string marni="Marni", jiseka="Jiseka", arah;
string nama;
bool ketemu = false;

void cekPos(){
	if((x1==x2 && Y1==y2) && ketemu == false){
		ketemu = true;
		posX = x1;
		posY = y2;
	}
}

int main(){
	scanf("%lld %lld %lld %lld %lld",&x1,&Y1,&x2,&y2,&n);
	
	cekPos();
	
	for(int i=0;i<n;i++){
		cin>>nama;
		cin>>arah;
		cin>>t;
		t = abs(t);
		if(nama == marni){
			if(arah=="U"){
				for(int i=0;i<t;i++){
					y2++;
					cekPos();
				}
			}
			else if(arah=="S"){
				for(int i=0;i<t;i++){
					y2--;
					cekPos();
				}
			}
			else if(arah=="T"){
				for(int i=0;i<t;i++){
					x2++;
					cekPos();
				}
			}
			else if(arah=="B"){
				for(int i=0;i<t;i++){
					x2--;
					cekPos();
				}
			}
		} else if(nama == jiseka){
			if(arah=="U"){
				for(int i=0;i<t;i++){
					Y1++;
					cekPos();
				}
			} 
			else if(arah=="S"){
				for(int i=0;i<t;i++){
					Y1--;
					cekPos();
				}
			} 
			else if(arah=="T"){
				for(int i=0;i<t;i++){
					x1++;
					cekPos();
				}
			}
			else if(arah=="B"){
				for(int i=0;i<t;i++){
					x1--;
					cekPos();
				}
			}
		}
	}
	
	if(ketemu){
		printf("Ya, di (%lld,%lld)\n",posX,posY);
	} else{
		printf("Tidak\n");
	}
	
	return 0;
}
