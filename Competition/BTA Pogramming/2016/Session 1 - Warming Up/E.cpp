#include <bits/stdc++.h>

using namespace std;

int main(){
	string kata;
	
	getline(cin,kata);
	
	for(int i=0;i<kata.length();i++){
		if(kata[i]=='a') printf("4");
		else if(kata[i]=='i') printf("1");
		else if(kata[i]=='o') printf("0");
		else if(kata[i]=='s') printf("5");
		else if(kata[i]=='e') printf("3");
		else printf("%c",kata[i]);
	}
	printf("\n");
	
	return 0;
}
