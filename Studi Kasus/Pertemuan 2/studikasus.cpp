#include <iostream>

using namespace std;
int main(){
	int pilihan, jumlah_barang, harga, total, bayar, diskon;
	string barang;
	
	cout<<"==================================================="<<endl;
	cout<<"            SUPERMARKET GAK SUPER                  "<<endl;
	cout<<"==================================================="<<endl;
	cout<<"           	   BARANG-BARANG                      "<<endl<<endl;
	cout<<"1. Sabun 	:Rp.3000 "<<" 4. Odol	:Rp.3500"<<endl;
	cout<<"2. Rinso	:Rp.6000 "<<" 5. Sikat gigi	:Rp.4000"<<endl;
	cout<<"3. Shampo	:Rp.500	 "<<" 6. cukup"<<endl;
	cout<<"==================================================="<<endl<<endl;
	
	do{
		cout<<"Masukan No Pilihan: ";
		cin>>pilihan;
		
		switch(pilihan){
			case 1:
				barang = "sabun";
				harga  = 3000;
				cout<<"Jumlah Barang 	  : "; 
				cin>>jumlah_barang;
				total += harga * jumlah_barang;
				cout<<jumlah_barang<<" "<<barang<<"  	  : Rp."<<harga * jumlah_barang<<endl<<endl;
				break;
			case 2:
				barang = "Rinso";
				harga  = 6000;
				cout<<"Jumlah Barang 	  : ";
				cin>>jumlah_barang;
				total += harga * jumlah_barang;
				cout<<jumlah_barang<<" "<<barang<<"  	  : Rp."<<harga * jumlah_barang<<endl<<endl;
				break;
			case 3:
				barang = "shampo";
				harga  = 500;
				cout<<"Jumlah Barang 	  : ";
				cin>>jumlah_barang;
				total += harga * jumlah_barang;
				cout<<jumlah_barang<<" "<<barang<<"  	  : Rp."<<harga * jumlah_barang<<endl<<endl;
				break;
			case 4:
				barang = "Odol";
				harga  = 3500;
				cout<<"Jumlah Barang 	 : ";
				cin>>jumlah_barang;
				total += harga * jumlah_barang;
				cout<<jumlah_barang<<" "<<barang<<"  	  : Rp."<<harga * jumlah_barang<<endl<<endl;
				break;
			case 5:
				barang = "sabun";
				harga  = 4000;
				cout<<"Jumlah Barang 	  : ";
				cin>>jumlah_barang;
				total += harga * jumlah_barang;
				cout<<jumlah_barang<<" "<<barang<<"  	  : Rp."<<harga * jumlah_barang<<endl<<endl;
				break;
	
			case 6:
				cout<<endl<<endl;
				cout<<"==================================================="<<endl;
				
				cout<<"jumlah bayar 	 : "<<total<<endl;
				cout<<"Total Pembayaran : "<<total<<endl;
				cout<<"Pembayaran	 : ";
				cin>>bayar;
				cout<<"Kembalian 	 : "<<(bayar - total)<<endl<<endl;
				break;
			default :
				cout<<"Pilihan anda tidak tepat"<<endl<<endl;
				break;
		}
	}while(pilihan !=6);
	cout<<" TERIMA KASIH, SILAHKAN KEMBALI KESINI KALO GAK KAPOK "<<endl;
}