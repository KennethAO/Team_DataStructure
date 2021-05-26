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
/**
 * @brief Calcula mediante funciones sobrecargados las operaciones
 * 
 * @tparam T 
 * @class Operaciones
 */
template <typename T>
class Operaciones {

	public:
		//suma
		T sumar (T);
		T sumar (T,T);
		T sumar (T,T,T);
		T sumar (T,T,T,T);
		T sumar (T,T,T,T,T);
		T sumar (T,T,T,T,T,T);
		
		//resta
		T restar(T);
		T restar(T,T);
		T restar (T,T,T);
		T restar (T,T,T,T);
		T restar (T,T,T,T,T);
		T restar (T,T,T,T,T,T);
		
		//multiplicaci�n
		
		T multiplicar (T);
		T multiplicar(T,T);
		T multiplicar (T,T,T);
		T multiplicar (T,T,T,T);
		T multiplicar (T,T,T,T,T);
		T multiplicar(T,T,T,T,T,T);	
		
		
		//Calcular Mayor
		T calcularMayor(T);
		T calcularMayor(T,T);
		T calcularMayor(T,T,T);
		T calcularMayor(T,T,T,T);
		T calcularMayor(T,T,T,T,T);
		T calcularMayor(T,T,T,T,T,T);

	
};
