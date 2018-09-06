/*Creado por Alan Macías. tercer ejemplo funcion for. semana 5. ciclos anidados for*/

#include<stdio.h>
#include<math.h>

int main()
{
 float res;
 int n=3, k, j;

 for(j=0;j<n;j++)
 {
  for(k=0;k<n;k++)
  {
   res=j*k*1.0;
   printf("%i %i %f\n", j, k, res);
  }
 }
return 0;
}
