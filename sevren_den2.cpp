#include <iostream>
#include <math.h>
//#include <locale.h>
using namespace std;

/*	int f(int n, int r){
		cout<<x<<endl;
		return x*y;
	}*/
	
int main(){
	setlocale(LC_ALL,"Turkish"); //Türkçe karakter
//BÖLÜM 9: DERS 40-FONKSÝYONLAR








	/*DERS 38 HARF PÝRAMÝDÝ
	char c;
	cout<<"Büyük harf giriniz:"<<endl;
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


//Ders 37: Yýldýzlarla Eþkenar Dörtgen Basan Kod

/*	cout<<"Bir sayý giriniz"<<endl;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int y, b;
		if(i<n/2){//dörtgenin ortakýsmýna kadar olan satýrlar
			y=2*i+1;//yýldýz sayýsý
		}
		else if (i==n)//dörtgenin son satýrý
			y=2*(i-1)+1;
		else
			y=2*(n-i-1)+1;//dörtgenin orta kýsmýndan sonra 
				
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
cout <<"Çarpým tablosu için satýr ve sütun giriniz:"<<endl;
cout <<"Satýr giriniz:";
cin>>num1;
cout<<"Sütun giriniz";
cin>>num2;

for (int i=1; i<=num1; i++){//sütun yazar
	//cout<<i;
	for(int j=1; j<=num2; j++){//satýr yazar
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
	//Ders 35: Örnek 8: Ýç içe döngüler, matrisler
	/*int b;
	cout<<"Boyut giriniz: "<<endl;
	cin>>b;
	for(int i=0; i<b; i++){//Sütun burada yazdýrýlýr
		for(int j=0; j<b; j++){
			if(j>=b/2)
				cout<<"1";
			else
				cout<<"0";
			}
	cout<<endl;
	}*/

	//Ders 31: Örnek
	/*int n;
	cout<<"Eleman sayýsýný giriniz: ";
	cin>>n;
	cout<<"Sayýlarý tek tek giriniz: ";
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
	cout<<"Pozitif eleman sayýsý: "<< negi <<endl;*/
	
		
	//Fibonacci Series
	/*int n;
	cout<<"Bir sayý giriniz"<<endl;
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
		if(i==5)//koþul saðlanýyorsa
		//continue;//bir sonraki satýrý çalýþtýrmadan devam et.
		//5 rakamýný ekrana bastýrmadan devam eder.
		break;//döngüden çýk ve döngüyü bitir
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
	cout<<"Araç hýzýný giriniz: ";
	cin>>hiz;
	
	int sure = yol/hiz;
	float dakika = (float)yol / hiz -(int)yol/hiz;
	int dksure = dakika *60;
	
	cout<<"Yolda geçen süre: " << sure << " saat ve "<< dksure<< " dakikadýr."<<endl;*/
	
	/*int a,b,c;
	cout<<"a kenarýný giriniz"<<endl;
	cin>>a;
	cout<<"b kenarýný giriniz"<<endl;
	cin>>b;
	c = sqrt(a*a+b*b);
	cout<<"h= " <<c<<endl;*/
		
	
/*	cout<<"Bir iþçi iþi kaçgünde bitirmektedir?"<<endl;
	int kacgun,kacisci;
	cin>>kacgun;
	cout<<"Toplam kaç iþçi çalýþacaktýr?";
	cin>>kacisci;
	cout<<"Ýþin bitme süresi"<< (float)kacgun/kacisci <<"gündür." <<endl;*/

	
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
			cout <<"diðer durumlar"<<endl;
		}*/
	
	
	/*int a;
	cout <<"Lütfen notunuzu giriniz:"<<endl;
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
	
	cout << "iki sayý giriniz"<<endl;
	
	cin >> num1;
	cin >> num2;
	
	cout<<"islemi giriniz"<<endl;
	
	cin >> operand;
	
	cout << "islem = " << operand <<endl;*/
}
