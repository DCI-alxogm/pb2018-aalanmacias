Creado por Alan Macías.
Semana 5. 07/09/18.

Esta semana realizamos tres ejemplos y cuatro ejercicios.

En "ejemplo1_for.c" se realizo un codigo que ejecuta un programa para hacer conversiones de temperaturas.
Comienza preguntando si se esta listo para comenzar y guarda esa respuesta en una variable establecida anteriormente. esta respuesta nos permite entrar a un comando while para comenzar a calcular las temperaturas. Solcita introducir un valor inician en °C, un valor final, y cuantos valores intermedios se desea tener. Se usa un for desde 0 hasta un rango que se saco con las temperaturas que el usuario introducio, con un espaciado de uno en uno. Se hace una operacion y para convertir de °C a K y se imprime el valor de la temperatura en °C y en K. Con una operacion posterior hacemos que el valor que se imprime en °C sea con el espaciado que el usuario asigno. Se pregunta si se quiere realizar de nuevo una operacion, en caso de si querer hacerlo, vuelve a comenzar el programa, en caso contrario, se termina el programa. 

En el codigo "ejemplo_for.c" se utiliza un for para imprimir en pantalla del 0 al 10 y su respectivo exponencial.

El codigo "ejemplo3_for.c" es para imprimir en pantalla tres valores establecidos previamente.
Se utiliza para ejemplificvar de que manera trabajan dos variables for cicladas y se termina el programa 

El codigo "ejercicio1_for.c" ejecuta un programa que evalualas funciones exponencial, logaritmo, seno, coseno y raiz cuadrada en un intervalo y con un espaciado definido por el usuario. 
Se comienza introduciendo unas variables flotantes que corresponden a el valor que introduce el asuario y una delta que nos servira para calcular las iteraciones que arrojara el programa.
Se declaran otras tres variables que serviran para que el usuario pueda guardar el valor inicial con el que quiere comenzar las operaciones, un valor final y cuantas iteraciones se quieren realizar.	
Se calcula el delta con la siguente formula 
        delta=(x-b)/n;
        delta: el numero de saltos que va a realizar el programa entre valor y valor
        x: valor inicial 
        b: valor final
        n: numero de saltos que el usuario definio
Se utiliza un For para evaluar desde cero hasta el valor final que el usuario definio en un intervalo de uno en uno.
 con la formula:
        x=x+n
 se calculo el intervalo que el usuario definio.
Se calcularon e imprimieron los valores de cada una de las operaciones 
Se termina el programa.

El codigo "ejercicio2_for.c" calcula el factorial de un numero dado por el usuario y pregunta si se quiere volver a realizar una operacion. 
Se declaran unas variables: a) Para el valor con el que se calculara el respectivo factorial. b)Se utiliza para trabajar la funcion For. opcion: Se utiliza para entrar en la funcion while y n) Se utiliza para realizar la operacion que nos ayudara a encontrar el factorial.
Se pregunta si se esta listo para comenzar y la respuesta se aguarda en la variable opcion.
Se establece que si la respuesta anterior es 1 se entre a la funcion while.
se hace una igualdad para que cada que se comience nuevamente el programa, comience desde 1.
Se solicita el valor al que se quiere calcular el factorial y se guarda en la varible "a".
Se utiliza una funcion For que se evalua desde 1, hasta el valor que el usuario definio, con un intervalo de uno en uno.
se utiliza la siguiente operacion:
        n=n*b
        n: Valor que arrojara el factorial
        n: El valor que ya se habia definido anteriormente como 1
        b: todos los valores que va a arrojar la funcion For 
Se imprime el resultado y se pregunta si se quiere realizar nuevamente alguna operacion.

El codigo "ejercicio3_primosfor.c" encuentra e imprime los numeros primos en un intervalo definido por el usuario.
Se solicita que se introduzcan dos numeros entre los cuales se calcularan los numeros primos y se guardan en dos variables establecidas anteriormente.
cada que el valor fuera mayor a 100 numero. se solicitaba introducir un intervalo menor
Se utiliza la funcion For que se evalua desde el valor inicial que se introdujo, hasta el valor final con un intervalo de uno en uno.
Se define la que la funcion "primo" es igual a 1
Se calcula la raiz cuadrada de los numeros que arroja la funcion For.
Se utiliza un segundo ciclo For que se evalua desde 2, hasta las raices cuadradas que salieron como resultado del primer ciclo For y con un intervalo de uno en uno. Si el residuo de la division entre los valores del primer for y los del segundo for (las raices cuadradas del primero) da 1, entonces quiere decir que no es un numero primo.
Si el valor de "primo" es 1, entonces se imprime todos los valores que no dieron un residuo igual a 0.
Se utiliza otra variable que va creciendo de uno en uno, si esa variable que va creciendo llega a veinte, Se imprime un salto de renglon.

El codigo "ejercicio4_binario.c" es un programa que transforma un numero entero dado en un numero binario y viceversa.
Se solicita que se introduzcan se elija entre si se quiere convertir de decimal a binario o de binario a decimal. Se guarda la respuesta para que nos mande directo a cada uno de los codigos correspondientes por medio de la funcion "switch".
Si se entra en el caso 1, se solicita introducir el numero en base decimal que se quiere convertir a binario, se guarda el valor, cada que el valor introducido sea mayor a 0 se entrara en la funcion while, en la cual se dice que cada que el residuo de la division entre el valor establecido por el usuario y 2 sea 1, se va a asignar un 1 en una posicion definida por un contador. En caso de que el residuo no fuera 1, entonces se asigna un 0 con una posicion definida igual que en el caso anterior. Fuera de la funcion If se establece que se hara una division entre 2 y a el resultado se le volvera a dividir con el comando "/=". Se imprime el valor utilizando la funcion For que va desde el el primer valor definido con la variable "count", hasta que sea mayor a 0 disminuyendo de uno en uno. Al imprimirse se establece que se imrpima desde el ultimo valor hasta el primero. Y se termina el caso 1
En dado caso de que el usuario hubiera decidido hacer la conversion de binario a decimal se entra en el caso 2. 
Se solicita introducir el numero binario que se quiere transformar a decimal y se guarda ese numero.
Mientras ese valor sea mayor a 0 se establece que la variable "a" es igual al residuo de el valor binario entre 10. Si esa variable "a" es diferente de 0 se realizara la siguiente ecuacion:
        variable decimal+=pow(2, count)
La cual nos dice que el numero decimal va a ser igual a la sumatoria de 2 elevado a la potencia que corresponde a las posiciones definidas por "count". 
Se establece que el valor vinario se va a dividir entre 10, y ese resultado se volvera a dividir nuevamente. y se establece que el contador va de 1 en 1. Se imrpime el resultado del valor decimal. Se sale del caso numero dos y se termina el programa. 

