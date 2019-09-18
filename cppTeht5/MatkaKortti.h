#pragma once
#include "pch.h"
using namespace std;
class MatkaKortti
{
private:
	unique_ptr<string> omistaja;
	unique_ptr<float> saldo;
public:
	MatkaKortti();
	~MatkaKortti();
	void aseta(string nimi, float maara);
	void lisaaArvoa(float maaraase);
	void kulje(float maara);
	float getSaldo();
	void tiedot();
};

