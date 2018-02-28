#include <iostream>
using namespace std;

int main()
{
		int N, P;
		cin >> N >> P;
		for (int j = 1; j <= N; j++)
		{
			cout << ((j + 1) * P);
			if (j < N) cout << " ";
		}
}
