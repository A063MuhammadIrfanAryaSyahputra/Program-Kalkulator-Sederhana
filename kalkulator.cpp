#include<iostream>
#include<stdlib.h>
using namespace std;

void tambah(float a, float b){
	cout<<"Hasil dari Penambahan " <<a<<" + "<<b<<" adalah = ";
    cout<<a+b;
}
void kurang(float a, float b){
	cout<<"Hasil dari Pengurangan "<<a<<" - "<<b<<" adalah = ";
	cout<<a-b;
}
void kali(float a, float b){
	cout<<"Hasil dari Perkalian "<<a<<" x "<<b<<" adalah = ";
	cout<<a*b;
}
void bagi(float a, float b){
	cout<<"Hasil dari Pembagian "<<a<<" : "<<b<<" adalah = ";
	cout<<a/b; 
}
	int main(){
	int pilih;
	float a,b;
	char k, ulang;
	do{
	cout<<"||==========================================||\n";
        cout<<"||===========||===============||============||\n";
	cout<<"||=========||KALKULATOR SEDERHANA||=========||\n";
	cout<<"||===========||===============||============||\n";
	cout<<"||1. Penambahan                             ||\n";
	cout<<"||2. Pengurangan                            ||\n";
	cout<<"||3. Perkalian                              ||\n";
	cout<<"||4. Pembagian                              ||\n";
	cout<<"||==========================================||\n";
	cin>>pilih;
    cout<<"||==========================================||\n";
		
if (pilih==1){
    	cout<<"Masukkan bilangan pertama ="; cin>>a;
    	cout<<"Masukkan bilangan kedua   ="; cin>>b;
    	tambah(a,b);
    	cout<<"\nUlang? Y/T :"; cin>>ulang;
	}
	else if (pilih==2){
		cout<<"Masukkan bilangan pertama ="; cin>>a;
    	cout<<"Masukkan bilangan kedua   ="; cin>>b;
    	kurang(a,b);
    	cout<<"\nUlang? Y/T :"; cin>>ulang;
	}
	else if(pilih==3){
		cout<<"Masukkan bilangan pertama ="; cin>>a;
    	cout<<"Masukkan bilangan kedua   ="; cin>>b;
    	kali(a,b);
    	cout<<"\nUlang? Y/T :"; cin>>ulang;
	}
	else if(pilih==4){
		cout<<"Masukkan bilangan pertama ="; cin>>a;
    	cout<<"Masukkan bilangan kedua   ="; cin>>b;
    	bagi(a,b);
    	cout<<"\nUlang? Y/T :"; cin>>ulang;
	}
	}while (ulang=='Y'||ulang !='T');
	
	return 0;
		
}
		
