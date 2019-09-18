#include "pch.h"


MatkaKortti::MatkaKortti()
{
	omistaja.reset(new string());
	saldo.reset(new float());
}


MatkaKortti::~MatkaKortti()
{
	cout << "matkakortti tuhoutuu";
	cin.get();
}

void MatkaKortti::aseta(string nimi, float maara)
{
	*omistaja = nimi;
	*saldo = maara;
}

void MatkaKortti::lisaaArvoa(float maaraase)
{
	*saldo += maaraase;
}

void MatkaKortti::kulje(float maara)
{
	*saldo -= maara;
}

float MatkaKortti::getSaldo()
{
	return *saldo;
}

void MatkaKortti::tiedot()
{
	cout << "Kortin Omistaja: " << *omistaja << "\nKortin Arvo: " << *saldo;

}
