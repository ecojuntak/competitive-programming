#include <bits/stdc++.h>

using namespace std;

int main()
{
	string kata1, kata2, kata3;
	
	cin>>kata1;
	cin>>kata2;
	cin>>kata3;
	
	if(kata1=="vertebrado")
	{
		if(kata2=="ave")
		{
			if(kata3=="carnivoro")	cout<<"aguia"<<endl;
			else if(kata3=="onivoro") cout<<"pomba"<<endl;
		}
		else if(kata2=="mamifero")
		{
			if(kata3=="onivoro") cout<<"homem"<<endl;
			else if(kata3=="herbivoro") cout<<"vaca"<<endl;
		}
	}
	else if(kata1=="invertebrado")
	{
		if(kata2=="inseto")
		{
			if(kata3=="hematofago") cout<<"pulga"<<endl;
			else if(kata3=="herbivoro") cout<<"lagarta"<<endl;
		}
		else if(kata2=="anelideo")
		{
			if(kata3=="hematofago") cout<<"sanguessuga"<<endl;
			else if(kata3=="onivoro") cout<<"minhoca"<<endl;
		}
	}
	
	return 0;
}
