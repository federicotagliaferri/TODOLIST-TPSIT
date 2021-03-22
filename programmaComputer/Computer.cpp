#include "Computer.h"

Computer::Computer()
{
	vel = 0;
	marca = "";
	ram = 0;
	disco = 0;
	pollici = 0;
	anno = 0;
	codice = 0;
}
		 
Computer::Computer(std::string marca, std::string modello, int velocita, int ram, int disco, int pollici, int anno, int codice)
{
	this -> marca = marca;
	this -> modello = modello;
	this -> vel = velocita;
	this -> ram = ram;
	this -> disco = disco;
	this -> pollici = pollici;
	this -> anno = anno;
	this -> codice = codice;
}
		 
int Computer::getVel()
{
	return vel;
}

int Computer::getRam()
{
	return ram;
}

int Computer::getDisco()
{
	return disco;
}

int Computer::getPollici()
{
	return pollici;
}

int Computer::getAnno()
{
	return anno;
}

std::string Computer::getMarca()
{
	return marca;
}

std::string Computer::getModello()
{
	return modello;
}

int Computer::getCodice()
{
	return codice;
}
