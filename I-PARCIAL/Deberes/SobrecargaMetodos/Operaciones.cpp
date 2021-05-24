# incluye   " Operaciones.h "


// suma
plantilla < typename T>
T Operaciones <T> :: sumar (T valor1, T valor2) {
	return valor1 + valor2;
}

plantilla < typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3) {
	return valor1 + valor2 + valor3;
}

plantilla < typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3, T valor4) {
	return valor1 + valor2 + valor3 + valor4;
}

plantilla < typename T>
T Operaciones <T> :: sumar (T valor1, T valor2, T valor3, T valor4, T valor5) {
	return valor1 + valor2 + valor3 + valor4 + valor5;
}



// restar
plantilla < typename T>
T Operaciones <T> :: restar (T valor1) {
	return valor1;
}

plantilla < typename T>
T Operaciones <T> :: restar (T valor1, T valor2) {
	return valor1-valor2;
}

plantilla < typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3) {
	return valor1-valor2-valor3;
}

plantilla < typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3, T valor4, T valor5) {
	return valor1-valor2-valor3-valor4-valor5;
}

plantilla < typename T>
T Operaciones <T> :: restar (T valor1, T valor2, T valor3, T valor4, T valor5,T valor6) {
	return valor1-valor2-valor3-valor4-valor5-valor6;
}


// multiplicador
plantilla < typename T>
T Operaciones <T> :: multiplicar (T valor1) {
	return valor1;
}

plantilla < typename T>
T Operaciones <T> :: multiplicar (T valor1, T valor2) {
	return valor1 * valor2;
}

plantilla < typename T>
T Operaciones <T> :: multiplicar (T valor1, T valor2, T valor3) {
	return valor1 * valor2 * valor3;
}

plantilla < typename T>
T Operaciones <T> :: multiplicar (T valor1, T valor2, T valor3, T valor4, T valor5, T valor6) {
	return valor1 * valor2 * valor3 * valor4 * valor5 * valor6;
}




// calcular mayor
plantilla < typename T>
T Operaciones <T> :: calcularMayor (T valor1, T valor2) {
	if (valor1> = valor2) {
		return valor1;
	} más {
		return valor2;
	}
}

plantilla < typename T>
T Operaciones <T> :: calcularMayor (T valor1, T valor2, T valor3) {
		if (valor1> valor2 && valor1> valor3) {
			return valor1;
		}
		else   if (valor2> valor1 && valor2> valor3) {
			return valor2;
		}
		else   if (valor3> valor1 && valor3> valor2) {
			return valor3;
		}
		
		
}

plantilla < typename T>
T Operaciones <T> :: calcularMayor (T valor1, T valor2, T valor3, T valor4) {
	if (valor1> = valor2) {
		if (valor1> = valor3) {
			if (valor1> = valor4) {
				return valor1;
			} más {
				return valor4;
			}
		} más {
			if (valor3> = valor4) {
				return valor3;
			} más {
				return valor4;
			}
		}
	} más {
		if (valor2> = valor3) {
			if (valor2> = valor4) {
				return valor2;
			} más {
				return valor4;
			}
		} más {
			if (valor3> = valor4) {
				return valor3;
			} más {
				return valor4;
			}
		}
	}
}





plantilla < typename T>
T Operaciones <T> :: calcularMayor (T valor1, T valor2, T valor3, T valor4, T valor5) {
		if (valor1> valor2 && valor1> valor3 && valor1> valor4 && valor1> valor5) {
			return valor1;
		}
		else   if (valor2> valor1 && valor2> valor3 && valor2> valor4 && valor2> valor5) {
			return valor2;
		}
		else   if (valor3> valor1 && valor3> valor2 && valor3> valor4 && valor3> valor5) {
			return valor3;
		}
		else   if (valor4> valor1 && valor4> valor3 && valor4> valor3 && valor4> valor5) {
			return valor2;
		}
		else   if (valor1 == valor2 && valor1 == valor3 && valor1 == 4 && valor1 == 5 ) {
			return valor1;	
		}
		else {
			return valor5;
		}
			
}
	
