#include <iostream> 
#include <string> 

using namespace std;

int evalua(int k[], int n, int x) {
   int p = 0;
   for (int i = 0; i < n; i++) 
   {
      p = p + k[i]
   }
 
   return p;
}

int main()
{
   int n, i;
 
   cout<<"Ingrese el numero de coeficientes n";
   cin>>n;
 
   int k[i]; 
   int x;
 
   for (int i = 0; i < n; i++) 
   {
      cout<<"El coeficiente a" <<i<< " = ";
      cin>>k[i];
   }
 
   cout<<"Ingrese un valor para x";
   cin>>x;
 
   int valor=evalua(k, n, x);
   cout<<"El valor numerico p " <<x<< " = "<<valor<<endl;
 
   cin.get();
   cin.get();
   return 0;
}
 

