#include"systemc.h"
#include <chrono>
#include<thread>
SC_MODULE(sensor) {
sc_out<int> vitesse;
sc_out<bool> voiture;

 void detecter();

 // constructeur
 SC_CTOR(sensor) {

   SC_THREAD(detecter);

   
 }



};
