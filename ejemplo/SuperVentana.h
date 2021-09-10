/**
 * @file SuperVentana.h
 * 
 * @author José Tomás Tocino García
 * @date 2011
 *
 * @brief Fichero de definición de la SuperVentana.
 * Se implementa la clase SuperVentana con dos cristales transparentes.
 */


#ifndef _SUPERVENTANA_H_
#define _SUPERVENTANA_H_

/**
 * @brief Ventana avanzada.
 *
 * Se puede mirar a través de ella.
 *
 * @author José Tomás Tocino García <theom3ga@gmail.com> 
 *
 */

#include "Ventana.h"
#include "Cristal.h"

class SuperVentana : public Ventana{
public:
    /// Saca el pescuezo por la ventana y mira.
    void MirarPorVentana();

    /// @{
    /// @name Cristales
    Cristal cristalIzquierdo;
    Cristal cristalDerecho;
    /// @}
};

/**
 * @brief Ventana de poca calidad.
 *
 * Ni siquiera puedes abrir o cerrarla, no vale pa ná.
 *
 * @author José Tomás Tocino García <theom3ga@gmail.com> 
 *
 */


class SubVentana : private Ventana { };

#endif /* _SUPERVENTANA_H_ */

