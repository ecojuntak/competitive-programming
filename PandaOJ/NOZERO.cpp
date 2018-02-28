#include <bits/stdc++.h>

using namespace std;

inline unsigned long long int StringToInt(string a){
    char x[100]; unsigned long long int res;
    strcpy(x,a.c_str()); sscanf(x,"%llu",&res);
    return res;
}


inline unsigned long long int StringToInt2(char temp[]){
    char x[100]; unsigned long long int res;
	sscanf(temp,"%llu",&res);
    return res;
}

inline string IntToString(unsigned long long int a){
    char x[100];
    sprintf(x,"%llu",a); string s = x;
    return s;
}

unsigned long long int method1(string data)
{
	int x = data.size();
//	printf("data.size %d\n",x);
	char temp[x];
	char temp2[x];
	
	unsigned long long int result = 0;	
	
	bool flag = false;
	
	for(int j=0;j<data.size();j++)
	{
		if(data[j]=='0') flag = true;
		
		if(flag == true)
		{
			temp[j] = '1';
			temp2[j] = data[j];	
		}
		else 
		{
			temp[j]='0';
			temp2[j]='0';	
		}
	}
//	cout<<temp<<"  "<<temp2<<endl;
//	printf("_________\n");
//	printf("%s  %s\n",temp,temp2);
//	printf("len %d\n",strlen(temp));
//	printf("len2 %d\n",strlen(temp2));

	result = StringToInt(temp) - StringToInt(temp2);
	return result;
}


int main()
{
	int t;
	unsigned long long int num,satu;
	string data;
	
	scanf("%d",&t);
	
	for(int i=1;i<=t;i++)
	{
		cin>>num;
		data = IntToString(num);
		satu = method1(data);
		
		printf("Kasus %d: %llu\n",i,satu);
	}
	
	return 0;
}
