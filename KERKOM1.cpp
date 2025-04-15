#include <iostream>
using namespace std;

void input(){
    cout<<"masukkan nik : ";
    cin>>ktp.nik;
    cout<<"masukkan nama : ";
    cin>>ktp.nama;
    cout<<"masukkan tanggal lahir : ";
    cin>>ktp.tanggal;
    cout<<"masukkan bulan lahir : ";
    cin>>ktp.bulan;
    cout<<"masukkan tahun lahir : ";
    cin>>ktp.tahun;
    cout<<"masukkan jenis kelamin : ";
    cin>>ktp.jk;
    cout<<"masukkan golongan darah : ";
    cin>>ktp.goldar;
    cout<<"masukkan alamat : ";
    cin>>ktp.alamat;
    cout<<"masukkan kecamatan : ";
    cin>>ktp.kecamatan;
    cout<<"masukkan agama : ";
    cin>>ktp.agama;
    cout<<"masukkan status perkawinan : ";
    cin>>ktp.sp;
    cout<<"masukkan pekerjaan : ";
    cin>>ktp.pekerjaan;
    cout<<"masukkan kewarganegaraan : ";
    cin>>ktp.kngr;
    cout<<"masukkan berlaku sampai : ";
    cin>>ktp.bks;
}

void output(){
    cout<<"----------KTP----------"
    cout<<"NIK\t\t: "<<ktp.nik<<endl;
    cout<<"Nama\t\t: "<<ktp.nama<<endl;
    cout<<"Tanggal lahir\t: "<<ktp.tanggal<<"-"<<ktp.bulan<<"-"<<ktp.tahun;
    cout<<"Jenis kelamin\t: "<<ktp.jk;
    cout<<"Golongan darah\t: "<<ktp.goldar;
    cout<<"Alamat\t\t: "<<ktp.alamat","<<ktp.kecamatan;
    cout<<"Agama\t\t: "<<ktp.agama;
    cout<<"Status perkawinan\t: "<<ktp.sp;
    cout<<"Pekerjaan\t\t: "<<ktp.pekerjaan;
    cout<<"Kewarganegaraan\t: "<<ktp.kngr;
    cout<<"Berlaku sampai\t: "<<ktp.bks;
}
    
    
    
}
int main() {
   
    return 0;
}
