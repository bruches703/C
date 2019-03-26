
/** \brief Selecciona el numero mayor
 *
 * \param primer parametro que ingresa el usuario
 * \param segundo parametro ingresado
 * \param tercer parametro
 * \return retorna el valor maximo ingresado
 *
 */


int obtenerMaximo(int x, int y, int z){

    int maximo;

    if(x> y && x > z){
        maximo=x;
    }else if(y >= x && y > z){
        maximo = y;
    }else{
        maximo=z;
    }

    return maximo;
}
