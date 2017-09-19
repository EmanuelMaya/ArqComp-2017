#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int Fact(int a){
  int i,c=1;
  for (i=1 ; i<=a ; i++)
    {
         c=i*c;
    }
    return c;
    
}

int main() {
	int x,y,z;
	printf("Ingrese numero a calcular factorial\n");
	scanf("%d",&x);

	
	z=Fact(x);

	printf("la multiplicacion por sumas sucesivas es: %d\n",z);
	system("pause");
	
	
	return 0;
}
