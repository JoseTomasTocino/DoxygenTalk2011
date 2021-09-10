/**
 * @file Ventana.h
 * 
 * @author José Tomás Tocino García
 * @date 2011
 *
 * @brief Fichero de definición de la clase SuperVentana
 * Implementa la clase base Ventana
 */


#ifndef _VENTANA_H_
#define _VENTANA_H_

#include <iostream>
using std::cout;
using std::endl;

/** 
 * @brief Representa una ventana. 
 *
 * Esto es la descripcion detallada.
 */
class Ventana{
public:
    /**
     * @brief Abre la ventana.
     *
     * Las bisagras deben estar bien engrasadas.
     */
    void Abrir();

    /**
     * @brief Cierra la ventana.
     *
     * Permite indicar la velocidad a la que cerrar la ventana.
     *
     * @param v Velocidad a la que se cierra
     * @return true si la ventana se ha roto 
     * del portazo.
     *
     */
    bool Cerrar(float v);

    /** Color de la ventana */
    int color;

    /// @{
    /// @name Coordenadas de las ventanas
    float x;
    float y;
    /// @}

};

#endif /* _VENTANA_H_ */
