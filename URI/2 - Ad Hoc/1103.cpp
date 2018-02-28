#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c,d;

    scanf("%d %d %d %d",&a,&b,&c,&d);

    while(a!=0 && b!=0 && c!=0 && d!=0)
    {
        if(a<c)
        {
            printf("%d\n",((c-a)*60)+(abs)(d-b));
        }
        else if(a=c && d<b)
        {
        	printf("%d\n",)
		}

        scanf("%d %d %d %d",&a,&b,&c,&d);
    }

    return 0;
}
