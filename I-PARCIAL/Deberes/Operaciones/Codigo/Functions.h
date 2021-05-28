/**
 * "Universidad de las Fuerzas Armadas ESPE"
 * @file main.cpp
 * @author Kenneth Andrade (koandrade@espe.edu.ec.)
 * @author Rafael Buse (rebuse@espe.edu.ec)
 * @author David CalvopiÃ±a (ldvalvopina@espe.edu.ec)
 * @author Nicolas Hidrobo (anhidrobo@espe.edu.ec)
 * @author Henry Tiamba (hatiamba@espe.edu.ec)
 * @author Bryan PariÃ±o (baclavon@espe.edu.ec)
 * @brief Funciones con operaciones matematicas
 * @version 0.1
 * @date 2021-05-27
 * @copyright Copyright (c) 2021
 * 
 */
/**
 * @brief Calcula mediante funciones las funciones matematicas
 * @class Functions
 */
class Functions{	
	private: 
			double value;
	public:
			Functions(long double);
			void setValue(long double);
			long double getValue();
			double squareRoot(double);
			long double calculateSin(double);
			double calculatePi (double);
			long double calculateTan(long double);
			long double calculateCos(long double);
			long double calculateCotan(long double);				
			int sign(int);
			long double powerNumber(long double, long double);
			long double factorialNumber(long double);
			
};

