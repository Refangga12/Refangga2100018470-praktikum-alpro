#include <iostream>
#include <fstream>
#include "Library/input.h"
#include "Library/proses.h"
#include "Library/output.h"

int main(){
	input input;
	input.cetak();
	input.tofile();

	proses proses;
	proses.getData();
	proses.tofile();

	output output;
	output.getData();
	output.cetak();

	return 0;
}