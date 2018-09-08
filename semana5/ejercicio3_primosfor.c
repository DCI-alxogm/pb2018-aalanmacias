/* Creado por Alan Macías. Encuentra e imprime en la pantalla todos los numeros primos en un intervalo definido por el usuario. Semana 5. 06/09/18.*/

#include<stdio.h>
#include<math.h>

int main()
{
 int valorA, valorZ, a, b, digitos, raiz, primo;

 printf("Encontraremos los numeros primos de un intervalo dado. \n Introduce dos numeros para calcular los primos en ese intervalo.\n");
 scanf("%d" "%d", &valorA, &valorZ);

 while((valorZ-valorA)>100)
   {
    printf("El intervalo es muy grande\n Introduce un intervalo menor a 100");
    scanf("%d" "%d", &valorA, &valorZ);
   }

 for(a=valorA; a<=valorZ; a++)
    {		
     primo=1;
     raiz = sqrt(a);
     for(b=2; b<=raiz; b++)
        {
	 if(a%b==0)
           {
	    primo=0;			
	   }			
	}
     if(primo==1)
       {
	printf("%i,", a);	
	digitos++;
	if(digitos%20==0)
          {
	   printf("\n");		
	  }	
       }	 
    }
	return 0;
}
