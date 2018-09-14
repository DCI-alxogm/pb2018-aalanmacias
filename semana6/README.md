 Esta semana se hicieron tres ejercicios:

-"ejercicio1_estudiantes.c":

Es un programa que solicita una cantidad de alumnos con las que va a trabajar, y se guarda en una variable (n), con la que posteriormente vamos a hacer algunos arreglos.
Se utiliza la variable n para definir cuatro arreglos (edad[n], sexo[n], semestre[n], promedio_estudiante[n]).
Se utiliza la función "for" declarada desde 1, hasta el valor que introdució el usuario (n) con un espaciado de uno en uno. El cual se utilizó para que el usuario definiera el semestre, edad, sexo y promedio de un numero n de estudiantes. (las variables semestre, edad, sexo y promedio se declararon anteriormente).
Se escanea el valor de semestre, edad, sexo y promedio, y se guardaron esos valores en sus respectivas variables.
Se utiliza la formula:
        "promedioG=(promedioG+promedio_estudiante[i])" 
Para sumar cada uno de los promedios de cada estudiante.
se utiliza la función "if...else" para establecer que cada que el usuario defina que un estudiante es hombre (1) se sume uno a a la variable "hombre" (declarada al inicio del programa), y si se define que un estudiante es mujer se suma a la variable "mujer" (declarada al inicio del programa).
Se utiliza otro ciclo "if... else" para agregar uno a las variables que se declararon anteriormente (s1, s2, s3, s4, s5, s6, s7, s8, s9) dependiendo del valor que el usiario introduzca.
Se imprime el numero de estudiantes que el usuario asigno, cuantos son hombres y cuantos son mujeres.
Se imprime la cantidad de alumnos por semestre.
Se imprime el promedio general.
Se termina el programa. 

-"ejercicio2.c"

es un arreglo del programa anterior que hace que el programa lea un documento que contiene la informacion de los alumnos, utiliza esa información para crear un documento con los resultados. 
Las unicas diferencias con el programa anterior es que se inicializan las variables para leer y escribir los documentos ( FILE *informacion y FILE *resultado). Se inicializa el documento que se va a leer (informacion = fopen("informacion.txt", "r")) y se cambian los scanf y los printf por fscanf y fprintf, respectivamente, asi como la sintaxis. Se cierra el programa de lectura (fclose(informacion)).

Antes de que se impriman los valores se inicializa el programa en el que se quiere que se impriman (resultado=fopen("resultado", "w")), nuevamente se cambian los printf y scanf por fprintf y fscanf, asi como la sintaxis de cada uno. Se cierra el programa (fclose(resultado)).

-ejercicio3.c"

Es un programa que calcula el valor de una funcion evaluada en un rango dado para que guarde el resultado en un archivo (funciones_evaluadas.txt).
Se declaran las variables necesarias para que el usuario introduzca el valor inicial del rango, el valor final, el numero de iteraciones.
Se inicializa el documento de texto que va a arrojar nuestro programa con los resultados (fp=fopen("funciones_evaluadas.txt","w"))
Se solicita que se introduzcan esos tres datos y se guardan en sus respectivas variables.
Se utiliza un ciclo "for" desde 0, hasta el numero de iteraciones que el usuario introdujo, con un espaciado de uno en uno. Dentro de este "for" se imprimen los resultados de cada una de las operaciones, cambiando los printf por fprintf y la sintaxis. se cierra el programa (fclose(fp)). Se termina el programa. 
