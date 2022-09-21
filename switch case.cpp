#include <iostream>
using namespace std;
int main(){
	
	
	int pil;
	string kesukaan;
	
	cout<<"pilih kesukaan kamu" <<endl;
	cout<<"1. bakso \n2. mie ayam \n3. seblak "<<endl;
	cout<<"pilihan :";
	cin>>pil;
	
	switch(pil){
		
		case 1 :
		kesukaan = "bakso ";
		break;
		case 2 :
		kesukaan = " mie ayam ";
		break;
		case 3 :
			kesukaan = "seblak ";
	}
	
	cout<<"makanan favorite kamu "<<kesukaan<<endl;
}

