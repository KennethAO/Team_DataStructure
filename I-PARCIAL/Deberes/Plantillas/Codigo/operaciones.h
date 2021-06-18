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
 * @date 2021-06-17
 * @copyright Copyright (c) 2021
 */
/**
 * @brief Clase Operaciones
 * 
 * @tparam tipoDato 
 */
template <typename tipoDato>
class Operaciones {
	
	private:
		tipoDato valor1;
		tipoDato valor2;
		
	public:
		Operaciones(tipoDato _valor1, tipoDato _valor2){
			valor1 = _valor1;
			valor2 = _valor2;
		}
		tipoDato sumar();
		tipoDato restar();
		tipoDato dividir();
		tipoDato multiplicar();	
};
