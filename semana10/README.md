Creado por Alan Macias. Semana 10.

Esta semana se realizaron ejercicios con los que los datos que utiliza el programa se dan desde el momento que se corre el programa en forma de argumentos, así como ejercicios utilizando funciones desde codigos diferentes.

"ejemplo1.c"
Lo unico nuevo que hay en este programa es la manera en la que se van a recibir los argumentos al momento de correr el programa. Para eso declaramos unas variables dentro de la función main de la siguiente manera: 
		int main(int argc, char *argv[])

De esta manera estamos declarando que la cantidad de argumentos sera argc, y esos argumentos tomaran los valores que el usuario defina que se guadaran en argv[].
Para correr el programa utilizamos el mismo comando que ya conocemos (./nombre_programa) mas los argumentos que seran necesarios en nuestro programa. Ejemplo:
		./ejemplo1.out Alan

Así es como estamos corriendo el programa y tambien declarando los argumentos. El argumento 0 en este caso es "./ejemplo.out" y el argumento 1 es "Alan".

De esta manera al utilizar "printf("el programa que estas ejecutando es: %s\n", argv[0]);" en el programa, lo que estamos diciendo con argv[0] es que va a imprimir la cadena de caracteres del argumento 0. Si ahora utilizamos argv[1] estamos hablando del argumento numero 1, en este caso "Alan".

"ejemplo2.c"
Hacemos casi lo mismo, solo que esta vez hacemos que el programa tome el argumento numero 1 para crear un archivo con el mismo nombre.

"Ejemplo3.c"
Es un programa que trabaja con 5 argumentos y los convierte a datos numericos por medio de una funcion (atof())como se muestra a continuación:
		Tin=atof(argv[1]);
		num=atoi(argv[3]);
Estamos diciendo que el valor de argv[1] se va a transformar a un dato tipo float, y eso se va a guardar en Tin. En el siguiente hacemos algo similar, solo que esta vez utilizando el atoi en vez de convertirlo a un dato tipo float, lo convertimos en un dato tipo int.

"ejemplo4.c" y "ejemplo5.c"
Estos son programas complementarios. En estos programas trabajamos con funciones declaradas en codigos diferentes.
En el ejemplo 4 declaramos una funcion llamada cuadrado. y en la funcion principal unicamente decimos que realizara la funcion cuadrado.
Ya en el ejemplo 5 se declara que es lo que va a hacer la funcion "cuadrado".
Para correr el programa en este caso necesitamos decir en la terminal:
		gcc ejemplo4.c ejemplo5.c -o nombre_del_programa

"ejercicio1.c"
En este programa se entregan valores en un rango de puntos con un espaciado especifico en las tres dimenciones ("x", "y" y "z"), con valores dados por el usuario como argumentos al momento de correr el programa.
Se utilizo lo que se practico en el ejmplo 1 al declarar el argumento de la funcion main
Se imprime el nombre del programa que esta guardado en argv[0].
Se cambian los valores de los argumentos que se dieron al correr el programa y se guardan en una variables que se declararon previamente.
Se realizan ciertas operaciones para calcular en intervalo en cada cada una de las dimensiones.
Se utilizan if para asegurarnos que el usuario intrduzca los argumentos necesarios para que el programa funcione, si son menos dira: "Se requiere de al menos 8 argumentos" y si son mas: "Mas argumentos de los necesarios"
Se utilizan for para dar los numeros en cada dimencion dando los saltos que se definieron anteriormente.
Se imprimen solo las coordenadas donde los valores de las tres dimenciones (x,y,z) son iguales.

"ejercicio2_1.c", "ejercicio2_2.c" y "ejercicio2_3.c"
Estos ejercicios al igual que los ejemplos 4 y 5, son programas complementarios.
En este programa se realiza conversion de temperaturas o coordenadas dependiendo del argumento numero 2 que el usuario introduzca. 

En la primera parte del codigo se declara nuevamente los argumentos de la funcion main que va a introducir el usuario, las variables con las que trabajará el programa y las funciones que se escribiran en otro codigo (estas funciones tambien tienen otros argumentos que tomara del programa principal.
Se declara que el segunto argumento (argv[2]) que se introduce en la terminal se va a convertir a un valor entero que se va asignar a la variable "opcion".

Si opcion es 1 se ira a la primera parte del pograma y hara conversion de temperaturas, si es 2 realizará conversion de coordenadas (esto lo hacemos utilizando un switch)
Dentro del primer caso (conversion de temperaturas) unicamente son necesarios tres argumentos (el nombre del programa, la seleccion de lo que hara el programa y la temperatura que se va a convertir) si el usuario introduce mas argumentos o menos argumentos de los necesarios, el programa pedira que se introduzcan los argumentos que son necesarios.
Si el usuario introduce desde un principio los argumentos necesarios se delara que el argumento en argv[2] se va a convertir a un flotante y se va a guardar en la variable "C"
Despues realizara todo lo que la funcion "temperaturas()" determine.

Si opcion es igual a 2 entonces lo que el programa va a realizar es una conversion de coordenadas.
Tambien por medio de funciones if nos aseguramos que el usuario introduzca los argumentos necesarios para que el programa funcione, ni mas ni menos. 
Si los argumentos son los necesarios, define que los valores en argv[2], argv[3] y argv[4] se van a guardar en "x", "y" y "z", respectivamente.
Despues se realiza todo lo que la funcion coordenadas determina. 

En la segunda parte del programa se declara todo lo perteneciente a la funcion "temperaturas".
se declara la funcion y el argumento de la funcion, en este caso es el valor de C que el usuario introdujo en un inicio. 
Se imprime en pantalla lo que se v a realizar y hace algunas operaciones. 

La tercera parte es la correspondiente a la parte de la funcion "coordenadas".
Se declara la funcion y el argumento de la funcion, en este caso son "x", "y" y "z" que se toman tambien de lo que el usuario ya definio inicialmente.
Se declaran las variables que se van a necesitar.
Se imprime en pantalla lo que el programa va a realizar y se realizan las operaciones necesarias para arrojar el resultado.

para compilar este programa se hace de la siguiente manera:
		gcc ejercicio2_1.c ejercicio2_2.c ejercicio2_3.c -o nombre_del_programa.out -lm
De esta manera compilamos los tres codigos en un solo programa.

