#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	string name;

	cin>>t;

	for(int i=1; i<=t; i++){
        cin>>name;
        string temp = "";
        bool isDuck = false;

        for(int j=0; j<name.size(); j++){
            if(temp.size() == 0 && name[j] == 'd'){
                temp += name[j];
            }else if(temp.size() == 1 && name[j] == 'u'){
                temp += name[j];
            }else if(temp.size() == 2 && name[j] == 'c'){
                temp += name[j];
            }else if(temp.size() == 3 && name[j] == 'k'){
                temp += name[j];
            }

            if(temp == "duck"){
                isDuck = true;
                break;
            }
        }

        if(isDuck) printf("Case #%d: YES\n",i);
        else printf("Case #%d: NO\n",i);
	}
	return 0;
}
