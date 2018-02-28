#include <bits/stdc++.h>
#define ft first
#define sc second
#define mp make_pair
#define pb push_back

using namespace std;

int main() {
	char in[1000];
	scanf("%s", in);
	int len = strlen(in);
	long long ans, temp;
	ans = 0, temp = 0;
	for (int i = 0; i < len; i++) {
		if (in[i] >= '0' && in[i] <= '9') {
			temp *= 10;
			temp += in[i] - '0';
		} else {
			ans += temp;
			temp = 0;
		}
	}
	ans += temp;
	printf("%lld\n", ans);
	
	
	return 0;
}
