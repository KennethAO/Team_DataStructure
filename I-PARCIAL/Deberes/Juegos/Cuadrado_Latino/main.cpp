#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int validate(int);
void generate_square(int);


using namespace std;
int main(int argc, char** argv) {

	int dim,i,j,k,p=0,m=0;
	cout<<"Ingrese la dimension del cuadrado latino:"<<endl;
	cin>> dim;
	validate (dim);
	k=dim;
    generate_square(dim);

    system ("pause");
	}




int validate(int dim){


	while (dim<2){
		cout<<"Dato no valido ingrese nuevamete : "<<endl;
		cin>> dim;
	}
		return dim;

}

void generate_square(int dim){
    for(int i=1;i<=dim;i++)
        {
            for(int j=i,k=1; k <=dim ; k++,j++)
            {
                if (j>dim) // si "j" es mayor a "n"  entonces se reinicia el contador
                {
                        for(int j=1; k <= dim ; k++,j++)
                        {
                              printf (" |%d|\t",j);

                        }
                }

                else
                     printf (" |%d|\t",j);

            }
        printf ("\n");
        printf ("\n");

        }

}
