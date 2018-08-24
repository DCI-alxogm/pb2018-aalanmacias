Creado por Alan Macias. 24/08/18
Ejercicios de la semana 3: 

El siguiente explica el funcionamiento de los programas realizados en la semana 3. Con fechas del 20/08/18-24/08/18.

-"Coordenadas.c"
Programa para convertir coordenadas cartesianas x,y,z a esfericas r,θ,φ y viceversa.
En este programa se declaran seis variables tipo flotante, correspondientes a las coordenadas cartesianas (x, y, z) y a la coordenada esferica (r,θ,φ).
se solicita que se introduzcan tres valores (x,y,z) y se asignan a cada variable.
se realizan las siguentes operaciones para convertir las coordenadas cartesianas a polares:
 
        r=sqrt(pow(x,2)+pow(y,2)+pow(z,2))
        Q=(acos(z/r))*(180/3.1415926)
        Y=atan(y/x)*(180/3.1415926)

se imprime las nuevas coordenadas.
se vuelve a lanzar el valor de las coordenadas iniciales y se termina el programa.

-"temperaturas.c"
Programa que convierte temperaturas en °C a K y °F. y finalmente de °F a °C de regreso.
Se declaran tres variables correspondientes a los °C, °K Y °F. se pide introducir una temperatura en °C y se guarda ese valor en la variable correspondiente.
se utiliza la siguiente ecuacion para convertir de °c a K: 
        K=(C+273.15)
Se arroja el valor de los grados en K
se utiliza la siguiente ecuacion para convertir de °C a °F: 
        F=(C*(9/5))+32;
Se arroja el valor de los grados en F.
Se vuelve a mostrar la temperatura que se introdució al inicio en °C.
Se termina el programa



-"coordenadas_y_temperaturas1.c"
Union de los programas de conversion de temperaturas y conversion de coordenadas usando la funcion switch
Se declaran nueve variables flotantes y una flotante tipo entero.
Se pide elegir entre dos opciones ("(1) para convertir temperaturas\n(2) para convertir coordenadas")
Se utiliza switch para elegir una de las dos opciones.
El caso 1 es el mismo programa que "temperatura.c" y el caso 2 es el programa "coordenadas.c".
Lo unico que se hizo fue unir los dos programas anteriores en uno solo, usando la funcion Switch para poder elegir un programa u otro. 

-"coordenadas_y_temperaturas_polares.c"
Modificacion de la opcion 2 (coordenadas) del programa anterior ("coordenadas_y_temperaturas1.c"). Se explicara unicamente la parte modificada del programa.
Se hara una conversion de coordenadas cartesianas a polares. 
Se declaran 7 variables (x,y,r,A1, A2, A3, A4)
solicita introducir una coordenada de la forma (x,y). y se guardan el valor en sus respectivas variables. Se imprime la coordenada que se acaba de introducir.
se realizan las siguientes operaciones:
        r=sqrt(pow(x,2)+pow(y,2))
        A1=atan(y/x)*(180/3.1415926)
        A2=(atan(y/x)*(180/3.1415926))+180
        A3=(atan(y/x)*(180/3.1415926))+180
        A4=(atan(y/x)*(180/3.1415926))+360
En las ecuaciones se considera el cuadrante para hacer la respectiva operacion y arrojar el valor del angulo medido desde el eje de las x positivas.
Se utiliza la funcion "if" para arrojar el cuadrante en el que se encuentra el angulo que se ha introducido. 
si x>0 && y>0. se imprime "tu coordenada se encuentra en el cuadrante 1" y los valores de la coordenada polar (A1)
si x<0 && y>0. se imprime "tu coordenada se encuentra en el cuadrante 2" y los valores de la coordenada polar (A2)
si (x es menor a 0 y y es menor a 0. se imprime "tu coordenada se encuentra en el cuadrante 3" y los valores de la coordenada polar (A3)
si x>0 && y menor a 0. se imprime "tu coordenada se encuentra en el cuadrante 4" y los valores de la coordenada polar (A4)
Se utiliza nuevamente if para arrojar si la coordenada se encuentra en el origen, en el eje de las abscisas o en el eje de las ordenadas.
se arroja la coordenada que se introducio en un inicio.
se termina programa si es que no se ha introducido un una invalides en el programa, en ese caso imprimira "opcion invalida".


-"funciones.c"
Programa que recibe el valor de una variable "X" y evalua los siguentes funciones:
        y=exp(-x)
        y=sen(x)+2*tan(x/2)
        y=ln(x)+3x² 
Se declaran 5 variables tipo flotante (X, radian, y1, y2, y3).
Se pide que se introduzca un valor que se asignara a la variable X. Se realiza la operacion: y1=exp(-1*X) y se imprime el resultado correspondiente (y1)
Se realiza la siguiente operación:  y2=((sin(X))+2*(tan(X/2)))*(180/3.1415926)
y se imprime el resultado correspondiente (y2)
Se realiza la siguiente operación:  y3=log(X)+(3*pow(X,2))
y se imrpime el resultado correspondiente (y3)

-"primer_programa_switch.c"
primer programa con el comando switch. Este y los posteriores programas ejemplo son copiados de la presentacion "PB_semana3.pdf".
se declara una variable tipo entero (opcion)
solicita teclear una opcion ((1) para convertir temperaturas\n (2) para convertir coordenadas)
la respuesta se escanea en la variable "opcion" 
se utiliza el comando switch para establecer los casos. en el caso 1 se imprime en la pantalla "entre a la opcion 1". si se selecciona la opcion 2 se imprime en la pantalla "entre a la opcion 2".
si se introduce una opcion diferente a 1 ó 2, se imprime en la pantalla "opcion invalida".


-"segundo_programa_ifelse.c"
segundo programa de ejemplo usando if...else. Dado un numero imprimir si este es par o impar.
se declara una variable tipo entero (a).
se solicita introducir un valor. ese valor se asigna a la variable "a"
utilizamos la funcion if con la condicion (a%2==0) para imprimir que el valor es par.
utilizamos else para imprimir que el valor es impar.
se termina el programa

-"tercer_programa_ifelse.c"
Si a es par le sumamos 1
se declara una variable tipo entero (a)
se imprime "introduce un numero". ese valor se escanea y se asigna a la variable "a"
se utiliza la funcion if con la condicion a%2==0, si la condicion se cumple se realiza la siguiente operacion:
        a=a+1
se imprime el resultado.

-"cuarto_programa_ifelse.c"
se declaran dos variables tipo entero (numero1, numero2)
se solicita que se introduzcan dos numeros enteros. Se escanean esos valores y se asignan a las dos variables anteriores. 
se utiliza la funcion if con la condicion numero1==numero2. dando como resultado la aclaracion de que ambos enteros son iguales.
se utiliza la funcion if con la condicion numero1>numero2. dando como resultado la aclaracion de que el numero1 es mayor a el numero2.
si esas dos primeras condiciones no se cumplen, utilizamos else para imprimir que el numero1 es menor al numero2.

-"quinto_programa_ifelse.c"
se declara una variable tipo char (c) y se declaran dos variables tipo entero (es_vocalminuscula, es_vocalmayuscula)
se solicita que se introduzca una letra. se escanea ese valor y se asigna a la variable "c".
se establecen las siguientes igualdades: 
        es_vocalminuscula = (c == 'a' || c== 'e' || c == 'i' || c == 'o' || c == 'u')
        es_vocalmayuscula = (c == 'A' || c== 'E' || c == 'I' || c == 'O' || c == 'U')
se utiliza la funcion if con la condicion es_vocalmayuscula || es_vocalminuscula. Si la condicion se cumple se imprime en la pantallla que la letra ingresada es una vocal.
De no cumplirse la condicion se imprime en la pantalla que la letra que se ingreso es una consonante.
se termina el programa.
