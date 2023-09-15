#include <stdio.h>

int e_quadrado_perfeito(int);
int main(){
    int n;
    printf("Digite um número:\n" );
    scanf("%d", & n);
    if(e_quadrado_perfeito(n) == 1){
        printf("\nO %d é quadrado perfeito\n", n);
    }else{
        printf("\nO %d não é quadrado perfeito\n", n);
    }
    return 0;
}

int e_quadrado_perfeito(int n){
    int i = i;
    while(i*i < n){
        i++;
    }
    if(i*i == n){
        return 1;
    }else{
        return 0;
    }
}