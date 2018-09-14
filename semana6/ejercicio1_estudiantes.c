/*Creado por Alan Macías. Primer ejercicio. Programa que solicita información de un numero predeterminado de estudiantes. Ej. que pida la edad, el sexo(0:hombre, 1:mujer), semestre(1-9) y promedio de la carrera de 10 alumnos. semana 6. 10/09/18*/

#include<stdio.h>

int main()
{
 int n=0;
 printf("¿Con cuantos alumnos quieres trabajar?\n");
 scanf("%i", &n);
 float promedioG=0, s1=0, s2=0, s3=0, s4=0, s5=0, s6=0, s7=0, s8=0, s9=0, edad[n], sexo[n], semestre[n], promedio_estudiante[n], hombre=0, mujer=0;
 int i, j, count;


 for(i=1; i<=n; i++){
printf("introduce el semestre, edad, sexo[1)masculino-2)femenino] y promedio de calificacion del alumno %i\n", i);
scanf("%f %f %f %f", &semestre[i], &edad[i], &sexo[i], &promedio_estudiante[i]);

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
 printf("se introdujeron %i estudiantes. De los cuales:\n %f son hombres\n %f son mujeres\n", n, hombre, mujer);
 
 printf("alumnos por semestre:\n");
 printf("semestre 1: %f\n", s1);
 printf("semestre 2: %f\n", s2);
 printf("semestre 3: %f\n", s3);
 printf("semestre 4: %f\n", s4);
 printf("semestre 5: %f\n", s5);
 printf("semestre 6: %f\n", s6);
 printf("semestre 7: %f\n", s7);
 printf("semestre 8: %f\n", s8);
 printf("semestre 9: %f\n", s9);


 printf("promedio general:\n");

 printf("%f", promedioG);
 

return 0;
 }
