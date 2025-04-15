#include <iostream>
using namespace std;
struct ktp{
    int nik;
    string nama;
    int tanggal,bulan,tahun;
    char jk;
    char goldar;
    string alamat;
    string kecamatan;
    string agama;
    string sp;
    string pekerjaan;
    string kngr;
    string bks;
};
void input(ktp &org){
    cout<<"masukkan nik : ";
    cin>>org.nik;
    cout<<"masukkan nama : ";
    cin>>org.nama;
    cout<<"masukkan tanggal lahir : ";
    cin>>org.tanggal;
    cout<<"masukkan bulan lahir : ";
    cin>>org.bulan;
    cout<<"masukkan tahun lahir : ";
    cin>>org.tahun;
    cout<<"masukkan jenis kelamin : ";
    cin>>org.jk;
    cout<<"masukkan golongan darah : ";
    cin>>org.goldar;
    cout<<"masukkan alamat : ";
    cin>>org.alamat;
    cout<<"masukkan kecamatan : ";
    cin>>org.kecamatan;
    cout<<"masukkan agama : ";
    cin>>org.agama;
    cout<<"masukkan status perkawinan : ";
    cin>>org.sp;
    cout<<"masukkan pekerjaan : ";
    cin>>org.pekerjaan;
    cout<<"masukkan kewarganegaraan : ";
    cin>>org.kngr;
    cout<<"masukkan berlaku sampai : ";
    cin>>org.bks;
}

void output(ktp &org){
    cout<<"----------KTP----------";
    cout<<"NIK\t\t: "<<org.nik<<endl;
    cout<<"Nama\t\t: "<<org.nama<<endl;
    cout<<"Tanggal lahir\t: "<<org.tanggal<<"-"<<org.bulan<<"-"<<org.tahun;
    cout<<"Jenis kelamin\t: "<<org.jk;
    cout<<"Golongan darah\t: "<<org.goldar;
    cout<<"Alamat\t\t: "<<org.alamat<<","<<org.kecamatan;
    cout<<"Agama\t\t: "<<org.agama;
    cout<<"Status perkawinan\t: "<<org.sp;
    cout<<"Pekerjaan\t\t: "<<org.pekerjaan;
    cout<<"Kewarganegaraan\t: "<<org.kngr;
    cout<<"Berlaku sampai\t: "<<org.bks;
}

int main() {
    ktp org;
  input(org);
  output(org);

    

    
        return 0;
}
