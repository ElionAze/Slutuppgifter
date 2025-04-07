#include <iostream>
#include <fstream> // Inkluderar externa filer i programmet
#include <string>

using namespace std;

void conversionPrompt() {	// Funktion som frågar inmataren om vilken valuta som ska omvandlas
	cout << "1. USD (Amerikanska dollar" << endl;
	cout << "2. EUR (Euro)" << endl;
	cout << "3. GBP (Brittiska pund" << endl;
	cout << "4. ALL (Albanska lek)" << endl;
	cout << "Ange vilken valuta du vill omvandla till (1-4): ";
}

void conversionCurrency(int amount, string currencyCode) { // Funktion som omvandlar sek till angiven valuta 
	ifstream valutakurs("valutakurser.txt"); // Öppnar filen valutakurser.txt för inläsning
	string valuta; // Variabel för att lagra valutakoden från filen
	double kurs; // Variabel för att lagra valutakursen från filen
	bool found = false; // Flagga för att hålla koll på om valutan hittades

	// Läser in valutakod och kurs från filen rad för rad
	while (valutakurs >> valuta >> kurs) { 
		if (valuta == currencyCode) { // Jämför om valutakoden matchar den vi söker
			cout << "Valuta: " << valuta << endl; // Skriver ut det omvandlade beloppet
			cout << "Antal: " << kurs * amount << " " << valuta << endl; 
			found = true; // Sätter flaggan till true eftersom valutan hittades
			break; // Avbryter loopen när rätt valuta hittats
		}
	}
}

// Följande 4 funktioner anropar coversionCurrency() med rätt deras respektive valutakod
void conversionDollar(int amount) {
	conversionCurrency(amount, "USD");
}

void conversionEuro(int amount) {
	conversionCurrency(amount, "EUR");
}

void conversionQuid(int amount) {
	conversionCurrency(amount, "GBP");
}

void conversionLek(int amount) {
	conversionCurrency(amount, "ALL");
}

// Funktion som hanterar användarens valutaval och kallar på rätt funktion
void conversionMenu(int val, int amount) {

	switch (val) {
	case 1:
		conversionDollar(amount);
		break;
	case 2:
		conversionEuro(amount);
		break;
	case 3:
		conversionQuid(amount);
		break;
	case 4:
		conversionLek(amount);
		break;
	default:
		cout << "Ogiltligt val, försök igen." << endl;	// Låter användaren försöka igen om ett nummer anges som
														// inte är i intervallet 1 <= val <= 4
	
	}
}

	int main() {

	int val; // Variabel som bestämmer vilken valuta sek ska omvandlas till
	int amount; // Antal sek som ska omvandlas

	conversionPrompt(); // Anropar menyn
	cin >> val; // Inmatning för menyn

	cout << "Ange ett värde i sek: ";
	cin >> amount; // Inmatning för antal sek

	if (amount <= 0) { // Ifall amount är mindre eller lika med 0 kommer valutan inte omvandlas
		cout << "Fel, antalet sek måste vara större än 0." << endl;
		return 1; // Låter användaren försöka igen
	}
	
	conversionMenu(val, amount); // Anropar val och amount i funktionen conversionMenu(), 
								// som sen omvandlar amount och skriver ut ett värde samt valutakurs
	return 0;
}
