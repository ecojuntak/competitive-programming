#include <bits/stdc++.h>

using namespace std;
typedef pair <int,int> pii;
typedef vector <pair <int,pii> > viii;

int r,c;
int dr[8] = {1,-1,0,0};
int dc[8] = {0,0,1,-1};
viii result;

string maze[1005];
string peta[1005];
string peta2[1005];

inline string GetString(void)
{
    char x[1000005];
    scanf("%s",x);
    string s = x;
    return s;
}

void BFS(pii S, char D, string map[])
{
//	printf("bfs from %d,%d to find %c\n",S.first,S.second,D);	
	
	queue <pii> Q;
    int langkah = 0;
    Q.push(S);
    
    while(!Q.empty()){
        langkah++;
        int sizey = Q.size();

        for(int i = 1; i <= sizey; i++){
            pii posNow = Q.front();
            Q.pop();
		
            for(int j = 0; j < 4; j++){
                int tempR = posNow.first + dr[j];
                int tempC = posNow.second + dc[j];

                if(tempR < 0 || tempR >= r || tempC < 0 || tempC >= c) continue;
                else if((tempR==S.first) && (tempC==S.second)) continue;
                else
				{
                    if(map[tempR][tempC] == D)
                    {
                    	result.push_back(make_pair(langkah,make_pair(tempR,tempC)));
                    	break;
					}
                    else if((map[tempR][tempC] == '.') || (map[tempR][tempC] == '1') || (map[tempR][tempC] == '2') || (map[tempR][tempC] == '3') || (map[tempR][tempC] == '4'))
					{
						Q.push(make_pair(tempR,tempC));	
					}
                }
                map[tempR][tempC] = '#';
            }
        }
    }
    Q.empty();
}

int main()
{
	int total = 0;
	cin>>r>>c;
	pii start;
	char art[]={'1','2','3','4'};
	
	for(int i = 0; i <r; i++){
        string baris = GetString();
        maze[i] = baris;
    }
    
    for(int i=0;i<c;i++)
    {
    	peta[i] = maze[i];
		peta2[i] = maze[i];	
	}
	
		
	for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            if(peta[i][j] == 'E') start = make_pair(i,j);
    
    for(int j=0;j<4;j++)
    {
    	for(int i=0;i<4;i++)
   		{
   			peta[start.first][start.second] = '#';
    		BFS(start,art[i],peta2);
    		for(int i=0;i<c;i++)
				peta2[i] = peta[i];
		}
		
		sort(result.begin(),result.end());
		start = result[0].second;
	    printf("get >>>>>>>> %d %d,%d\n",result[0].first,start.first,start.second);
	    total += result[0].first;
	    result.clear();	
	}
	
	for(int i=0;i<c;i++)
		peta2[i] = maze[i];
	
	BFS(start,'E',peta2);
	sort(result.begin(),result.end());
	start = result[0].second;
	printf("get >>>>>>>> %d %d,%d\n",result[0].first,start.first,start.second);
	total += result[0].first;
	result.clear();	
	
	printf("%d\n",total);
	
	return 0;
}
