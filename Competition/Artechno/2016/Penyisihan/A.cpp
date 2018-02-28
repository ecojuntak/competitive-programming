#include <bits/stdc++.h>

using namespace std;

inline string GetString(void){
	char x[100000];
	scanf("%s",&x); string s=x;
	return s;
}

int main(){
	int a,b,c,d;
	int x=0,y=0;
	cin>>a>>b>>c>>d;
	
	char qwe[a+2][b+2];
	char asd[c+2][d+2];
	
	for(int i=0;i<a;i++)
		scanf("%s",&qwe[i]);
	
	
	for(int i=0;i<c;i++)
		scanf("%s",&asd[i]);
	
	
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(qwe[i][j]=='.' && qwe[i-1][j]=='0' && qwe[i+1][j]=='0'){
//				printf("%c => %d,%d V\n",qwe[i][j],i,j);
				x++;
			}
			else if(qwe[i][j]=='.' && qwe[i][j-1]=='0' && qwe[i][j+1]=='0'){
//				printf("%c => %d,%d H\n",qwe[i][j],i,j);
				x++;
			}
		}
	}
//	printf("\n");
	for(int i=0;i<c;i++){
		for(int j=0;j<d;j++){
			if(asd[i][j]=='.' && asd[i-1][j]=='0' && asd[i+1][j]=='0'){
//				printf("%c => %d,%d V\n",asd[i][j],i,j);
				y++;
			}
			else if(asd[i][j]=='.' && asd[i][j-1]=='0' && asd[i][j+1]=='0'){
//				printf("%c => %d,%d H\n",asd[i][j],i,j);
				y++;
			}
		}
	}
	
	if(x==y) printf("IMBANG %d\n",y);
	else if(x>y) printf("Narto %d\n",x);
	else printf("Sasule %d\n",y);
	
	return 0;
}
