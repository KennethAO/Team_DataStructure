/**
 * "Universidad de las Fuerzas Armadas ESPE"
 * @file Principal.cpp
 * @author Kenneth Andrade (koandrade@espe.edu.ec.)
 * @author Rafael Buse (rebuse@espe.edu.ec)
 * @author David Calvopiña (ldvalvopina@espe.edu.ec)
 * @author Nicolas Hidrobo (anhidrobo@espe.edu.ec)
 * @author Henry Tiamba (hatiamba@espe.edu.ec)
 * @author Bryan Pariño (baclavon@espe.edu.ec)
 * @brief Sobrecarga de Métodos en Operaciones Matemáticas C++
 * @version 0.2
 * @date 2021-05-24
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "Supermarket.cpp"
/**
 * @brief clase con las operacioones del supermercado
 * 
 */
class MarketOperation{

private:
		Supermarket market;
public: 
		MarketOperation(Supermarket);
		float operator + (MarketOperation);
		float operator - (MarketOperation);
		float operator * (MarketOperation);
		void operator ++ (int);
		void operator -- (int);
		string operator > (MarketOperation);
		string operator < (MarketOperation);
		float operator *= (float);
		float operator % (int);
		string operator == (MarketOperation);
		void operator != (string);
		string operator || (float);
		string operator && (float);
		float operator | (int);
		float operator / (int);
		float operator ^ (float);
		int operator [] (MarketOperation);
		string operator %= (MarketOperation);
};




