#include "Date.h"
#include "Persona.h"
#include <sstream>

class Movimientos
{
private:
    double montoPagar;
    int plazoMeses;
    double TEA;
    double TEM;
    double cuota;
    Date fechaInicio;
    string cedulaPropietario;

public:
    Movimientos() = default;
    double getMontoPagar();
    void setMontoPagar(double newMontoPagar);

    int getPlazoMeses();
    void setPlazoMeses(int newPlazoMeses);

    double getTEA();
    void setTEA(double newTEA);

    double getTEM();
    void setTEM(double newTEM);

    double getCuota();
    void setCuota(double newCuota);

    Date getFechaInicio();
    void setFechaInicio(Date newFechaInciio);

    string getCedulaPropietario(void);
	void setCedulaPropietario(string newCedula);
    Persona obtenerPersona();

    string formatoTxt();

    
    
};


