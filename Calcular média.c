#include<stdio.h>
#include<locale.h>
int main(){
    double nota1, nota2, media;
    setlocale(LC_ALL, "Portuguese");
    
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);
    
    media = (nota1 + nota2) / 2;
    
    printf("Sua média é %.2lf, você está ", media);
    if(media >= 6){
        printf("Aprovado!", media);
    }else{
        printf("Reprovado!", media);
    }
    
    return 0;
}