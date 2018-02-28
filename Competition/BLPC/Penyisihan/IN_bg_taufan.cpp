#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;
ll power(ll x, ll y)
{
    ll res = 1;
    while (y > 0)
    {
        if (y & 1)
            res = res*x;
        y = y>>1;
        x = x*x;
    }
    return res;
}

int main()
{
    ll bil, t, temp;
    vector<ll> data;
    cin>>t;
    while(t--)
    {
        data.clear();
        cin>>bil;
        ll angka,cek=0;
        angka = bil;
        if(bil >=0 && bil<=9)
        {
            cout<<1<<endl;
            continue;
        }
        else
        {
            while(bil)
            {
                temp = bil%10;
                if(bil!=0)data.push_back(temp);
                bil /= 10;
                //cout<<bil<<endl;
            }
            //cout<<data.size()<<endl;
            bool flag = false;
            ll temp = 0;
            ll orde = 1;
            //cout<<"here"<<endl;
            while(temp<=angka)
            {

                temp = 0 ;
                for(int i=0; i<data.size(); i++)
                {
                    temp += power(data[i],orde);
                }
                if(temp==angka)
                {
                    flag = true;
                    break;
                }
                if(temp==cek)break;
                cek=temp;
                orde++;
            }
            //cout<<"heressss"<<endl;
            if(flag)cout<<orde<<endl;
            else cout<<"TIDAK"<<endl;

        }

    }


    return 0;
}
