#include"capteur.h"
void sensor::detecter (){

	
	while(true){
		
		int vit = rand() % 55+5;
		int att = rand() % 90+10;
		voiture.write(true);
		vitesse.write(vit);
		wait(att, SC_SEC);
		//std::this_thread::sleep_for (std::chrono::seconds(rand() % 10+1));//
	}

}
