/*Creado por Alan Macías. transforma un numero entero dado en binario a decimal y viceversa*/

#include<stdio.h>
#include<math.h>

int main()
{
 int vb=0, vd=0, caso=0, count=0, a=0;
 char posicion[100];
 //vd=valor decimal intoducido por usuario
 //vb=valor binario introducido por usuario

 printf("Este programa convierte de numeros en base decimal a binario, y viceversa.\n presiona 1 para convertir de decimal a binario \n presiona 2 para convertir de binario a decimal\n");
 scanf("%d", &caso);

 switch(caso){ 
 case 1:
 	printf("Introduce el valor en base decimal que quieras convertir a binario\n");
	scanf("%i", &vd);
	while(vd>0)
	     {
	       if(vd%2==1)
	         {
		   posicion[count++]='1';
	         }
	       else
		   {
		     posicion[count++]='0';
		   }
		vd/=2;
	     }
	printf("el valor binario es:");
	for(int i=count; i>0; i--)
	   {
	    printf("%c", posicion[i-1]);
	   }
 break;	
 case 2:
	printf("Introduce el valor en base binaria que quieras convertir a decimal\n");
	scanf("%i", &vb);
	while(vb>0)
	     {
	      a=vb%10;
	      if(a!=0)
	        {
		vd+=pow(2,count);
	        }
	      vb/=10;
	      count++;
            }
	printf("el resultado en decimal es %i\n",vd);
 break;
}
return 0;
}

