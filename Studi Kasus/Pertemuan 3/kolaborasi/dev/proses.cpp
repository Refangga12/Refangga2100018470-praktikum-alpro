#include <iostream>
#include <fstream>
#include "../library/proses.h"

int main(){
	proses proses;
	proses.getData();
	proses.tofile();
	cout << "Anda siap untuk menjadi developer proses\n";
	return 0;
}