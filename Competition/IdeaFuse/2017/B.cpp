#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef long long int ll;

int main(){
    char encryp[1001];
    string temp;

    while(scanf("%s",&encryp) != EOF){

        for(int i=0; i<strlen(encryp); i+=7){
            temp = "0";
            for(int j=i; j<i+7; j++){
                temp += encryp[j];

            }

            bitset<7> bit (temp);
            int ascii = bit.to_ullong();
            switch(ascii)
            {
                case 33:printf("n"); break;
                case 24:printf("o"); break;
                case 28:printf("p"); break;
                case 62:printf("q"); break;
                case 9:printf("r"); break;
                case 48:printf("s"); break;
                case 20:printf("t"); break;
                case 3:printf("u"); break;
                case 11:printf("v"); break;
                case 29:printf("w"); break;
                //case 6:printf("x"); break;
                case 39:printf("y"); break;
                case 53:printf("z"); break;
                case 2:printf("a"); break;
                case 58:printf("b"); break;
                case 6:printf("c"); break;
                case 40:printf("d"); break;
                case 12:printf("e"); break;
                //case 50:printf("f"); break;
                case 999:printf("g"); break;
                case 50:printf("h"); break;
                case 13:printf("i"); break;
                case 57:printf("j"); break;
                case 17:printf("k"); break;
                case 52:printf("l"); break;
                case 10:printf("m"); break;
                //uppercase
                case 'A':printf("N"); break;
                case 56:printf("O"); break;
                case 'C':printf("P"); break;
                case 'D':printf("Q"); break;
                case 'E':printf("R"); break;
                case 16:printf("S"); break;
                case 'G':printf("T"); break;
                case 'H':printf("U"); break;
                case 'I':printf("V"); break;
                case 'J':printf("W"); break;
                case 'K':printf("X"); break;
                case 'L':printf("Y"); break;
                case 'M':printf("Z"); break;
                case 'N':printf("A"); break;
                case 'O':printf("B"); break;
                case 38:printf("C"); break;
                case 'Q':printf("D"); break;
                case 'R':printf("E"); break;
                case 'S':printf("F"); break;
                case 9:printf("G"); break;
                case 'U':printf("H"); break;
                case 'V':printf("I"); break;
                case 'W':printf("J"); break;
                case 'X':printf("K"); break;
                case 'Y':printf("L"); break;
                case 'Z':printf("M"); break;
                case 0: printf(" "); break;
            }
            cout<<ascii<<endl;
        }
    }

    return 0;
}
