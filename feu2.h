#include"systemc.h"
#include <chrono>
#include<thread>
SC_MODULE(feu2) {

sc_in<int>temp_vert;
sc_in<bool>Sgreen ;



 void tricolor();
	int temp;
	bool NSred;
	bool NSyellow;
	bool NSgreen;
	bool OSyellow; 
	bool OSgreen;
	bool OSred;

 // constructeur
 SC_CTOR(feu2) {

   SC_THREAD(tricolor);
   sensitive << Sgreen;
   sensitive << temp_vert;
  


   
 }

};
