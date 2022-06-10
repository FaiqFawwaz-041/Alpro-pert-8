#include <iostream>
using namespace std;

class BaseProject{
  public :
    void input();
    void proses();
    void output();
  private :
  	int n = 2;
	  int m=4;
	  string karyawan[2][4];
	  string jenis, nama, alamat, jeniskelamin, carinama;
};

void BaseProject::input(){
  for(int i = 0; i < n; i++){
	    for(int j = 0; j < m; j++){
	      if (j==0){
	        cout<<"Masukkan jenis karyawan : ";
	        getline(cin,jenis);
	        karyawan[i][j]=jenis;
	      }
	      else if (j==1){
	        cout<<"Masukkan nama : ";
	        getline(cin,nama);
	        karyawan[i][j]=nama;
	      }
	      else if (j==2){
	        cout<<"Masukkan alamat : ";
	        getline(cin,alamat);
	        karyawan[i][j]=alamat;
	      }
	      else if (j==3){
	        cout<<"Masukkan jenis kelamin : ";
	        getline(cin,jeniskelamin);
	        karyawan[i][j]=jeniskelamin;
	        cout<<endl;
	      }
	    }
    }
	output();
  	proses();
}

void BaseProject::proses(){
cout<<"Masukkan nama yang dicari : "<<endl;
	getline(cin,carinama);
	for (int i = 0; i<n;i++){
    	for(int j =0; j< m; j++){
    		if(karyawan[i][j]==carinama){
    			cout<<"Data yang dicari : "<<endl;
    			cout<<karyawan[i][j-1]<<"\t"<<karyawan[i][j]<<"\t"<<karyawan[i][j+1]<<"\t"<<karyawan[i][j+2];
			}
		}
		cout<<endl;
	}
}

void BaseProject::output(){
  cout<<endl;
  cout<<"Jenis\t||\tNama\t||\tAlamat\t||\tJenisKelamin"<<endl;
    for (int i = 0; i<n;i++){
    	for(int j =0; j< m; j++){
    		cout<<karyawan[i][j]<<"\t||\t";
		}
		cout<<endl;
	}
}

int main(){
  BaseProject x;
  x.input();
}

/*
		Jenis 		Nama		Alamat		Jenis Kelamin
		Admin		Supri		Sewon		Lanang
					Suhar		Bekasi		Lanang
					Sumiati		Kasihan		Wedok
		Developer	Faiq		NusakambanganLanang
					Galih		Kalibawang	Lanang
*/