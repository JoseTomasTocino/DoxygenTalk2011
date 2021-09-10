#ifndef _PELOTA_H_
#define _PELOTA_H_

/**
  * @brief Una pelota de playa.
  * 
  * La tiraron de un avión de Nivea en la playa.
  *
  * @author Godofredo
  * @date El fin de semana pasado
  */
class Pelota
{
public:
    /** 
      * @brief Crea una pelota de playa.
      */	
    Pelota();

    /**
      * @brief Se bota la pelota.
      *
      * Ten cuidado de no darle un pelotazo a alguien.
      */
    void botar();

    int radio;

    float color;
};

#endif /* _PELOTA_H_ */
