# practica5
### Ejercicios 
1. Escriba en C++ un programa `data_types.cc` que imprima en pantalla la cantidad de memoria que utiliza su compilador para
almacenar cada uno de los tipos básicos del lenguaje.
Investigue para ello el operador [sizeof](https://en.wikipedia.org/wiki/Sizeof).
El programa deberá imprimir en pantalla líneas como la siguiente:

```
El tipo de datos int se representa utilizando 4 bytes
```
para cada uno de los tipos de datos del lenguaje.
Haga que las líneas se muestren comenzando con los tipos que utilizan menos cantidad de memoria y finalizando
con los que ocupan mayor cantidad.

2. Escriba un programa `change_case.cc` que solicite al usuario una letra. Si la que introduce el usuario es minúscula, ha de imprimir la correspondiente
mayúscula y viceversa.
El programa deberá asegurarse de que el usuario introduzca una letra y no otro carácter que fuera no adecuado a lo que el programa solicita.

3. Escriba un programa `references.cc` que declare cuatro variables de diferentes tipos y las inicialice
utilizando los diferentes mecanismos de inicialización de variables que suministra el lenguaje.
El programa declarará asimismo otras tantas referencias a las variables anteriores e imprimirá en pantalla los valores de esas
referencias. 
¿Son iguales los valores de las referencias que los de las variables referenciadas?

4. Escriba un programa `boolean_operators.cc` que imprima en pantalla la
[tabla de verdad](https://en.wikipedia.org/wiki/Truth_table#Truth_table_for_all_binary_logical_operators)
de los operadores lógicos (and, or, not) de C++.
El programa deberá utilizar un par de variables booleanas y mostrar el resultado de operar ambas variables con
todos sus posibles valores y con cada uno de los operadores lógicos.

5. Escriba un programa `arithmetic_operators.cc` que declare e inicialice variables de tipos aritméticos e
imprima en pantalla el resultado de operar esas variables con todos los operadores que pueda utilizar con
ellas.
Utilice operadores aritméticos y de comparación.
El programa imprimirá en pantalla líneas como la siguiente:
```
El resultado de operar 7 % 3 es 1
```
Para cada uno de los operadores considerados.

Estudie en [Stackoverflow](https://stackoverflow.com/) las respuestas a la entrada 
[c++ comparing two floating point values](https://stackoverflow.com/questions/5064377/c-comparing-two-floating-point-values).
Stackoverflow es uno de los mejores foros para la resolución de dudas sobre programación.
Le sugerimos la posibilidad de abrir una cuenta en esa página, para su consulta habitual.
Revise asimismo el artículo 
[Comparing Floating Point Numbers](https://randomascii.wordpress.com/2012/02/25/comparing-floating-point-numbers-2012-edition/), 
particularmente la sección "Epsilon comparisons".

Trate de incorporar en su programa `arithmetic_operators.cc` lo que haya aprendido leyendo las referencias
anteriores.

6. Escriba un programa `short_cirtuit.cc` que evidencie que los operadores lógicos and y or (`&&` y `||`) de C++ utilizan
[evaluación de circuito corto](https://stackoverflow.com/questions/5211961/how-does-c-handle-short-circuit-evaluation).
En una disyunción lógica (or) el segundo operando no se evaluará si el primero es cierto (true), puesto que el resultado 
de esa evaluación no cambiaría el resultado de la disyunción, que será cierta. (Análogamente con una conjunción, and).

7. [C++ Tutor](http://pythontutor.com/cpp.html#mode=edit) es una herramienta que a través de una interfaz web
permite "visualizar" la ejecución de programas escritos en C++ (también tiene soporte para otros lenguajes).
Experimente con la herramienta y ejecute con ella (visualice la ejecución) los programas que haya estudiado en clase, así como todos
los programas correspondientes a los ejercicios anteriores.
Al usar la herramienta, preste especial atención a la ejecución del programa `references.cc`.

8. [make](https://en.wikipedia.org/wiki/Make_(software)) es una herramienta que permite automatizar el proceso
de desarrollo de software.
La función de make es determinar automáticamente qué ficheros o módulos de un programa necesitan ser recompilados, 
y ejecutar los comandos necesarios para realizar esa tarea.
Este primer 
[Makefile Tutorial](https://makefiletutorial.com/)
le puede servir como primera toma de contacto con la utilidad make.
Estudie a continuación en las transparencias
[Automation of the Build process: the `make` utility](https://docs.google.com/presentation/d/1W7tgsr5FtCqr5zBIY8UVF3RA4ongBOMgH6kddmf0cGQ/edit?usp=sharing) 
los fundamentos de la utilidad.
Por último, el tutorial 
[A Simple Makefile Tutorial](https://cs.colby.edu/maxwell/courses/tutorials/maketutor/)
incluye ejemplos simples desarrollados de forma incremental que pueden ayudarle a entender el uso de `make`.
En ese tutorial se utiliza el compilador `gcc`, pero puede Ud. sustituirlo por `g++` puesto que el compilador
de C++ compila igualmente el código en C (puesto que C++ es un superconjunto de C).

Finalmente escriba un único fichero Makefile (uno único para todos los programas) que permita compilar y generar los programas ejecutables
correspondientes a todos los ejercicios que se proponen en este documento.
