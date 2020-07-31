/ * Programma che, definiti 3 numeri, li mette in ordine decrescente
Progetto Open Source, siete liberi di ripubblicarlo con modifiche/miglioramenti
Scritto con piacere da Motion :D */
#include <iostream>;
using namespace std;
int main() {
	int num1, num2, num3;		//variabili dei numeri, conterranno i numeri che verranno ordinati
	num1 = 0;
	num2 = 0;
	num3 = 0;
	cout << "Inserisci primo numero" << endl;		//I numeri vengono inseriti dall'utente
	cin >> num1;
	cout << "Inserisci secondo numero" << endl;
	cin >> num2;
	cout << "Inserisci terzo numero" << endl;
	cin >> num3;
	cout << "Ecco i numeri in ordine decrescente: ";
	if (num1 > num2) {
		if (num2 > num3) {
			cout << num1 << num2 << num3;
		}
		else {
			if (num1 > num3) {
				cout << num1 << num3 << num2;
			}
			else {
				cout << num3 << num1 << num2;
			}
		}
	}
	else {
		if (num2 > num3) {
			if (num3 > num1) {
				cout << num2 << num3 << num1;
			}
			else {
				cout << num2 << num1 << num3;
			}
		}
		else {
			cout << num3 << num2 << num1;
		}
	}
	return 0;
}
