#include "Supermarket.cpp"

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




