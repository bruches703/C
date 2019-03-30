long fraccional(int num){

    long rta;
        if(num <= 1){
            rta=1;
        }else{
            rta = num * fraccional(num - 1);
        }
    return rta;
}
