#include "capteur.h"
#include "feu.h"
#include "feu2.h"
#include"systemc.h"
int sc_main (int argc , char * argv[]) {
	

  sc_signal<int> speed;
  sc_signal<bool> car;
  sc_signal<int> time_green;
  sc_signal<bool> green;

  sensor sensor("sensor");
  feu feu("feu");
  feu2 feu2("feu2");

  sensor.vitesse(speed);
  sensor.voiture(car);

  feu.vitesse(speed);
  feu.voiture(car);
  feu.temp_vert(time_green);
  feu.Sgreen(green);

  feu2.temp_vert(time_green);
  feu2.Sgreen(green);

	sc_start(200, SC_SEC);
return 0 ;
 }
