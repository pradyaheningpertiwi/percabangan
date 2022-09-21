#include <iostream>
using namespace std;

int main(){
	int pil,usia;
	string jkel,status,kegiatan;
	cout<<"pilihan salah satu (1/2)"<<endl;
	cout<<"1. adalah laki-laki\n2. adalah perempuan"<<endl;
	cout<<"pilihan :";
	cin>>pil;
	cout<<"usia anda (th) =";
	cin>>usia;
	
	if(pil == 1){
 jkel = "laki-laki";
 if(usia >=27){
 	status = "sudah saatnya menikah";
 	kegiatan = "mencari pasangan";
 }else {
 	status = "belum saatnya menikah";
 	kegiatan ="mengasah diri";
 }
	 
		
	}else if(pil == 2){
	jkel="perempuan";
	if(usia >=24){
	 status = "sudah saatnya ";
 	 kegiatan = "mencari pasangan";
}else {
 	status = "belum saatnya ";
 	kegiatan ="mengasah diri";
 }
	}else{	
	jkel = "anonymous";
	}
	cout<<"----------------------------------------"<<endl;
	cout<<"anda adalah "<<jkel<<" berumur "<<usia<<" tahun "<<endl;
	cout<<status<<" menikah "<<endl;
	cout<<"silahkan "<<kegiatan<<endl;
	
	
	//dari jagat coding
}
