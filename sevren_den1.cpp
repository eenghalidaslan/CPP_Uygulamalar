#include <iostream>
using namespace std;

int main()
{
	int a=10;
	cout <<a<<endl;
	a++;
	cout<<a<<endl;
	++a;
	cout<<a<<endl;
	int b= 20;
	cout<< a+b<< endl;
	
	cout << 10+20*2 <<endl;
	
	cout <<15%2<<endl;
	a--;
	a= a-1;
	
	cout<<a++<<endl;
	cout<<a<<endl;
	
	int x =10;
	x--;
	--x;
	x+=5;
	
	cout<<x<<endl;
	x*=2;
	cout<<x<<endl;
	
	cout<<a<<endl;
	b = a<<2;   //a'yý ikilik tabanda 2 kere kaydýr.
	cout<<b<<endl;//(1011)2likten   --> (101100) olur =44
	
	cin >> a;
	cout << "klavyeden"  <<"girilen deger"<<a<<endl;
	
	
	return 0;
	}

