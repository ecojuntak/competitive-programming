#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef pair<char,pii> pcii;
typedef vector <pair <int,int> > vii;
typedef vector <pair <int,pcii> > vicii;
vicii result;
string maze[10005];
string clone[10005];

int r,c;
int dr[8] = {1,-1,0,0};
int dc[8] = {0,0,1,-1};
int flag[5]={1};

inline string GetString(void)
{
    char x[1000005];
    scanf("%s",x);
    string s = x;
    return s;
}

void BFS(string *map, pii S, char D)
{	
    queue <pii> Q;
    int langkah = 0;
    Q.push(S);
    
    clone[S.first][S.second] = '#';

/*	for (int i = 0; i <c; i++)
	{
    	for (int j = 0; j < r; j++)
        	printf("%c",clone[i][j]);
    	printf("\n");
	}
*/	
    for (int i = 0; i <c; i++)
    	for (int j = 0; j < r; j++)
        	map[i][j] = clone[i][j];
      

    while(!Q.empty()){
        langkah++;
		int fff=0;
        int sizey = Q.size();

        for(int i = 1; i <= sizey; i++){
            pii posNow = Q.front();
            Q.pop();
		
            for(int j = 0; j < 4; j++){
                int tempR = posNow.first + dr[j];
                int tempC = posNow.second + dc[j];

                if(tempR < 0 || tempR >= r || tempC < 0 || tempC >= c) 
				{
					continue;
				}
                else
				{
                    if(map[tempR][tempC] == D)
                    {
                    	printf(">>>>> %c\n",D);
                    	result.push_back(make_pair(langkah,make_pair(D,make_pair(tempR,tempC))));
                    	fff=1;
                    	break;
					}
                    else if(map[tempR][tempC] == '.')
					{
						Q.push(make_pair(tempR,tempC));	
					}
                }
                map[tempR][tempC] = '#';
            }
            if(fff==1) break;
        }
    }
    Q.empty();
}

int main()
{
	int total=0;
	cin>>c>>r;
	pii node[5];
	string map[100005];
	char art[]={'E','1','2','3','4'};
	
	for(int i = 0; i < c; i++){
        string baris = GetString();
        maze[i] = baris;
    }
	
	for(int i=0;i<c;i++)
		for(int j=0;j<r;j++)
		{
			map[i][j] = maze[i][j];
			clone[i][j] = maze[i][j];	
		}
	
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(maze[i][j] == 'E') node[0] = make_pair(i,j);
        }
    }
	
		
	pii start=node[0];
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{	
		 	printf("bfs start from %d,%d to %c\n",start.first,start.second,art[j]);
				BFS(map,start,art[j]);	
		}
		sort(result.begin(),result.end());
		
		pcii y = result[0].second;
		pii temp = result[0].second.second;
		start = temp;
		total += result[0].first;
		printf("%d = %d,%d dengan node %c\n",result[0].first,temp.first,temp.second,y.first);
		
		for(int y=0;y<5;y++)
		{
			pcii cha = result[y].second;
			pii temp = result[y].second.second;
			printf("%d = %d,%d dengan node %c\n",result[y].first,temp.first,temp.second,cha.first);
		}
		result.clear();
	}
	
	printf("%d\n",total);
	
	return 0;
}
