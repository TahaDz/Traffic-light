#include"feu2.h"
void feu2::tricolor(){

	
	OSred = true;
	OSyellow = false;
	OSgreen = false;
	cout << "+++===========+++"<< endl;
	cout << "   feu rouge 2 "<< endl;
	cout << "+++===========+++"<< endl;
	while (true) {		
			wait();

		if (Sgreen.read () == true){
			
				NSgreen = false;// road sensor triggered
				NSyellow = true; // set NS to yellow
				NSred = false;
				cout << "+++===========+++"<< endl;
				cout << "   feu vert 2"<< endl;
				cout << "+++===========+++"<< endl;
	
			std::this_thread::sleep_for (std::chrono::seconds(1));
				OSred = false;
				OSyellow = true;
				OSgreen = false;
				cout << "+++===========+++"<< endl;
				cout << "   feu jaune 2"<< endl;
				cout << "+++===========+++"<< endl;

			std::this_thread::sleep_for (std::chrono::seconds(temp_vert.read()));

				OSred = true;
				OSyellow = false;
				OSgreen = false;
				cout << "+++===========+++"<< endl;
				cout << "   feu rouge  2"<< endl;
				cout << "+++===========+++"<< endl;
		}
			
		
	}

}

