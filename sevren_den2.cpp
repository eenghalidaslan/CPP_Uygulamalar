#include <iostream>
#include <math.h>
//#include <locale.h>
using namespace std;

/*	int f(int n, int r){
		cout<<x<<endl;
		return x*y;
	}*/
	
int main(){
	setlocale(LC_ALL,"Turkish"); //T�rk�e karakter
//B�L�M 9: DERS 40-FONKS�YONLAR








	/*DERS 38 HARF P�RAM�D�
	char c;
	cout<<"B�y�k harf giriniz:"<<endl;
	cin>>c   ;
	for (int i=c-65; i<25; i++){
		for (int j=c-65; j<=i; j++){
			cout<<(char)(j+65);
		}
		for (int j=i-1; j>=c-65; j--){
			cout<<(char)(j+65);
		}
		cout<<endl;			
	}*/


//Ders 37: Y�ld�zlarla E�kenar D�rtgen Basan Kod

/*	cout<<"Bir say� giriniz"<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y, b;
		if(i<n/2){//d�rtgenin ortak�sm�na kadar olan sat�rlar
			y=2*i+1;//y�ld�z say�s�
		}
		else if (i==n)//d�rtgenin son sat�r�
			y=2*(i-1)+1;
		else
			y=2*(n-i-1)+1;//d�rtgenin orta k�sm�ndan sonra 
				
		b=(n-y)/2;
		for(int j=0; j<b; j++){
			cout<<" ";
		}
		for(int j=0; j<y; j++){
			cout<<"*";
		}
		cout <<endl;
	}*/







//dERS 36
/*int num1,num2;
cout <<"�arp�m tablosu i�in sat�r ve s�tun giriniz:"<<endl;
cout <<"Sat�r giriniz:";
cin>>num1;
cout<<"S�tun giriniz";
cin>>num2;

for (int i=1; i<=num1; i++){//s�tun yazar
	//cout<<i;
	for(int j=1; j<=num2; j++){//sat�r yazar
		cout<<" "<<j*i<<" ";
	}
	cout<<endl;
}
	
//f(5,8);
//f(9,4);
/*
000010000	j==i+b/2 || 
000111000
001111100
011111110
111111111
011111110
001111100
000111000
000010000	
	*/
	//Ders 35: �rnek 8: �� i�e d�ng�ler, matrisler
	/*int b;
	cout<<"Boyut giriniz: "<<endl;
	cin>>b;
	for(int i=0; i<b; i++){//S�tun burada yazd�r�l�r
		for(int j=0; j<b; j++){
			if(j>=b/2)
				cout<<"1";
			else
				cout<<"0";
			}
	cout<<endl;
	}*/

	//Ders 31: �rnek
	/*int n;
	cout<<"Eleman say�s�n� giriniz: ";
	cin>>n;
	cout<<"Say�lar� tek tek giriniz: ";
	int num[n];
	
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
		
	for(int pozi=0;pozi>n;pozi++){
		if(num[pozi]>0){
		}
		else 
		break;
	}
	int negi = pozi;
	cout<<"Pozitif eleman say�s�: "<< negi <<endl;*/
	
		
	//Fibonacci Series
	/*int n;
	cout<<"Bir say� giriniz"<<endl;
	cin>>n;
	if (n==0){
		//do nothing
	}
		else if(n==1){
			cout<<1<<endl;
		}
		else{
	
	int a=1, b=1;
	cout<<a<<endl<<b<<endl;
	
	for (int i=0;i<n;i++){
		int c = a+b;
		a=b;
		b=c;
		cout<<c<<endl;
		}
	}*/	
	
	/*for (int i=0;i<10;i++){
		if(i==5)//ko�ul sa�lan�yorsa
		//continue;//bir sonraki sat�r� �al��t�rmadan devam et.
		//5 rakam�n� ekrana bast�rmadan devam eder.
		break;//d�ng�den ��k ve d�ng�y� bitir
		cout<<i<<endl;
	}*/
	
	
	/*int i;
	for (i=1; i<=100; i++){
		if(i%3 == 0 || i%7 ==0){
		cout<< i << ", ";	
		}
	}*/	
	
	/*int yol, hiz;
	cout<<"mesafeyi giriniz: ";
	cin>>yol;
	cout<<"Ara� h�z�n� giriniz: ";
	cin>>hiz;
	
	int sure = yol/hiz;
	float dakika = (float)yol / hiz -(int)yol/hiz;
	int dksure = dakika *60;
	
	cout<<"Yolda ge�en s�re: " << sure << " saat ve "<< dksure<< " dakikad�r."<<endl;*/
	
	/*int a,b,c;
	cout<<"a kenar�n� giriniz"<<endl;
	cin>>a;
	cout<<"b kenar�n� giriniz"<<endl;
	cin>>b;
	c = sqrt(a*a+b*b);
	cout<<"h= " <<c<<endl;*/
		
	
/*	cout<<"Bir i��i i�i ka�g�nde bitirmektedir?"<<endl;
	int kacgun,kacisci;
	cin>>kacgun;
	cout<<"Toplam ka� i��i �al��acakt�r?";
	cin>>kacisci;
	cout<<"��in bitme s�resi"<< (float)kacgun/kacisci <<"g�nd�r." <<endl;*/

	
	/*int x,y;
	cout<<"Lutfen birinci sayiyi giriniz: ";
	cin>>x;
	cout<<"Lutfen ikinci sayiyi giriniz: ";
	cin>>y;
	
	if (x>y)
		cout<<"ilk sayi buyuktur";
	
	else if (x<y)
		cout<<"ilk sayi kucuktur";*/
	
	
	
	/*int a;
	a =1;
	switch (a){
		case 1: cout<<'1';
		break;
		case 2: cout<<'2';
		break;
		default:
			cout <<"di�er durumlar"<<endl;
		}*/
	
	
	/*int a;
	cout <<"L�tfen notunuzu giriniz:"<<endl;
	cin>>a;
	
	if(a<50 && a>0){
		cout << "Notunuz: F"<<endl;
	}
	else if (a>=50 && a<70){
		cout <<"Notunuz: C";
	}
		else if (a>=70 && a<90){
		cout <<"Notunuz: B";
	}
		else if (a>=90 && a<=100){
		cout <<"Notunuz: A";
	}*/
	
	
	/*int a;
	cin>>a;
	if(a<20)//{
	
		cout<<"a 20'den kucuk";
	//}
	else if (a==20) {
	cout<<"a 20 ye esittir";
	}
	else {
	cout<<"a 20'den buyuk";
	}*/
	
	
	
	/*int num1, num2;
	
	char operand;
	
	cout << "iki say� giriniz"<<endl;
	
	cin >> num1;
	cin >> num2;
	
	cout<<"islemi giriniz"<<endl;
	
	cin >> operand;
	
	cout << "islem = " << operand <<endl;*/
}
