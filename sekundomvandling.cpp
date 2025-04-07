#include <iostream>
using namespace std;

void timeConversion(int seconds){

	if (seconds < 0) {
		cout << "Tid kan ej vara mindre än 0."; // Säger nog sig självt...
	}
	else {

		const int secmin = 60; // Konstanta värden för att beräkna antal återstående sekunder 
		const int sechour = secmin * 60;
		const int secday = sechour * 24;
		const int secyear = secday * 365;
		
		int years = seconds / secyear; // Antal år i antalet 'seconds' som användaren matar in i main
		seconds %= secyear;		// Återstående 'seconds' efter 'years'
		int days = seconds / secday; // Antal dagar i det förändrade värdet 'seconds'
		seconds %= secday;	// Återstående 'seconds' efter 'days'
		int hours = seconds / sechour; // Osv...
		seconds %= sechour;
		int minutes = seconds / secmin;
		seconds %= secmin;

		cout << "Det motsvarar: " << years << " år, "		// Utmatning av värden
			<< days << " dagar, " << hours << " timmar, " 
			<< minutes << " minuter, " << seconds << " sekunder.";
	}
}

int main() {

	int seconds;	// Återkallar 'seconds' till main från timeConversion

	cout << "Ange ett antal sekunder: ";
	cin >> seconds;		// Låter användaren mata in ett värde

	timeConversion(seconds);	/* Kallar fram funktionen timeConversion, vilket ger utmatningen till hur många år, dagar, timmar, minuter och sekunder får plats
								i värdet angett i 'seconds' */	
	return 0;
}
