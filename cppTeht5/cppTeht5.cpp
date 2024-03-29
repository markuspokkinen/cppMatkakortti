// cppTeht3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

using namespace std;

string nimi;
double maara;
unique_ptr<MatkaKortti> mk(new MatkaKortti());

void luoKortti()
{
	cout << "---------------------------------Kortin Luonti------------------------------";
	cout << "\n\t\t\tOmistajan Nimi:\t";
	getline(cin, nimi);
	cout << "\t\t\talku saldo:\t";
	cin >> maara;
	cin.get();
	mk->aseta(nimi, maara);
}
void lataaSaldo() 
{
	cout << "---------------------------------Saldon Lataaminen------------------------------";
	cout << "\n\t\t\tPaljon Arvoa Laitetaan:(decimaali jako pisteella)\t";
	cin >> maara;
	mk->lisaaArvoa(maara);

}
void matkustaHelsingissa()
{
	cout << "---------------------------------Matkustaminen Helsingissä (2,5 €)------------------------------";
	if (mk->getSaldo() >= 2.5) {
		mk->kulje(2.5);
		cout << "\nOK Nykyinen saldo: " << mk->getSaldo();
	}
	else {
		cout << "\nEi Tarpeeksi saldoa, nykyinen saldo: " << mk->getSaldo();
	}
	cin.get();
}
void matkustaSeutuna()
{
	cout << "---------------------------------Matkustaminen Seutuna (3,8 €)------------------------------";
	if (mk->getSaldo() >= 3.8) {
		mk->kulje((float)3.8);
		cout << "\nOK Nykyinen saldo: " << mk->getSaldo();
	}
	else {
		cout << "\nEi Tarpeeksi saldoa, nykyinen saldo: " << mk->getSaldo();
	}
	cin.get();
}
void tulostaKortti()
{
	mk->tiedot();
	cin.get();
}
int main()
{
	char v;
	do
	{
		system("cls");
		cout << "---------------------------------Valikko------------------------------";
		cout << "\n\n\n\n";
		cout << "\t\t\tLuo matkakortti\t\t\t1";
		cout << "\n\t\t\tLataa saldoa\t\t\t2";
		cout << "\n\t\t\tMatkusta Helsingissä\t\t3";
		cout << "\n\t\t\tMatkusta seutuliikenteessä\t4";
		cout << "\n\t\t\tTulosta kortin tiedot\t\t5";
		cout << "\n\t\t\tLopetus\t\t\t\t6";
		cout << "\n\t\t\tValitse:";
		cin >> v;
		cin.get();
		cout << "\n";
		switch (v) {
		case '1':
			luoKortti();
			break;
		case '2':
			lataaSaldo();
			break;

		case '3':
		{
			matkustaHelsingissa();
			break;
		}
		case '4':
			matkustaSeutuna();
			break;
		case '5':
			tulostaKortti();
			break;
		case '6':
			break;
		}
	} while (v != '6');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
