#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#endif

/**Objetivos del programa:
 *Realizar un programa el cual tenga definida una estructura que represente a una persona
    con los campos: edad , dni y un flag de estado (el cual se usara para saber si el campo
    esta ocupado o no).
    A este programa se podran ingresar 20 datos y contara con un menu de:
                                    1)Agregar una persona
                                    2)borrar a una persona
                                    3)imprimir lista ordenada por nombre
                                    4)imprimir grafico con las edades menores de 18 de entre 19 a 35 y mayores de 35.
En el eje Y se marcarán la cantidad de personas en el grupo, y en el eje X el grupo

 */


typedef struct
{

    char nombre[60];
    int edad;
    int dni;
    int estado;

} ePersona;

/** \brief esta funcion cargara la estructura con los datos de una persona
 *
 * \param lista[] esta sera la estructura con los datos  para agregar personas al programa.
 * \param tamLista  sera el tamaño del array de la estructura.
 * \param sera la posicion que estara libre para guardar los datos en la estructura
 *
 */
void agregarPersona(ePersona lista[], int numLista, int posicion);


/** \brief ordenara a las personas bajo su nombre.
 *
 * \param lista[] sera la estructura de las personas a ordenar.
 * \param tamLista tamaño del array de personas a ordenar .
 *
 */
void ordenarLista(ePersona lista[], int numLista);




/** \brief borrara los datos de una estructura de las  personas ingresadas.
 *
 * \param lista[] sera la estructura que permitiria borrar a las personas.
 * \param tamLista tamaño del array para borrar personas.
 *
 */
void darBajaPersona(ePersona lista[], int numLista);




/**
 * Obtendra el indice del dni que se pasara como parametro
 * \param lista el array se pasa como parametro.
 * \param sera el dni a ser buscado en el array.
 * \param tipo de dato int  tamaño del array persona.
 * \return sera el indice en donde se encuentra el elemento que coincide con el dni.
 */

int busquedaPorDni(ePersona lista[], int dni, int num); //el dni sera un dato necesario
                                                      //el cual sera identificador de cada persona-


/**
 * Obtiene el primer indice libre del array.
 * \param Sera lista del array que se pasa como parametro.
 * \param tam  tamaño de el array de epersona
 * \return sera el primer indice disponible y -1 en caso de no haber mas espacio
 */
int espacioDisponible(ePersona lista[], int num);


/** \brief Esta funcion me mostrara un grafico con barras que se hara en base a las edades que ingresen los usuarios.
 *
 * \param Menores de 18 tipo de dato int al ser las edad numero entero
 *        con un contador de edades para los menores de 18 años
 * \param Personas de entre 19 y 35 años tipo de dato int al ser las edad numero entero
 *        con un contador de edades.
 * \param Mayores a 35 tipo de dato int al ser las edad numero entero de personas
 *        con un contador de edades.
 * \return void
 *
 */
void hacerUnGrafico(int menores18, int cont19y35, int mayores35);


/** \brief Esta funcion me inicializara todos los estados en 0, para verificar la primera vez
 *         que el usuario me ingrese un dato.
 *
 * \param lista[] sera la estructura de personas que se inicializaran.
 * \param tamLista sera el tamaño del array de personas.
 *
 */
void inicializarEstados(ePersona lista[], int numLista);


