#include <iostream>

using namespace std;

main(){
    string nm,pd,makul;
    long int nim;
    int a,mk,sks;
    int total,ts=0,tarif=200000;

    cout<<"----------------------------------------"<<endl;
    cout<<" Nama      : ";cin>>nm;
    cout<<" NIM       : ";cin>>nim;
    cout<<" Prodi     : ";cin>>pd;
    cout<<"----------------------------------------"<<endl;
    cout<<" Input Jumlah makul : ";cin>>mk                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"----------------------------------------"<<endl;

    for (a=0; a<mk; a++){
        cout<<" Makul      : ";cin>>makul;
        cout<<" sks : ";cin>>sks;
        ts+=sks;
    }
    total=tarif*ts;
    cout<<"----------------------------------------"<<endl;
    cout<<" Total SKS       : ";cout<<ts<<endl;
    cout<<" Total Tarif SKS : ";cout<<total<<endl;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
    cout<<"----------------------------------------"<<endl;
}