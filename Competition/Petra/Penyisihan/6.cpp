#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair <double,double> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

double x1,x2,x3,y_1,y2,y3;

bool isDot()
{
	if(x1==x2 && x2==x3 && y_1==y2 && y2==y3) return true;
	return false;	
}

bool isLine()
{
	double a,b;
	
	a = (y2-y_1)*(x3-x1);
	b = (x2-x1)*(y3-y_1);
	
	if(a==b) return true;
	return false;
}

int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%lf %lf %lf %lf %lf %lf",&x1,&y_1,&x2,&y2,&x3,&y3);
		
		vii dots,dots2;
		
		dots.push_back(make_pair(x1,y_1));
		dots.push_back(make_pair(x2,y2));
		dots.push_back(make_pair(x3,y3));
		
		dots2.push_back(make_pair(x1,y_1));
		dots2.push_back(make_pair(x2,y2));
		dots2.push_back(make_pair(x3,y3));
		
		sort(dots2.begin(),dots2.end());
		
		double xMax1 = max(x1,max(x2,x3));
		double yMax1 = max(y_1,max(y2,y3));
		
		ii asd = dots2[0];
		ii asd2 = dots2[2];
		
		if(isDot()) printf("%.6lf %.6lf\n",x1,y_1);
		else if(isLine())
		{			
			for(int i=0;i<3;i++)
			{
				ii qwe = dots[i];
				if(qwe.first == asd.first && qwe.second == asd.second)
						printf("%.6lf %.6lf",qwe.first,qwe.second);
					else if(qwe.first == asd2.first && qwe.second == asd2.second)
						printf("%.6lf %.6lf",qwe.first,qwe.second);
			}
			printf("\n");
			dots.clear();
		}
		else printf("%.6lf %.6lf %.6lf %.6lf %.6lf %.6lf\n",x1,y_1,x2,y2,x3,y3);
	}
	
	
	return 0;
}
