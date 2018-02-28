    #include<bits/stdc++.h>
    using namespace std;
     
    typedef pair<int,int> pii;
     
    int n,m;
     
    bool valid(int x,int y){
    	return x>=1 && y>=1 && x<=n && y<=m;
    }
     
    int main(){
    	int tes,i,j,bab,k,xp,yp,xb,yb;
    	int xx[]={1,-1,0,0},yy[]={0,0,1,-1};
    	#define f first
    	#define s second
    	#define mp make_pair
    	
    	pii tuj,dep,cal;
    	cin>>tes;
    	
    	while(tes--){
    		cin>>n>>m;
    		char ar[n+1][m+1];
    		bool dp[n+1][m+1];
    		queue<pii> lin,lib;
    		vector<pii> boom[n+1][m+1];
    		memset(dp,0,sizeof(dp));
    		
    		for(i=1;i<=n;i++){
    			for(j=1;j<=m;j++){
    				cin>>ar[i][j];
    				if(ar[i][j]=='S'){
    					lin.push(mp(i,j));
    					dp[i][j]=true;
    				}
    				else if(ar[i][j]=='E'){
    					tuj=mp(i,j);
    					ar[i][j]='.';
    				}
    			}
    		}
    		
    		cin>>bab;
    		while(bab--){
    			cin>>xp>>yp>>xb>>yb;
    			boom[xp][yp].push_back(mp(xb,yb));
    		}
    		
    		while(lin.empty()==false || lib.empty()==false){
    			while(!lin.empty()){
    				dep=lin.front();
    				lin.pop();
    				for(i=0;i<boom[dep.f][dep.s].size();i++){
    					lib.push(boom[dep.f][dep.s][i]);
    				}
    				for(k=0;k<4;k++){
    					cal=mp(dep.f+xx[k],dep.s+yy[k]);
    					if(valid(cal.f,cal.s) && ar[cal.f][cal.s]=='.' && dp[cal.f][cal.s]==false){
    						lin.push(cal);
    						dp[cal.f][cal.s]=true;
    					}
    				}
    			}
    			
    			while(!lib.empty()){
    				dep=lib.front();
    				lib.pop();
    				if(ar[dep.f][dep.s]=='.')continue;
    				ar[dep.f][dep.s]='.';
    				for(k=0;k<4;k++){
    					cal=mp(dep.f+xx[k],dep.s+yy[k]);
    					if(valid(cal.f,cal.s) && dp[cal.f][cal.s]==true){
    						lin.push(dep);
    						dp[dep.f][dep.s]=true;
    						break;
    					}
    				}
    			}
    		}
    		if(dp[tuj.f][tuj.s]){
    			cout<<"Yes\n";
    		}
    		else{
    			cout<<"No\n";
    		}
    	}
    }
