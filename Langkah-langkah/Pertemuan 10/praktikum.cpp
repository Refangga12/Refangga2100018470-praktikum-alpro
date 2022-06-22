#include <iostream>
using namespace std;

class node{
	public:
		int data;
		node * berikut;
};

int main(){
	//LANGKAH SATU
	node * baru;
	baru = new node;
	baru -> data = 5;
	baru -> berikut = NULL;
	cout<<"Isi data node baru adalah :"<<baru->data<<endl;
	//LANGKAH DUA
	node *lain;
	lain = new node;
	lain -> data = 6;
	lain -> berikut = NULL;
	cout<<"Isi data node lain adalah :"<<lain->data<<endl;
	//LANGKAH TIGA
	baru -> berikut = lain;
	cout<<"Isi data node lain dicetak dari node baru adalah:";
	cout<<baru ->berikut->data<<endl;
	//LANGKAH EMPAT
	node *kepala = baru;
	cout<<"Mencetak node pertama dari pointer kepala:";
	cout<<kepala->data<<endl;
	cout<<"Mencetak node kedua dari pointer kepala:";
	cout<<kepala->berikut->data<<endl;
	//LANGKAH LIMA
	cout<<"Menggunakan perulangan untuk mencetak setiap data pada rantau\n";
	node *jalan = kepala;
	int i=1;
	while(jalan !=NULL){
		cout<<"Data ke-"<<i<<">"<<jalan->data<<endl;
		i++;
		jalan = jalan->berikut;
	}
	//LANGKAH ENAM
	cout<<"Mencetak node pertama dari pointer kepala:";
	cout<<kepala->data<<endl;
	cout<<"Mencetak node kedua dari pointer kepala:";
	cout<<kepala->berikut->data<<endl;
}