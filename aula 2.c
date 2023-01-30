#include <stdio.h>
#include <math.h>

/*
void incre(int * num){

    (*num)++;

}

int main(){

    int num_tst = 5;
    incre(&num_tst);

    printf("%d", num_tst);
    return 0;

}
*/

/*
void calcula_distancia(float * distancia, float x1, float y1, float x2, float y2){

    *distancia = sqrt((pow((y2 - y1),2)+pow((x2 - x1),2)));

}

int main(void){

    float distancia;
    calcula_distancia(&distancia, 9.0, 3.0, 12.0,15.0);

    printf("A distancia calculada: %f", distancia);

    return 0;
}
*/

/*
int  multiplicacao(int num1, int num2){

    return num1*num2;

}

int calcula(int x, int y, int(*operacao)(int, int))
{

    return(*operacao)(x,y);

}

int main(){

    int resultado = calcula(5,3,multiplicacao);
    printf("Resultado = %d", resultado);

    return 0;

}
*/

float div(float x, float y){

    return x/y;

}
flaot(*ponteiro_div)(float, float);

ponteiro_div = div;