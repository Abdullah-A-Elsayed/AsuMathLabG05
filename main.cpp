#include <iostream>
#include <string>
#include <fstream>
#include "matrix.h"
#include <map>
#include <algorithm>
#include <ctype.h>
#include <math.h>
#include <sstream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv)
{
	cout.precision(3);
	cout<<fixed; //only 3 digits after decimal point
if(argc < 2){//no file passed to the program
		/***********************************taking commands***************************************/
		//cout<<"Enter your commands ..."<<endl; 
		//string command;
		//map<const string, matrix> matrices;
		//while(1){
		//	getline(cin,command);
		//	try{
		//		matrix::run_old_command(command,matrices);
		//	}
		//	catch(string e){ cout<<e<<endl;}
		//}
		/*************************************testing area***************************************/
	/*map<const string, matrix> matrices;
	matrix a = matrix("1 5 6; 8 9 6; 2 5 1");
	matrix b = matrix("1 5 6; 8 9 6; 2 5 2");
	matrix c = matrix("1 5 6; 8 9 6; 2 5 3");
	matrices["a"]=a;
	matrices["b"]=b;
	matrices["c"]=c;
	matrix whole;*/
	try{
		
		//matrix::Solve_any("(sqrt(a)+b).*2",matrices).print_matrix();
		//matrix::Solve_any("5*6",matrices).print_matrix();
		matrix a = matrix("1.200000 2.300000 33.598600 ; 1.300000 2.400000 3.200000; 4.600000 1.300000 7.800000 ;");
	}
	catch(string e){cout<<e<<endl;}
	/*--------------------------------------end of testing area------------------------------*/
}
else{ // passing file as a command argument
	string fpath = argv[1]; //file name
	//matrix::run(fpath); //phase1 function
	matrix::run_adv(fpath);
}
	//system ("pause");
	return 0;
}
