

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"



//DESARROLLO LA FUNCION PARA AGREGAR UNA PERSONA:
void agregarPersona(ePersona lista[], int numLista, int posicion)
{
    printf("\nIngrese su nombre: ");
    fflush(stdin);
    gets(lista[posicion].nombre);

    printf("\nIngrese su edad: ");
    scanf("%d", &lista[posicion].edad);
    printf("\nIngrese su dni: ");
    scanf("%d", &lista[posicion].dni);
    lista[posicion].estado = 1;




}


//CREO UNA LISTA PARA LISTAR BAJO UN NOMBRE
void ordenarLista(ePersona lista[], int numLista)
{
    int i;
    int j;
    ePersona auxPersona;

    for(i=0; i<numLista-1; i++)
    {
        for(j=i+1; j<numLista; j++)
        {
            if(strcmp(lista[i].nombre, lista[j].nombre)>0)
            {
                auxPersona = lista[i];
                lista[i] = lista[j];
                lista[j] = auxPersona;
            }
        }

    }

    printf("\nNombre\tEdad\tDNI\n");

    for(i=0; i<numLista; i++)
    {
        if(lista[i].estado==1)
        {
            printf("%s\t%d\t%d\n", lista[i].nombre, lista[i].edad, lista[i].dni);
        }
    }


}


int espacioDisponible(ePersona lista[], int num)//LO HAGO PARA CALCULAR EL ESPACIO QUE ESTARA DISPONIBLE
{
    int i;
    int auxBandera=0;
    int resp;

    for(i=0; i<num; i++)
    {
        if(lista[i].estado == 0)
        {
            resp = i;
            auxBandera = 1;
            break;
        }
    }

    if(auxBandera==0)
    {
        resp = -1;
    }

    return resp;
}



int busquedaPorDni(ePersona lista[], int dni, int num)
{
    int  i;
    int indiceDelDNI;

    for(i=0; i<num; i++)
    {
        if(lista[i].dni == dni && lista[i].estado == 1)
        {
            indiceDelDNI = i;
            break;
        }
    }

    return indiceDelDNI;
}

void darBajaPersona(ePersona lista[], int numLista)//el dni lo utilizamos como dato clave para
                                                   //borrar a alguien del programa-
{
    int baja;
    int posiccion;
    int flagBandera=0;
    char opcion;
    printf("\nPor favor ingrese el numero de DNI de la persona a la cual desea eliminar de este sistema: ");
    scanf("%d", &baja);

    posiccion = busquedaPorDni(lista, baja, numLista);

    //Una vez que entra el programa el dato le preguntamos si esta seguro de la accion que se
    //va a realizar.
    printf("Esta seguro de la accion a realizar (En caso de la respuesta ser afirmativa oprima 's' en caso de no querer continuar oprima 'n': ? (s/n)\n%d - %s", lista[posiccion].dni, lista[posiccion].nombre );
    scanf("%s", &opcion);

    if(opcion=='s')
    {
        lista[posiccion].estado = 0;
        printf("\nBorrado con exito :).\n", 130);
        flagBandera = 1;
    }
    else
    {
        printf("\nEsta operacion a sido  cancelada! :)\n");
        flagBandera = 1;

    }

    //en caso de no encontrarlo: le decimos al usuario que no se encontro
    if(flagBandera == 0)
    {
        printf("\nNo se encontro el DNI!\n", 162);
    }
}



void hacerUnGrafico(int menores18, int cont19y35, int mayores35)
{


    int i;
    int j;
    int mayor=0;
    int filas[3] = {menores18, cont19y35, mayores35};

    for(i=0; i<3; i++)
    {
        if(filas[i] > mayor)
        {
            mayor = filas[i];
        }

    }



    for(i=mayor; i>0; i--)
    {
        printf("%d",i);

        for(j=0; j<3; j++)
        {
            if(filas[j] >= i)
            {
                printf("\t*");
            }
            else
            {
                printf("\t ");
            }

        }

        printf("\n");
    }
    printf("\t<18\t19-35\t>35\n");

}



void inicializarEstados(ePersona lista[], int numLista)
{
    int i;

    for(i=0; i<numLista; i++)
    {
        lista[i].estado = 0;
    }
}
