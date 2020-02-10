#include"feu.h"
void feu::tricolor(){


	temp = 0;
	int vitesse_temp;
	NSred = false;
	NSyellow = false;
	NSgreen = true;
	cout << "=========="<< endl;
	cout << "feu vert "<< endl;
	cout << "=========="<< endl;
	while (true) {
		
		wait();// wait till a new car arrive

		while (voiture.read()==false){
			
			wait(); 
		}

		vitesse_temp = vitesse.read();
		cout << "***********************"<< endl;
		cout<< " detection d'une voiture "<< endl;
		cout << "vitesse " << vitesse_temp << endl;
		temp = (int) 50/vitesse_temp*3.6 + 1;// time to reach the intersection

		cout << "     temps  " << temp << endl;
		cout << "***********************"<< endl;

		if ( temp <= 4){// time to pass the intersection

			NSgreen = false;
			NSyellow = true; 
			NSred = false;
			cout << "=========="<< endl;
			cout << "feu jaune "<< endl;
			cout << "=========="<< endl;
			
			std::this_thread::sleep_for (std::chrono::seconds(1));

			Sgreen.write(true);
			temp_vert.write(temp+4);
			
			NSgreen = false; 
			NSyellow = false; 
			NSred = true;
		
			cout << "=========="<< endl;
			cout << "feu rouge "<< endl;
			cout << "=========="<< endl;
	
			std::this_thread::sleep_for (std::chrono::seconds(temp+5));
				
	
		}	
		else{   // the cars passes until the other car arrive to the intersection
			NSred = false;
			NSyellow = false;
			NSgreen = true;
			cout << "=========="<< endl;
			cout << "feu vert "<< endl;
			cout << "=========="<< endl;
	
			std::this_thread::sleep_for (std::chrono::seconds(temp-2));// temp-2 the time until the car reach the intersection

			Sgreen.write(true);
			temp_vert.write(temp+4);
			
			NSgreen = false;// road sensor triggered
			NSyellow = true; // set NS to yellow
			NSred = false;
			cout << "=========="<< endl;
			cout << "feu jaune "<< endl;
			cout << "=========="<< endl;

			std::this_thread::sleep_for (std::chrono::seconds(1));

			NSgreen = false; // yellow interval over
			NSyellow = false; // set NS to red
			NSred = true; // set EW to green
	
			cout << "=========="<< endl;
			cout << "feu rouge "<< endl;
			cout << "=========="<< endl;
		}

	}

}

