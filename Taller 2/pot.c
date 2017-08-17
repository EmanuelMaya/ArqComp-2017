#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

  int multiplicador(x)
  {
  int i,z;
  z=0;

  for(i=1;i<=x;i++)
	{
		z=z+x;
	}
 
 return z;	
  }

int main(int argc, char *argv[]) {
int base=0,exponente=0,contador=1,base1,resultado=0,resultado2,i;
printf ("Escriba una base:");
scanf ("%d", &base);

printf ("Escriba un exponente:");
scanf ("%d", &exponente);
//base1=base;
  for(i=0;i<exponente;i++)
  {
   resultado=multiplicador(base);
   resultado=	
  }
   

printf ("El resultado de la potencia es: %d\n", resultado); 
system("pause");

return 0;

}
