#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	
	string kata;
	string a = "\\(^_^)/";
	string b = ">.<\"";
	string c = "('')?";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>kata;
		
		if(kata == "semangat")
			cout<<"Case #"<<i<<": "<<a<<endl;
		else if(kata == "sebel")
			cout<<"Case #"<<i<<": "<<b<<endl;
		else
			cout<<"Case #"<<i<<": "<<c<<endl;
	}
	
	
	return 0;
}
