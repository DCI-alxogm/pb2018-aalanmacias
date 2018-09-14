/*Creado por Alan Macías*/
#include<stdio.h>

int main()
{
 FILE *informacion;
 FILE *resultado;
 int n=0;

  informacion = fopen("informacion.txt", "r");
 fscanf(informacion, "%i", &n);
 float promedioG=0, s1=0, s2=0, s3=0, s4=0, s5=0, s6=0, s7=0, s8=0, s9=0, edad[n], sexo[n], semestre[n], promedio_estudiante[n], hombre=0, mujer=0;
 int i, j, count;


 for(i=1; i<=n; i++){
fscanf(informacion, "%f %f %f %f", &semestre[i], &edad[i], &sexo[i], &promedio_estudiante[i]);
 fclose(informacion);

 promedioG=(promedioG+promedio_estudiante[i]);
 
 if(sexo[i]== 1)
hombre++;
else if(sexo[i]==2)
 mujer++;

 

 if(semestre[i]==1)
++s1;

  else if(semestre[i]==2)
 ++s2;
 
 else if(semestre[i]==3)
  ++s3;
 
  else if(semestre[i]==4)
   ++s4;
   
   else if(semestre[i]==5)
    ++s5;
   
    else if(semestre[i]==6)
     ++s6;
     
     else if(semestre[i]==7)
      ++s7;
     
      else if(semestre[i]==8)
       ++s8;
       else if(semestre[i]==9)
        ++s9;        

}      
promedioG=promedioG/n;
 
 resultado=fopen("resultado", "w");      
 fprintf(resultado, "se introdujeron %i estudiantes. De los cuales:\n %f son hombres\n %f son mujeres\n", n, hombre, mujer);
 
 fprintf(resultado, "alumnos por semestre:\n");
 fprintf(resultado, "semestre 1: %f\n", s1);
 fprintf(resultado, "semestre 2: %f\n", s2);
 fprintf(resultado, "semestre 3: %f\n", s3);
 fprintf(resultado, "semestre 4: %f\n", s4);
 fprintf(resultado, "semestre 5: %f\n", s5);
 fprintf(resultado, "semestre 6: %f\n", s6);
 fprintf(resultado, "semestre 7: %f\n", s7);
 fprintf(resultado, "semestre 8: %f\n", s8);
 fprintf(resultado, "semestre 9: %f\n", s9);


 fprintf(resultado, "promedio general:\n");

 fprintf(resultado, "%f", promedioG);
 
 fclose(resultado);

return 0;
 }

