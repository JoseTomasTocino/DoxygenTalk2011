/**
 * @file main.cpp
 * 
 * @author José Tomás Tocino García
 * @date 2011
 *
 * @brief Este es el fichero inicial.
 * Aquí se encuentra la función main
 *
 */

/**
 * @mainpage Página de inicio general
 * 
 * @section inicial Primera sección
 * Bienvenidos al ejemplo de Doxygen para DV.
 * Como veréis, en esta introducción podéis poner <strong>código HTML</strong> 
 * de <em>todo tipo</em>.
 *
 * También es posible incluir código con resaltado de sintaxis:
 * @code
 * // Puedes utilizar la clase Ventana así:
 * Ventana miVentana;
 * miVentana.abrir();
 * @endcode
 *
 * @section segunda Segunda sección
 * @subsection seg2 Esto es una subsección
 * Hay varios niveles de secciones y tal, brutal!
 */

#include "SuperVentana.h"

/** 
 * Función principal
 * 
 * @param argc Número de argumentos 
 * @param argv Vector de argumentos
 * 
 * @return 0 si no ha habido ningún error
 */
int main(int argc, char *argv[])
{
    SuperVentana miSuperVentana;
    miSuperVentana.Abrir();
    return 0;
}


