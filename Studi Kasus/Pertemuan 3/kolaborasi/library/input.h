using namespace std;

class input {
	public :
		void cetak(){
			cout << "Aplikasi penjualan ayam \n";
			cout << "Menu yang tersedia :\n ";
			cout << "1) Ayam Goreng Rp. 17000 \n";
			cout << "2) Ayam Bakar  Rp. 21000 \n";
			cout << "Pesan Ayam Goreng -> "; cin >> bnyk_aymGr;
			cout << "Pesan Ayam Goreng -> "; cin >> bnyk_aymBk;
		}

		void tofile(){
			tulis_data.open("api_data.txt");
			tulis_data << bnyk_aymGr << endl;
			tulis_data << bnyk_aymBk;
			tulis_data.close();

		}
	private :
		ofstream tulis_data;
		int bnyk_aymGr, bnyk_aymBk;
};