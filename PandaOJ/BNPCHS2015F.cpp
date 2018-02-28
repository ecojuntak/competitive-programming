#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	int n,a,b,c,k;
	int x,y,z;
	int data[100009], permen[100009];
	char anak[100009];
	
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++)
	{
		memset(anak,'x',sizeof(anak));
		list <int> q;
		scanf("%d %d %d %d %d",&n,&a,&b,&c,&k);
		anak[a]='a'; anak[b]='b'; anak[c]='c';
		
		for(int j=1;j<=n;j++) scanf("%d",&data[j]);
		
		for(int j=1;j<=n;j++) permen[j] = data[j];
		
//		printf("data\n");
//		for(int j=1;j<=n;j++)
//		{
//			printf("%c -- >%d\n",anak[j],permen[j]);	
//		}
//		printf("\n");
//		printf("awal  > ");
//		for(int j=1;j<=n;j++)
//			printf("%d ",permen[j]);
//		printf("\n");
		
		for(int g=0;g<k;g++)
		{
			q.clear();
		for(int j=1;j<=n;j++)
		{
//			printf("anak yg di cek adalah %c\n",anak[j]);
			if(anak[j]=='x')
			{
				if(j==1)
				{
//					printf("\ttotal awal %d\n",permen[j]);
					q.push_back(permen[j]/2);
//					printf("\ttotal dibagi %d\n",q.back());
					permen[j] -= q.back();
//					printf("\ttotal ditambah %d\n",q.front());
//					permen[j] += q.front();
//					printf("\ttotal akhir %d\n",permen[j]);
//					q.pop_front();
				}
				else
				{
//				printf("\ttotal awal %d\n",permen[j]);
				q.push_back(permen[j]/2);
//				printf("\total dibagi %d\n",q.back());
				permen[j] -= q.back();
//				printf("\ttotal ditambah %d\n",q.front());
				permen[j] += q.front();
//				printf("\ttotal akhir %d\n",permen[j]);
				q.pop_front();
				}
			}
			else if(anak[j]=='a')
			{
				if(j==1)
				{
//					printf("\ttotal awal %d\n",permen[j]);
					float temp;
					temp = (float)permen[j]/2;
					q.push_back((int)(ceil)(temp));
//					printf("\ttotal dibagi %d\n",q.back());
					permen[j] -= q.back();
//					printf("\ttotal ditambah %d\n",q.front());
//					permen[j] += q.front();
//					printf("\ttotal akhir %d\n",permen[j]);
//					q.pop_front();	
				}
				else
				{
//				printf("\ttotal awal %d\n",permen[j]);
				float temp;
				temp = (float)permen[j]/2;
				q.push_back((int)(ceil)(temp));
//				printf("\total dibagi %d\n",q.back());
				permen[j] -= q.back();
//				printf("\ttotal ditambah %d\n",q.front());
				permen[j] += q.front();
//				printf("\ttotal akhir %d\n",permen[j]);
				q.pop_front();
				}
			}
			else if(anak[j]=='b')
			{
				if(permen[j]!=0)
				{
					if(j==1)
					{
						permen[j]--;
//					printf("\ttotal awal %d\n",permen[j]);
					q.push_back(permen[j]/2);
//					printf("\total dibagi %d\n",q.back());
					permen[j] -= q.back();
//					printf("\ttotal ditambah %d\n",q.front());
//					permen[j] += q.front();
//					printf("\ttotal akhir %d\n",permen[j]);
//					q.pop_front();	
					}
					else
					{
					permen[j]--;
//					printf("\ttotal awal %d\n",permen[j]);
					q.push_back(permen[j]/2);
//					printf("\ttotal dibagi %d\n",q.back());
					permen[j] -= q.back();
//					printf("\ttotal ditambah %d\n",q.front());
					permen[j] += q.front();
//					printf("\ttotal akhir %d\n",permen[j]);
					q.pop_front();
					}
				}
				else
				{
					if(j==1)
					{
//						printf("\ttotal awal %d\n",permen[j]);
						q.push_back(0);
//						printf("\ttotal dibagi %d\n",q.back());
						permen[j] -= q.back();
//						printf("\ttotal ditambah %d\n",q.front());
//						permen[j] += q.front();
//						printf("\ttotal ditambah %d\n",q.front());
//						q.pop_front();
					}
					else
					{
//					printf("\ttotal awal %d\n",permen[j]);
					q.push_back(0);
//					printf("\ttotal dibagi %d\n",q.back());
					permen[j] -= q.back();
//					printf("\ttotal ditambah %d\n",q.front());
					permen[j] += q.front();
//					printf("\ttotal ditambah %d\n",q.front());
					q.pop_front();
					}
				}
			}
			else if(anak[j]=='c')
			{
				if(permen[j]/2 > 10)
				{
					if(j==1)
					{
//						printf("\ttotal awal %d\n",permen[j]);
					q.push_back(10);
//					printf("\ttotal dibagi %d\n",q.back());
					permen[j] -= q.back();
//					printf("\ttotal ditambah %d\n",q.front());
//					permen[j] += q.front();
//					printf("\ttotal ditambah %d\n",q.front());
//					q.pop_front();
					}
					else
					{
//					printf("\ttotal awal %d\n",permen[j]);
					q.push_back(10);
//					printf("\ttotal dibagi %d\n",q.back());
					permen[j] -= q.back();
//					printf("\ttotal ditambah %d\n",q.front());
					permen[j] += q.front();
//					printf("\ttotal ditambah %d\n",q.front());
					q.pop_front();
					}
				}
				else
				{
					if(j==1)
					{
//						printf("\ttotal awal %d\n",permen[j]);
					q.push_back(permen[j]/2);
//					printf("\ttotal dibagi %d\n",q.back());
					permen[j] -= q.back();
//					printf("\ttotal ditambah %d\n",q.front());
//					permen[j] += q.front();
//					printf("\ttotal ditambah %d\n",q.front());
//					q.pop_front();
					}
					else
					{
//					printf("\ttotal awal %d\n",permen[j]);
					q.push_back(permen[j]/2);
//					printf("\ttotal dibagi %d\n",q.back());
					permen[j] -= q.back();
//					printf("\ttotal ditambah %d\n",q.front());
					permen[j] += q.front();
//					printf("\ttotal ditambah %d\n",q.front());
					q.pop_front();
					}
				}
			}
			}
//			printf("temp  > ");
//			for(int j=1;j<=n;j++)
//				printf("%d ",permen[j]);
//			printf("\n");
			permen[1] += q.front();
			q.pop_front();
//			printf("total diawal %d\n",q.front());
		}
//		q.clear();
		printf("Kasus #%d: %d %d %d\n",i,permen[a],permen[b],permen[c]);
	}
	
	return 0;
}
