#include <bits/stdc++.h>

using namespace std;

int r,c;
typedef pair<int,int> pii;
typedef vector <pair <int,int> > vii;
typedef vector <pair <int,pii> > viii;
viii result;

int dr[8] = {1,-1,0,0};
int dc[8] = {0,0,1,-1};

void BFS(pii S, pii D, char **map)
{
    queue <pii> Q;
    int langkah = 0;

    Q.push(S);

    while(!Q.empty()){
        langkah++;

        int sizey = Q.size();

        for(int i = 1; i <= sizey; i++){
            pii posNow = Q.front();
            Q.pop();

            for(int i = 0; i < 4; i++){
                int tempR = posNow.first + dr[i];
                int tempC = posNow.second + dc[i];

                if(tempR < 0 || tempR >= r || tempC < 0 || tempC >= c) continue;
                else
				{
                    if(map[tempR][tempC] == 'D')
                    {
                    	result.push_back(make_pair(langkah,make_pair(tempR,tempC)));
					}
                    else if(map[tempR][tempC] == '.') Q.push(make_pair(tempR,tempC));
                }
                map[tempR][tempC] = '#';
            }
        }
    }
}

int main()
{
	cin>>r>>c;
	pii node[5];
	char maze[1000][1000];
	char map[1000][1000];

	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
			cin>>maze[i][j];
			if(maze[i][j]=='E') node[0] = make_pair(i,j);
			else if(maze[i][j]=='1') node[1] = make_pair(i,j);
			else if(maze[i][j]=='2') node[2] = make_pair(i,j);
			else if(maze[i][j]=='3') node[3] = make_pair(i,j);
			else if(maze[i][j]=='4') node[4] = make_pair(i,j);
		}
	}

	for(int i=0;i<c;i++)
		for(int j=0;j<r;j++)
			map[i][j] = maze[i][j];

	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<4;j++)
		{
			BFS(node[i],node[i+1],(char **)map);
		}
		sort(result.begin(),result.end());
		pii temp;
		printf("%d = %d,%d",result.first,temp.first,temp.second);
	}

	return 0;
}
