#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    string str;
    cin>> a >> b;
    cin>>str;
    cin>>c;

       int d, datar=0,tinggi=0;
    int kanan=0, kiri=0, atas=0, bawah=0;
    for(d=0;d<c;d++)
    {
        if(str[d]== '>')
        {
            kanan++;
        }
        else if(str[d]=='<')
        {
            kiri++;
        }
        else if(str[d]=='^')
        {
            atas++;
        }
        else
        {
            bawah++;
        }
    }
    datar = a+(kanan-kiri);
    tinggi = a+(atas-bawah);
    cout<<datar<<","<<tinggi<<endl;
    return 0;
}
