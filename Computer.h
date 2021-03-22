#pragma once
/*!
\file Computer.h
\brief Dichiarazione dellla classe Computer
\author Federico
\ version 1.0
\date 18/03/2021
*/

#include <iostream>
#include <cstdio>
#include <cstring>

/*!
\class Computer
\brief la classe rappresenta un singolo computer
*/

class Computer
{
	private:
		//! \var modello
		//! \brief Il modello del PC
		std::string modello;
		//! \var marca
		//! \brief La marca del PC
		std::string marca;
		//! \var disco
		//! \brief La dimensione del disco del PC
		int disco;
		//! \var vel
		//! \brief La velocità del PC
		int vel;
		//! \var ram
		//! \brief La dimensione della memoria RAM del PC
		int ram;
		//! \var pollici
		//! \brief La dimensione in pollici del PC
		int pollici;
		//! \var codice
		//! \brief Il codice del PC
		int codice;
		//! \var anno
		//! \brief L'anno dell'acquisto del PC
		int anno;
	
	public:
		//! \brief Costruttore predefinito
		 Computer(void);
		 Computer(std::string marca, std::string modello, int velocita, int ram, int disco, int pollici, int anno, int codice);

		 /*!\ fn getMarca
		   \brief Acquisizione della marca del PC
		   \return marca
		 */
		 std::string getMarca(void);

		 /*!\ fn getModello
		   \brief Acquisizione del modello del PC
		   \return modello
		 */
		 std::string getModello(void);

		 /*!\ fn getVel
		   \brief Acquisizione della velocità del PC
		   \return velocità
		 */
		 int getVel(void);

		 /*!\ fn getRam
		   \brief Acquisizione della marca del PC
		   \return Memoria RAM
		 */
		 int getRam(void);

		 /*!\ fn getDisco
		   \brief Acquisizione della memoria ROM del PC
		   \return memoria del disco
		 */
		 int getDisco(void);

		 /*!\ fn getPollici
		   \brief Acquisizione della dimensione del monitor del PC
		   \return pollici del monitor
		 */
		 int getPollici(void);

		 /*!\ fn getAnno
		   \brief Acquisizione della'anno d'acquisto del PC
		   \return anno d'acquisto
		 */
		 int getAnno(void);

		 /*!\ fn getCodice
		   \brief Acquisizione del codice assegnato al PC
		   \return codice del PC
		 */
		 int getCodice(void);
};



