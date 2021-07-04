
#define TAM 255
#define VACIA -1
#include <iostream>
#include <cstring>
#include "pila_arre.h"

using namespace std;





class convierte_expresion
{
    public:     
        // El metodo postix recibe en ei la expresion en infix
        // y la expresion postfix convertida la deja en ep

            void postfix(char ei[], char ep[])
        {
            pila_arre pa;  // esta pila es para convertir de infix a postfix

            int i = 0,j=0;
            while(ei[i] != '\0')
            {
                if(ei[i] >= 'a' && ei[i] <= 'z' || ei[i]>='A' && ei[i] <= 'Z')
                {                                        
                    ep[j] = ei[i]; 
                    i++;
                    j++;
                }
                else
                    if(ei[i]=='(')
                    {
                        pa.push(ei[i]);
                        i++;
                    }
                else 
                     if(ei[i]==')')
                     {
                        while( pa.top() != '(')
                        {
                            ep[j]= pa.pop();
                            j++;
                        }
                            if(pa.top() == '(')
                               {
                                   pa.pop();
                               }
                            i++;
                    }

                    else 
                        if(ei[i]=='+' || ei[i]=='-' || ei[i]=='*' || ei[i]=='/')
                        {
                            if(ei[i]=='+' || ei[i] == '-')
                            {
                                while(!pa.vacia() && pa.top() != '(')
                                    {
                                        ep[j]=pa.pop();
                                        j++;
                                    }
                                pa.push(ei[i]);
                                i++;
                            }
                            else
                            {
                                if(ei[i]=='*' || ei[i]=='/')
                                {
                                    while(!pa.vacia() && pa.top() != '(' && (pa.top()=='*'|| pa.top()=='/'))
                                    {
                                        ep[j]=pa.pop();
                                        j++;
                                    }

                                    pa.push(ei[i]);
                                    i++;
                                }   
                           }      

                       }
                       else
                       {
                           cout<<"CARACTER INVALIDO"<<endl; 
                           ei[i] = '\0';
                       }

            }

            while(!pa.vacia())
            {
                ep[j]=pa.pop();
                j++;
            }
       ep[j] = '\0';

       }

};
