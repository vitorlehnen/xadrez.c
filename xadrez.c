#include<stdio.h>

int main(){

    int controladorTorre = 0, controladorBispo = 0;

    //Movimento da torre
    while (controladorTorre < 5)
    {
        printf("Direita\n");
        controladorTorre++;
    }
    
    //Movimento do bispo
    do
    {
        printf("Cima, Direita\n");
        controladorBispo++;
    } while (controladorBispo < 5);

    //Movimento da rainha
    for (int count = 0; count < 8; count++)
    {
        printf("Esquerda\n");
    }

    return 0;
}
