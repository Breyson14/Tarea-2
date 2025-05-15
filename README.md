## Tarea 2.  Comparacion del rendimiento entre algoritmos Bubble Sort y Selection Sort

## Descripcion del ejericicio

Este ejercicio consiste en desarrollar un programa en lenguaje C que permita comparar el rendimiento de los algoritmos de ordenamiento Bubble Sort y 
Selection Sort. Para ello, el programa debe solicitar al usuario el tamaño del arreglo, generar un conjunto de números enteros aleatorios y aplicar 
ambos métodos de ordenamiento sobre el mismo arreglo. Luego, se debe medir el tiempo de ejecución de cada algoritmo utilizando funciones 
de temporización. Finalmente, los resultados se muestran en pantalla para analizar cuál algoritmo es más eficiente en cada caso con distintos tamaños de 
arreglo (10, 100, 1000, 10000).

## Como funciona el codigo?

 Al comenzar, el programa le pide al usuario que ingrese el tamaño del arreglo con scanf, y con ese valor se reserva memoria para tres arreglos usando 
 malloc. Uno de esos arreglos se llena con números aleatorios generados por la función rand(), dentro de generar_arreglo, que usa un ciclo for para asignar valores aleatorios a cada posición. Luego, se crean dos copias de ese arreglo original utilizando copiar_arreglo, para que cada algoritmo 
 trabaje con los mismos datos, asegurando una comparación en igualdad de condiciones. Esto también evita alterar el arreglo original antes de aplicar el segundo método. Después,el código mide el tiempo que toma cada algoritmo utilizando clock() antes y después de las funciones bubble_sort y selection_sort. El tiempo se calcula ensegundos con la constante CLOCKS_PER_SEC. En la función bubble_sort, se usan dos bucles for anidados para comparar elementos vecinos y cambiarlos de lugar si están en el orden incorrecto. En selection_sort, se busca el valor más pequeño en el resto del arreglo y se intercambia con la posición actual. Al final, se muestran los tiempos de ejecución en pantalla con printf, y se libera la memoria de los tres arreglos con free() para evitar fugas de memoria. 

## Compilacion y Ejecucion

Para compilar el programa, primero hay que de tener instalado el compilador GCC. Luego, abrir una terminal y dirigirnos hasta la carpeta donde
guardo el archivo llamado T2_C31049.c. Luego, hay que escribir el comando gcc T2_C31049.c -o T2_C31049, esto compila el codigo y nos indica si hay errores; si todo esta correcto se creará un archivo ejecutable llamado T2_C31049. Uan vez haciedno esto se puede ejecutar el programa escribiendo ./T2_C31049 en la misma terminal. Al correrlo, el programa pedirá ingresar el tamaño del arreglo, generará números aleatorios y aplicará ambos algoritmos de ordenamiento para 
finalmente mostrar el tiempo que tardó cada uno de los algoritmos en ordenar los datos del arreglo generado.

## Ejemplos

## Ejemplo 1. Arreglo con tamano 10

![Image](https://github.com/user-attachments/assets/17ba2bed-b221-4f53-adfb-2c92b971557c)

## Ejemplo 2. Arreglo con tamano 100

![Image](https://github.com/user-attachments/assets/6653350a-45b5-4f54-b3c2-b707c7b8837a)

## Ejemplo 3. Arreglo con tamano 1000

![Image](https://github.com/user-attachments/assets/b35406d9-1dc3-480a-99e6-dfb070aac1ad)

## Ejemplo 4. Arreglo con tamano 10 000

![Image](https://github.com/user-attachments/assets/d424929d-68dd-4220-9f8f-fe5a20f3367d)
