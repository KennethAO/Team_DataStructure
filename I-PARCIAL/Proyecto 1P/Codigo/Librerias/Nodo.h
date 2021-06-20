template <typename T>
class Nodo{
	
	protected:
		
	private:
	   T valor;
	   Nodo *siguiente;
	public:
		
	   Nodo(T, Nodo *);
	   Nodo();
	   T getValor(void);
	   void setValor(T);
	   Nodo* getSiguiente(void);
	   void setSiguiente(Nodo* );
	   virtual ~Nodo();

};
