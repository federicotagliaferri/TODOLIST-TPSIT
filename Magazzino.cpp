#include "Magazzino.h"

Magazzino::Magazzino()
{
	tot = 0;
	pc = new Computer[1000];
}

int Magazzino::aggiungiComputer(Computer comp, int codice)
{
	pc[codice] = comp;
	tot=tot+1;
	return tot;
}

void Magazzino::stampa()
{
	int i;
	for (i = 0; i < tot; i++)
	{
		int n = 1;
		cout << "Computer n " << n << endl;

		cout << "Il codice: " << pc[i].getCodice() << endl;

		printf("La marca: %s\n", pc[i].getMarca().c_str());

		printf("Il modello: %s\n", pc[i].getModello().c_str());

		cout << "Velocita\' processore: " << pc[i].getVel() << endl;

		cout << "Ram: " << pc[i].getRam() << endl;

		cout << "Disco: " << pc[i].getDisco() << endl;

		cout << "Monitor: " << pc[i].getPollici() << endl;

		cout << "L'anno: " << pc[i].getAnno() << endl;

		cout << "" << endl;
		n=n+1;
	}
}

int Magazzino::elimina(int cod)
{
	int i;
	for (i = cod; i < tot; i++)
	{

		pc[i]= pc[i+1];

	}
	return tot=tot-1;
}

void Magazzino::ricercaCodice(int codice)
{
	bool flag = false;
	int i;
	for (i = 0; i < tot; i++)
	{
		if(pc[i].getCodice() == codice)
		{
			cout << "Il computer e\' presente e le sue caratteristiche sono: " << endl;

			cout << "Il codice: " << pc[i].getCodice() << endl;

			printf("La marca: %s\n", pc[i].getMarca().c_str());

			printf("Il modello: %s\n", pc[i].getModello().c_str());

			cout << "Velocita\' processore: " << pc[i].getVel() << "Giga Hertz" << endl;

			cout << "Ram: " << pc[i].getRam() << "GB" << endl;

			cout << "Disco: " << pc[i].getDisco() << "GB" << endl;

			cout << "Monitor: " << pc[i].getPollici() << "pollici" << endl;

			cout << "L'anno: " << pc[i].getAnno() << endl;

			flag = true;

		}
	}

	if (flag == false)
	{
		cout << "Non ci sono computer con questo codice" << endl;
	}
}

void Magazzino::ricercaMiglioreVelocita()
{
	int i, max = 0, var = 0 ;
	for (i = 0; i < tot; i++)
	{
		if(pc[i].getVel() > max)
		{
			max = pc[i].getVel();
			var = i;
		}
	}
	cout << "Il codice e': " << pc[var].getCodice() << endl;

	printf("La marca e': %s\n", pc[var].getMarca().c_str());

	printf("Il modello e': %s\n", pc[var].getModello().c_str());

	cout << "Velocita' del processore: " << pc[var].getVel() << "Giga Hertz" << endl;

	cout << "Ram: " << pc[var].getRam() << "GB" << endl;

	cout << "Disco rigido: " << pc[var].getDisco() << "GB" << endl;

	cout << "Monitor: " << pc[var].getPollici() << "pollici" << endl;

	cout << "Anno di acquisto: " << pc[var].getAnno() << endl;
}
		 
	
	
void Magazzino::ricercaMiglioreDimensione()
{
	int i, max = 0, var = 0 ;
	for (i = 0; i < tot; i++)
	{
		if(pc[i].getRam() > max)
		{
			max = pc[i].getRam();
			var = i;
		}
	}
	cout << "Il codice: " << pc[var].getCodice() << endl;

	printf("La marca: %s\n", pc[var].getMarca().c_str());

	printf("Il modello: %s\n", pc[var].getModello().c_str());

	cout << "Velocita\' processore: " << pc[var].getVel() << endl;

	cout << "Ram: " << pc[var].getRam() << endl;

	cout << "Disco: " << pc[var].getDisco() << endl;

	cout << "Monitor: " << pc[var].getPollici() << endl;

	cout << "L'anno: " << pc[var].getAnno() << endl;
}

void Magazzino::ricercaMiglioreDisco()
{
	int i, max = 0, var = 0 ;
	for (i = 0; i < tot; i++)
	{
		if(pc[i].getDisco() > max)
		{
			max = pc[i].getDisco();
			var = i;
		}
	}
	cout << "Il codice: " << pc[var].getCodice() << endl;
	printf("La marca: %s\n", pc[var].getMarca().c_str());
	printf("Il modello: %s\n", pc[var].getModello().c_str());
	cout << "Velocita\' processore: " << pc[var].getVel() << endl;
	cout << "Ram: " << pc[var].getRam() << endl;
	cout << "Disco: " << pc[var].getDisco() << endl;
	cout << "Monitor: " << pc[var].getPollici() << endl;
	cout << "L'anno: " << pc[var].getAnno() << endl;
}
