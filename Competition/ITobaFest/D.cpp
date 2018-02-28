#include <bits/stdc++.h>

using namespace std;

int lps(string kata)
{
   int n = kata.length();
   int i, j, cl;
   int L[n][n];

   for (i = 0; i < n; i++)
      L[i][i] = 1;

    for (cl=2; cl<=n; cl++)
    {
        for (i=0; i<n-cl+1; i++)
        {
            j = i+cl-1;
            if (kata[i] == kata[j] && cl == 2)
               L[i][j] = 2;
            else if (kata[i] == kata[j])
               L[i][j] = L[i+1][j-1] + 2;
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }

    return L[0][n-1];
}

int main(){
    int n;

    string kata;

    cin>>n;

    while(n--){
        cin>>kata;
        cout<<lps(kata)<<endl;
    }

    return 0;
}
