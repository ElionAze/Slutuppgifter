#include <iostream>
#include <vector>  // Inkluderar standradbibliotek för vektorer...
#include <cstdlib> // ...slumpgenerering...
#include <ctime> // ...och tidsfunktioner för bättre generering av slumpade tal.
using namespace std;

vector<int> getNumbers() { // Användarens 7 inmatningar i dynamsik array (vector)
	vector<int> numbers; // Vektor för att lagra användarens nummer
	int num; // Variabel för inmatat nummer
	while (numbers.size() < 7) { // Loopa tills vi har 7 nummer
		cin >> num; // Användarens inmatning av numret 
		if (num < 1 || num > 35 || find(numbers.begin(), numbers.end(), num) != numbers.end()) {  // Kontrollera om numret är utanför intervallet 1–35 eller redan finns i listan
			cout << "Ogiltiligt nummer, försök igen: "; // Berättar för användaren att numret är ogiltligt
		}
		else {
			numbers.push_back(num); // Annars läggs numret till i vectorn.
		}
	}
	return numbers; // Returnerar användarens nummer
}

vector<int> generateNumbers() { // 7 slumpade nummer mellan 1 - 35
	vector<int> numbers; // Vektor för att lagra användarens nummer, igen
	srand(time(0)); // Låter funktionen generera slumpmässiga tal
	while (numbers.size() < 7) { // Loopar tills den genererar 7 olika nummer
		int num = rand() % 35 + 1; // Slumpar ett tal mellan 1 - 35
		if (find(numbers.begin(), numbers.end(), num) == numbers.end()) {
			numbers.push_back(num); // Numret läggs till i vektorn så länge den inte redan finns i vektorn 
		}
	}
	return numbers; // Returnerar den slumpade raden
}

int matches4DaWin(vector<int> user, vector<int> win) { // Lika tal mellan generateNumbers och getNumbers för vinsten
	int matches = 0; // Räknare för antal rätt
	for (int i = 0; i < user.size(); i++) { // Går igenom användarens nummer
		if (find(win.begin(), win.end(), user[i]) != win.end()) matches++; // Öka räknaren om numret finns i vinnarvektorn
	}
	return matches; // Returnera antal rätt
}

int main() {
	
	cout << "Ange 7 unika nummer mellan 1 och 35: "; // Be användaren mata in nummer
	vector<int> userNumbers = getNumbers(); // Hämta användarens nummer
	vector<int> winningNumbers = generateNumbers(); // Skapa vinnaraden
	int matches = matches4DaWin(userNumbers, winningNumbers); // Räkna antal rätt

	int winnings[] = { 0, 0, 0, 50, 100, 10000, 500000, 10000000 }; // Vinsttabell beroende på antal rätt
	cout << "\nAntal rätt: " << matches << "\nVinst: " << winnings[matches] << " sek\n"; // Visa resultat och eventuell vinst
	return 0; // Avsluta programmet
}
