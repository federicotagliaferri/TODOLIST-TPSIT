#pragma once

/*!
\file Magazzino.h
\brief Dichiarazione della classe Magazzino
\author Federico
\ version 1.0
\date 18/03/2021
*/

#include "Computer.h"
#include <string>
#include <iostream>
using namespace std;

/*!
\class Magazzino
\brief la classe rappresenta un magazzino, l'insieme di computer
*/

class Magazzino
{
	private:
		//! \var tot
		//! \brief Il costo totale
		int tot;
		//! \var pc
		//! \brief Array con l'informazioni del PC
		Computer* pc;
	
	public:
		//! \brief Costruttore predefinito
		 Magazzino(void);

		 /*!\ fn aggiungiComputer
		   \brief Aggiunge un PC
		   \param[in] pc
		   \param[in] codice
		   return pc
		 */
		 int aggiungiComputer(Computer pc, int codice);

		 /*!\ fn elimina
		   \brief Elimina un PC
		   \param[in] codice
		 */
		 int elimina(int codice);

		  /*!\ fn ricercaCodice
		   \brief Ricerca un PC utilizzando il codice
		   \param[in] codice
		   return pc
		 */
		 void ricercaCodice(int codice);

		   /*!\ fn ricercaMiglioreVelocita
		   \brief Ricerca il computer con la miglior velocità
		   return PC con la maggior velocità
		 */
		 void ricercaMiglioreVelocita(void);

		   /*!\ fn ricercaMiglioreDimensione
		   \brief Ricerca il computer con più memoria RAM
		   return PC con la maggior dimensione
		 */
		 void ricercaMiglioreDimensione(void);

		  /*!\ fn ricercaMiglioreDisco
		   \brief Ricerca il computer con più memoria ROM
		   return PC con la maggior dimensione della memoria ROM
		 */
		 void ricercaMiglioreDisco(void);

		  /*!\ fn stampa
		   \brief Stampa del catalogo
		   return PC e le sue carazzeristiche
		 */
		 void stampa();
};


