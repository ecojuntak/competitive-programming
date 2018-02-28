#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long int ll;

int abs(int x) {
    return x > 0 ? x : -x;
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout << 1 + abs(a - b) + abs(b - c) << endl;

    return 0;
}
