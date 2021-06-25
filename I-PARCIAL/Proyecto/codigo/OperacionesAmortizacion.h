#include "Movimientos.h"

class OperacionesAmortizacion{
    private:
        Movimientos mov;
        double redondear(double numer,int numeroDecimales);
    public:
        OperacionesAmortizacion() = default;
        void ingresoDatos();
        void calcularTEM();
        void calcularCuota();
        double calcularImporteInteres();
        double calcularCostototal();
        double calcularInteres(double saldoPendiente);
        double calcularAmortizaion(double interes);
        double calcularSaldoPendiente(double amortizacion, double saldo);
        void enviarTabla(string);
        void validarIngresoCedula();
        void generarTabla();
};

