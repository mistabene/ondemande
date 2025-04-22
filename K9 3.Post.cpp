#include<iostream>
using namespace std;

int main(){
	int jarak,ongkir,jumlah,pilih,harga,total,ulang;
	string makan;
	ongkir=0;
	harga=0;
	
	do{
			cout<<"------ DAFTAR MENU ------ "<<endl;
	cout<<"1. Ayam Geprek  : 21000 "<<endl;
	cout<<"2. Ayam Goreng  : 17000 "<<endl;
	cout<<"3. Udang Goreng : 19000 "<<endl;
	cout<<"4. Cumi Goreng  : 20000 "<<endl;
	cout<<"5. Ayam Bakar   : 25000 "<<endl;
	cout<<"------------------------"<<endl;

	cout<<endl;

   cout<<"Pilih lah makanan yang ada di daftar menu di atas ini (1-5) : "; 
	cin>>pilih;

	
	switch(pilih){
		case 1:
			cout<<"anda memilih Ayam Geprek"<<endl;
			makan="Ayam Geprek";
			harga+=21000;
		break;
		case 2:
			cout<<"anda memilih Ayam Goreng"<<endl;
			makan="Ayam Goreng";
			harga+=17000;
		break;
		case 3:
			cout<<"anda memilih Udang Goreng"<<endl;
			makan="Udang Goreng";
			harga+=19000;
		break;
		case 4:
			cout<<"anda memilih Cumi Goreng"<<endl;
			makan="Cumi Goreng";
			harga+=20000;
		break;
		case 5:
			cout<<"anda memilih Ayam Bakar"<<endl;
			makan="Ayam Bakar";
			harga+=25000;
		break;
		default:
			cout<<"kaga ada bang T-T"<<endl;
		break;
	}
	
	cout<<"------------------------------"<<endl;
	cout<<"jumlah pesanan : "; cin>>jumlah;
	cout<<"total pesanan anda "<<jumlah<<endl;
	total=harga*jumlah;
	
	cout<<"------------------------------"<<endl;
	cout<<"jarak ke rumah anda : "; cin>>jarak;
	if(jarak==0){
		cout<<"anda makan di tempat"<<endl;
	} else if(jarak<0) {
		cout<<"jarak tidak valid"<<endl;
		jarak=0;
	} else if(jarak<=3) {
		cout<<"biaya ongkir ke rumah anda 15.000"<<endl;
		ongkir+=15000;
	} else {
		cout<<"biaya ongkir ke rumah anda 25.000"<<endl;
		ongkir+=25000;
	}
	
	cout<<"------------------------------"<<endl;
	cout<<"lihat slip pembayaran"<<endl;
	system("pause");
	system("cls");
	
	cout<<"_________________________________"<<endl<<endl;
	cout<<"         SLIP PEMBAYARAN         "<<endl;
	cout<<"_________________________________"<<endl;
	cout<<"pesenan anda     : "<<makan<<endl;
	cout<<"jumlah pesanan   : "<<jumlah<<endl;
	cout<<"total harga      : "<<"Rp. "<<total<<endl;
	cout<<"jarak rumah anda : "<<jarak<<" KM"<<endl;
	cout<<"harga ongkir     : "<<ongkir<<endl<<endl;
	cout<<"         TERIMA KASIH :D         "<<endl;
	cout<<"_________________________________"<<endl<<endl;
	
	cout<<"pesan lagi? (1 untuk iya)"; cin>>ulang; cout<<endl;
	
	} while (ulang==1);
	
	cout<<"TERIMA KASIH :D"<<endl;
	
	return 0;
}
