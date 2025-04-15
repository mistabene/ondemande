#include<iostream>
using namespace std;

class ayam{
	friend istream& operator>>(istream&, ayam&);
	friend ostream& operator<<(ostream&, const ayam&);
public:
	ayam();
	void harga(){
		harga_g = ayam_g*17000;
		harga_b = ayam_b*21000;
	}
	void total_harga(){
		total = (harga_g+harga_b);
		if (total>45000){
			total -= total*0.10;
		}
	}
private:
	int ayam_g,ayam_b;
	int harga_g,harga_b;
	int total;	
};

ayam::ayam(){
	cout<<"---AYAM MAKNYUSS KOTA---"<<endl;
	cout<<"1. Ayam goreng : 17.000"<<endl;
	cout<<"2. Ayam bakar  : 21.000"<<endl;
}

istream& operator>>(istream& in, ayam& inp){
	cout<<endl;
	cout<<"---PESAN AYAM MAKNYUSS---"<<endl;
	cout<<"Ayam goreng : "; in>>inp.ayam_g;
	cout<<"Ayam bakar  : "; in>>inp.ayam_b;
	
	inp.harga();
	inp.total_harga();
	return in;
}

ostream& operator<<(ostream& out, const ayam& opt){
	cout<<endl;
	cout<<"---STRUK AYAM MAKNYUSS---"<<endl;
	cout<<"Ayam goreng  : "<<opt.ayam_g<<" pcs | "<<"Rp. "<<opt.harga_g<<endl;
	cout<<"Ayam bakar   : "<<opt.ayam_b<<" pcs | "<<"Rp. "<<opt.harga_b<<endl;
	cout<<"Total anda   : "<<"Rp. "<<opt.total;
	
	return out;
}

int main(){
	ayam x;
	cin>>x;
	cout<<x;
	
	return 0;
	};

