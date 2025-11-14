/*malloc se usa con una variable=(int*)malloc(n*sizeof(tipo de dato que queremos asignar))
(int*) esto significa que queremos pasar el tipo de dato de entero a puntero porque asi tenemoas la variable definida.
funciones para memoria dinamica = calloc,malloc,free,(otro).

*//*
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numeros;
    int n;
    printf("Cuantos elementos deseas guardar? ");
    scanf("%d",&n);

    numeros = (int*)malloc(n* sizeof(int));
    if(numeros == NULL)
    {
        printf("Error: no se pudo asignar la memoria. \n");
        return 1;
    }
    for(int i=0; i<n; i++){
        printf("Elemento %d: ",i+1);
        scanf("%d", &numeros[i]);
    }
    printf("Numeros sin casteo: %d \n", numeros);
     for(int i=0; i<n; i++){
        printf("\nElemento %d: %d",i+1,numeros[i]);
    }
    free(numeros);
    return 0;
}
    */ /*
    #include <string.h>
    #include <stdlib.h>
    #include <stdio.h>
    struct Alumno {
        char nombre[30];
        float promedio;
    };
    int main()
    {
        struct Alumno *grupo;
        int n,i;
        printf("Cuantos alumnos deseas registrar? ");
        scanf("%d",&n);
    getchar(); // limpia buffer?

    grupo = malloc(n * sizeof(struct Alumno));
    if(grupo == NULL){
        printf("Error al asignar memoria.\n");
        return 1;
    }
    for(i=0; i<n; i++)
    {
        printf("\nNombre del alumno %d: ",i+1);
        fgets(grupo[i].nombre,30, stdin); //me faltó algo aqui :c
        printf("\nPromedio del alumno %d: ",i+1);
        scanf("%f",&grupo[i].promedio);
    }
        for(i=0;i<n; i++)
        {
         printf("Alumno %d: ",i+1);
         printf("Nombre %s",grupo[i].nombre);
         printf("Promedio: %d ",grupo[i].promedio);
        }
        free(grupo);
    }
    */
/*
#include <stdio.h> //esto muestra en pantalla el "sube y baja" de las llamadas

 int cuenta(int n);

int main(){
    int n=5;
    cuenta(n);
}
   int cuenta(int n)
    {
        if(n==0) return 0;
        printf("Entrando con %d\n",n);
        int r = cuenta(n-1);
        printf("saliendo con %d\n",n);
        return r;
    }

    al pasar vectores bidimensionales por referencia a una funcion/procedimiento el segundo valor SIEMPRE debe ir definido
    int funcion(int pasar[][3],int filas); el primer valor no se ocupa.

    a→promedio asi se cambia el valor de una struct dentro de una funcion, similar a un apuntador *, --Operador flecha--
    y para mandarla a una funcion se escribe funcion(&nombre de la variable struct).

    ____________________EMPIEZAN ARCHIVOSS________________________
    fopen(), fprintf(), fscanf(), fgets(), fclose(). 5 comandos para interactuar con archivos

    FILE *f=fopen("datos.txt","w");  datos.txt es el nombre del archivo.
    Tipos de apertura
     w = modo de apertura
     a = añadir al final
     r = lectura
     w+ = lectura escritura
     r+ = lectura escritura sin borrar.

    fprintf(f,"Nombre: %s\\n",nombre)
    funciona igual que printf() pero escribe en archivo.


    #include <stdio.h>

    int main(){
        FILE *f = fopen("salida.txt", "w");

        if("f == NULL"){
            printf("Error al abrir el archivo.\n");
            return 1;
        }

        fprintf(f, "Hola mundo.\n");
        fprintf(f, "Este archivo fue creado desde C.\n");

        fclose(f);
        return 0;
    }


    #include <stdio.h>

int main() {
    FILE *f;
    int n = 5;
    int datos[] = {10, 20, 30, 40, 50};

    f = fopen("numeros.txt", "w");
    for(int i = 0; i < n; i++)
        fprintf(f, "%d\n", datos[i]);
    fclose(f);

    f = fopen("numeros.txt", "r");
    int x;
    while(fscanf(f, "%d", &x) != EOF)
        printf("Leido: %d\n", x);
    fclose(f);

    return 0;
} */
