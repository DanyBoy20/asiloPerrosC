/* PROGRAMA PARA REGISTRAR PERROS EN UN ASILO  */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
main(){ 
struct perro{ // estructura perro con sus variables de diferente tipo
char fecha[10];
char raza[30];
char color[50];
char nombre[30];
int edad;
float peso;
} perros[100]; // creo la matriz perros[] de tipo perro (la estructura que acabo de crear
int c=0, op, clave; // variables: c = claves para perros(se incrementaran hasta llenar matriz, op= seleccion de usuario (a ocupar en switch), clave=para busqueda
do{ // hacer las siguientes sentencias
/* IMPRIMO EN PANTALLA EL MENU DE OPCIONES */
printf( "\n----------------------------------------\n");
printf( "\nRefugio para perros -Ladrido Feliz- \n" );
printf( "\n----------------------------------------\n");
printf( "1) Registrar un perro \n" );
printf( "2) Buscar un perro \n" );
printf( "3) Salir \n" );
printf( "Elige una opci%cn:",162 );
/* FIN DE IMPRESION DE MENU */
scanf("%d",&op); // escaneo y asigno el dato ingresado a variable "op"
switch (op){ // con estructura de control. valido la opcion que el usuario ingreso en variable op
case 1: // en caso de haber seleccionado "1" - registrar un perro
printf( "\n------------------------------\n"); // impresion solo estetico - para visualizarse
if(c>=100) // condicion que verifica que la variable clave no sea mayor o igual a 100 - 100 equivale a espacio insuficiente en refugio
printf("El refugio esta lleno\n"); // mensaje indicando que ya no hay mas espacio
else{ // sino (condicion falsa - c es menor que 100 = aun hay espacio
// con mensajes pido insertar los datos del perro y los voy guardando en la matriz creada (perros) segun las variables de su misma estructura (perro)
printf( "Ingresa los datos del perro:");
printf( "Clave:%.3d\n", c);
printf( "fecha de ingreso[dd/mm/aa]: ");
scanf( "%s", perros[c].fecha);
printf( "nombre: ");
// fflsuh lo ocuparemos para limpiar el buffer , hay que indicarle que limpiara, en este caso stdin (standard input) lo que el usuario ingreso por teclado
fflush(stdin);
gets( perros[c].nombre); // la lectura de la cadena termina hasta que se le de enter, con scanf ademas puede terminar presionando la tecla de espacio
printf( "color: ");
gets( perros[c].color);
printf( "raza: ");
gets( perros[c].raza);
printf( "edad: ");
scanf("%d" ,&perros[c].edad);
printf( "peso: ");
scanf("%f" ,&perros[c].peso);
c++; // al terminar de capturar, incrfemento a clave del perro, para que no se pueda usar mas
}
break; // salir del switch
case 2: // en caso de haber seleccionado 2 - busqueda
printf( "\n-------------------------------\n");
printf( "Clave: "); // mensaje para pedir clave a buscar
scanf("%d",&clave); // guarda dato ingresado en variable
while(clave>=100 || clave <0){ // compruebo que la clave ingresada sea valida
printf("La clave no es válida, ingresa nuevamente la clave:"); // mensaje de error 
scanf("%d",&clave); // pedir clave ne¿ueamente se repite el ciclo
}
// al salor del ciclo , significa que la clave existe, y la imprimo en pantalla
printf("nombre:%s\n",perros[clave].nombre);
printf( "fecha de ingreso: %s\n", perros[clave].fecha);
printf( "color: %s\n", perros[clave].color);
printf( "raza: %s\n", perros[clave].raza);
printf( "edad: %d a%cos\n", perros[clave].edad,164);
printf( "peso: %.2f kilos\n", perros[clave].peso);
break; // salgo del switch
case 3: // caso 3 es salir segun menu, aqui no hago nada mas que salir del switch
break; // salir del switch
default: // valor por defecto, es decir, si no presiono las teclas antes marcadas en el menu
printf( "Opcion no valida\n"); // mensaje de error
}
}while (op!=3); /* hasta que variable op sea diferente de 3 (este cierra o continua ciclo "do" , depende de la condicion */
}
