#include<iostream>

using namespace std; 

class Supermarket{
	
	private:
		string name;
		float dailyEarnings;
		int employee=20;
		
	public:
		Supermarket(string _name=" ", float _dailyEarnings=0);
		string getName();
		float getDailyEarnings();
		int getEmployee();
		void setName(string);
		void setDailyEarnings(float);
		void setEmployee(int);
		
};
