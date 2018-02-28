#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 5;
ll x1,y_1,x2,y2,n, banyak, x, y;
string nama, arah;
int main()
{
    //freopen("in.in","r",stdin);
    bool flag = false;
    cin>>x1>>y_1;
    cin>>x2>>y2;
    cin>>n;
    if((x1==x2)&&(y_1==y2) && flag == false)
    {
        x= x1;
        y = y_1;
        flag=true;
    }
    while(n--)
    {
        cin>>nama>>arah>>banyak;
        banyak = abs(banyak);
        if(nama=="Jiseka")
        {
            if(arah=="U")
            {
                for(int i=0 ; i<banyak; i++)
                {
                    y_1++;
                    if((x1==x2)&&(y_1==y2) && flag == false)
                    {
                        x= x1;
                        y = y_1;
                        flag=true;
                    }
                }

            }
            else if(arah=="S")
            {
                for(int i=0 ; i<banyak; i++)
                {
                    y_1--;
                    if((x1==x2)&&(y_1==y2) && flag == false)
                    {
                        x= x1;
                        y = y_1;
                        flag=true;
                    }
                }
            }
            else if(arah=="T")
            {
                for(int i=0 ; i<banyak; i++)
                {
                    x1++;
                    if((x1==x2)&&(y_1==y2) && flag == false)
                    {
                        x= x1;
                        y = y_1;
                        flag=true;
                    }
                }
            }
            else if(arah=="B")
            {
                for(int i=0 ; i<banyak; i++)
                {
                    x1--;
                    if((x1==x2)&&(y_1==y2) && flag == false)
                    {
                        x= x1;
                        y = y_1;
                        flag=true;
                    }
                }
            }
            //cout<<"Jiseka "<<x1<<" "<<y_1<<endl;

        }

        else if(nama=="Marni")
        {
            if(arah=="U")
            {
                for(int i=0 ; i<banyak; i++)
                {
                    y2++;
                    if((x1==x2)&&(y_1==y2) && flag == false)
                    {
                        x= x1;
                        y = y_1;
                        flag=true;
                    }
                }
            }
            else if(arah=="S")
            {
                for(int i=0 ; i<banyak; i++)
                {
                    y2--;
                    if((x1==x2)&&(y_1==y2) && flag == false)
                    {
                        x= x1;
                        y = y_1;
                        flag=true;
                    }
                }
            }
            else if(arah=="T")
            {
                for(int i=0 ; i<banyak; i++)
                {
                    x2++;
                    if((x1==x2)&&(y_1==y2) && flag == false)
                    {
                        x= x1;
                        y = y_1;
                        flag=true;
                    }
                }
            }
            else if(arah=="B")
            {
                for(int i=0 ; i<banyak; i++)
                {
                    x2--;
                    if((x1==x2)&&(y_1==y2) && flag == false)
                    {
                        x= x1;
                        y = y_1;
                        flag=true;
                    }
                }
            }
            // cout<<"Marni "<<x2<<" "<<y2<<endl;
        }
        if((x1==x2)&&(y_1==y2) && flag == false)
        {
            x= x1;
            y = y_1;
            flag=true;
        }
    }

    if(flag)cout<<"Ya, di ("<<x<<","<<y<<")"<<endl;
    else
        cout<<"Tidak"<<endl;
    return 0;
}
