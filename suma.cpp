#include <iostream>
using namespace std;

int main(){
	int x,poczatek,koniec,suma;
	cout<<"Podaj poczatek zakresu";
	cin>>poczatek;
	cout<<endl;
	cout<<"Podaj koniec zakresu";
	cin>>koniec;
	cout<<endl;
	suma=0;
	x=poczatek;
	for(x;x<=koniec;x++){
	if (x%5==0){
		cout<<x;
		cout<<endl;
		suma=suma+x;  // suma+=x
		//x++;
	}
	//else x++;
	}
	cout<<"Suma: "<<suma; //suma po wykonaniu pętli
}
