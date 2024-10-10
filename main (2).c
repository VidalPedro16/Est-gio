#include<stdio.h>
int somar(int n1, int n2){
    return n1 + n2;
}

int main(){
    int idade1, idade2;
    printf("Digite a idade1: ");
    scanf("%d", &idade1);
    
    printf("Digite a idade2: ");
    scanf("%d", &idade2);
    
    printf("A soma das duas idades e %d", somar (idade1, idade2));
}