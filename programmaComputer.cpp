
/*!
\file programmaComputer.cpp
\brief Dichiarazione della classe principale
\author Federico
\ version 1.0
\date 18/03/2021
*/

#include "stdafx.h"
#include "Computer.h"
#include "Magazzino.h"

#include <string>
#include <cstdio>
#include <iostream>
using namespace std;



int main()
{
	//! Numero dell'operazione scelta
	int numero = 0;
	//! Numero di computer inseriti nel catalogo
	int i = 0;

	string marca, modello;
	int velocita = 0;
	int ram = 0;
	int disco = 0; 
	int pollici = 0; 
	int anno = 0; 
	int codice = 1;
	//! var pc
	//! \brief Istanza classe Computer
	Computer pc;
	//! var gestione
	//! \brief Istanza classe Magazzino
	Magazzino gestione;

	cout << "catalogo computer" << endl;
	
	do
    {
        do
        {
			// Nessun PC aggiunto al catalogo: visualizzazione del menu' delle operazioni
			cout << "1) Aggiungi un computer al catalogo;" << endl;
			cout << "2) Ricerca di un computer tramite un codice;" << endl;
			cout << "3) Ricerca del miglior computer;" << endl;
			cout << "4) Eliminazione di un computer;" << endl;
			cout << "5) Stampa del catalogo;" << endl;
			cout << "6) Esci dal programma;" << endl;
           
            cin >> numero;
			cout << "\n" << endl;
        }while(numero<1 || numero>6);
		// Esecuzione comando digitato
        switch(numero)
        {
            case 1:  // Aggiunta di un PC
                {
					cout << "Inserisci la marca del pc: "<< endl;
					cin >> marca; 

					cout << "Inserisci il modello: " << endl;
					cin >>  modello;

					cout << "Inserisci la velocita processore: " << endl;
					cin >> velocita;

					cout << "Inserisci la grandezza della RAM: " << endl;
					cin >> ram;

					cout << "Inserisci la dimensione del disco del pc: " << endl;
					cin >> disco;

					cout << "Inserisci la dimensione del monitor del pc in pollici: " << endl;
					cin >> pollici;

					cout << "Inserisci l'anno di acquisto del pc" << endl;
					cin >> anno;
					
					pc = Computer(marca, modello, velocita, ram, disco, pollici, anno, i);
					
					gestione.aggiungiComputer(pc, i);
                    
					cout << "Il pc e' stato inserito nel catalogo" << endl;
					i++;
					break;
                }

            case 2:  // Ricerca di un PC tramite il codice 
                {
                    
					cout << "Inserisci il codice del pc da cercare, se il pc è presente verranno presentate le sue caratteristiche" << endl;
					cin >> codice;
					gestione.ricercaCodice(codice);

                    break;
                }

            case 3:  // Ricerca del miglior PC
                {
					// Ricerca del PC con la maggior velcità del processore
					cout << "Il pc con maggiore velocita del processore" << endl;
					gestione.ricercaMiglioreVelocita();					
					cout << "" << endl;

					 // Ricerca del PC con maggior memoria RAM
					cout << "Il pc con piu' RAM" << endl;
					gestione.ricercaMiglioreDimensione();
					cout << "" << endl;

					 // Ricerca del PC con maggior memoria ROM
					cout << "Il pc con piu' memoria ROM" << endl;
					gestione.ricercaMiglioreDisco();

                    break;
                }

            case 4: // Eliminazione di un PC 
                {                 
					cout << "Inserisci il codice del pc da eliminare" << endl;
					cin >> codice;
					gestione.elimina(codice);

					cout << "Il pc e\' stato eliminato" << endl;

                    break;
                }
            case 5: // Stampa del catalogo
                {
                    gestione.stampa();
                    break;
                }

			case 6: // Uscita dal programma
                {
                    return 0;
                    break;
                }
        }
    }while(numero != 6);
    return 0;
}

