#include <iostream>
#include <cstring>
using namespace std;
struct musteri{
	int ID;
	char ad[30];
	double bakiye;
	
};
int main(){
	struct musteri mus[3];
	char musteri_adi[30];
	for(int i=0; i<3; i++){
		cout << "Musteri kimlik numarasi:";
		cin >> mus[i].ID;
		cout << "Musterinin adi: ";
		cin >> mus[i].ad;
		cout << "Musterinin bakiyesi: ";
		cin >> mus[i].bakiye;3;
		cout << endl;
	}
	
	cout << " bilgileri getirilcek musteri adi: ";
	cin >> musteri_adi;
	
	for(int i=0; i<3; i++){
		if(strcmp(musteri_adi,mus[i].ad) == 0){
		
		cout << mus[i].ID << '\t' << mus[i].ad << '\t' << mus[i].bakiye << endl;
	}
}
}
