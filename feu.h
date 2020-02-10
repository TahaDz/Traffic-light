#include"systemc.h"
#include <chrono>
#include<thread>
SC_MODULE(feu) {

sc_in<int> vitesse;
sc_in<bool> voiture;
sc_out<int>temp_vert;
sc_out<bool>Sgreen ;

 void tricolor();
	int temp;
	bool NSred;
	bool NSyellow;
	bool NSgreen;

 // constructeur
 SC_CTOR(feu) {

   SC_THREAD(tricolor);
   sensitive << vitesse;
   sensitive << voiture;


   
 }

};
