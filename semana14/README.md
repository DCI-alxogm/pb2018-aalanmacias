Alan Macías Padilla
Semana 14

En la actividad de esta semana se desarrolla un codigo para resolver la ecuacion de un oscilador armonico por el metodo de Euler, el cual utiliza las siguientes ecuaciones para calcular la velocidad y el angulo.
		v(t1+1)=v(ti)+h*(-w²θ(t1))
		θ(t1+1)=θ(ti)+h*v(t1)
En donde:
-v(t1+1) es el nuevo intervalo que se quiere calcular
-v(t1) es el ultimo valor que se calculo
-h es el espaciado de tiempo que se va a tomar, este se considera como una fraccion pequeña del tiempo total
-w es la velocidad angular, se define como la raiz cuadrada de la gravedad sobre la longitud.
-θ(t1+1) es el nuevo valor que se quiere calcular para el angulo
-θ(t1) es el ultimo valor calculado para el angulo

En el codigo se inicializa un arreglo de valores de determinado tamaño para la velocidad, dandole tambien un valor especifico al primer numero del arreglo para poder iniciar los calculos.
Se define otro arreglo del mismo tamaño que el anterior, esta vez para el angulo.
Definimos los valores de w y h.
Realizamos las operaciones con un ciclo.
Y posteriormente se hacen tres graficas: la primera del angulo respecto a la velocidad, la segunda de la velocidad respecto al tiempo, y la tercera del angulo respecto al tiempo. 
