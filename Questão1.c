#include <stdio.h>
#include <stdlib.h>

typedef struct funcionario{

char nome[50];
float salario;
char cargo[50];

}Funcionario;

int main(void){

    int num_funcionarios,i;

    printf("Quantos funcionários deseja cadastrar: ");
    scanf("%d", &num_funcionarios);

    Funcionario * funcionario = (Funcionario*) malloc(num_funcionarios * sizeof(Funcionario));

    for (i = 0; i < num_funcionarios; i++)
    {
        printf("\n");
        printf("Digite o nome do usuario %d: ", i+1);
        scanf(" %[^\n]",&funcionario[i].nome);

        printf("Digite o salario do usuario %d: ", i+1);
        scanf("%f",&funcionario[i].salario);

        printf("Digite o cargo do usuario %d: ", i+1);
        scanf(" %[^\n]",&funcionario[i].cargo);

        printf("\n");
        printf("========================================================");
        printf("\n");
        
    }

    for (int j = 0; j < num_funcionarios; j++)
    {
        printf("\n");
        printf("Funcionario [%d] \n", j+1);
        printf("nome: %s \n", funcionario[j].nome);
        printf("salario: %f \n", funcionario[j].salario);
        printf("cargo: %s \n", funcionario[j].cargo);
        printf("\n");
        printf("========================================================");
    }
    

    free(funcionario);
    return 0;
}