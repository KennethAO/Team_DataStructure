
 // For sleep()
#include <string.h> // For strlen()
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include <cstdlib>
#include <windows.h>



using namespace std;


void marquee2(std::string& text) {
    std::string temp = text;
    text.erase(0, 1);
    text += temp[0];
}



void titulo(string titulo){
	int i;
	int val;
	
	val=titulo.length();
	val=val+30;
	for(i=0; i<= val;i++){
		cout<<"*";
	}
	cout<<"\n \n";
	for(i=0;i<=val;i++){
		cout<<" ";
		if(i==5){
			cout<<titulo;
		}
		cout<<" ";
	}
	cout<<"\n";
	for(i=0;i<=val;i++){
		cout<<"*";
	}
	cout<<"\n \n \n";
}

int main()
{
	
	int n;
///	string test = "  ";
	
	
//	cout<<"ingrese la frase"<<endl;
//	cin>>test;
    std::string test = "BIENVENIDOS AL TEAM DATA STRUCTURE  " ;
    
    
   while(true)
    {
        marquee2(test);
        titulo(test);
        //cout<< (test.c_str())<<endl;
    
        Sleep(100);
       // Beep(700,700);
       
        system("color 04");
        system("cls");
        
	//	system("color 02");
	  // system("mode con: cols=80 lines=25");
	
	
		
        //system("PAUSE");
    
    }
    	
  
	
   
  
    return 0;
}
