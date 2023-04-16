#include <stdio.h>
#include <stdlib.h>

struct imposto{
    float salario;
    float imposto;
    float salarioLiquido;
};

void calculaImposto(struct imposto *imposto){
    if(imposto->salario <= 1903.98){
        imposto->imposto = 0;
    }else if(imposto->salario >= 1903.99 && imposto->salario <= 2826.65){
        imposto->imposto = (imposto->salario - 1903.98) * 0.075;
    }else if(imposto->salario >= 2826.66 && imposto->salario <= 3751.05){
        imposto->imposto = (imposto->salario - 2826.65) * 0.15;
    }else if(imposto->salario >= 3751.06 && imposto->salario <= 4664.68){
        imposto->imposto = (imposto->salario - 3751.05) * 0.225;
    }else if(imposto->salario >= 4664.69){
        imposto->imposto = (imposto->salario - 4664.68) * 0.275;
    }
    imposto->salarioLiquido = imposto->salario - imposto->imposto;
}

int main(){
    struct imposto imposto;
    int opcao;
    char opcao2;
    do{
        puts ("Você deseja calcular o imposto de renda de acordo com o seu salario mensal ou anual?");
        puts ("1 - Mensal");
        puts ("2 - Anual");
        scanf("%d", &opcao);
        switch(opcao){
            case 1:
                printf("Digite o valor do seu salario mensal: ");
                scanf("%f", &imposto.salario);
                calculaImposto(&imposto);
                printf("O valor do seu imposto de renda mensal e: %.2f e o valor do seu salario liquido e: %.2f ", imposto.imposto, imposto.salarioLiquido);
                break;
            case 2:
                printf("Digite o valor do seu salario anual: ");
                scanf("%f", &imposto.salario);
                calculaImposto(&imposto);
                printf("O valor do seu imposto de renda anual e: %.2f e o valor do seu salario liquido e: %.2f ", imposto.imposto, imposto.salarioLiquido);
                break;
            default:
                printf("Opcao invalida!");
                break;
        }
        printf(" Deseja calcular o imposto de renda de mais alguem? (S/N): ");
        scanf(" %c", &opcao2);
    }while(opcao2 == 'S' || opcao2 == 's');
    return 0;
}