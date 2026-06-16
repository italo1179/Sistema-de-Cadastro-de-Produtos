#include <stdio.h>
#include <string.h>

int main()
{
    char cond1;
    char nome_prod[50][50];
    float valor_prod[50];
    int qntd_prod[50];
    int p = 0;
    int i;
    float valor = 0;
    int x = 0;
    float maior_valor = 0;
    float total_soma = 0;
    float maior_valor_prod = 0;
    int estoque = 0;    

    printf("Você quer cadastrar um produto?(s/n)");
    scanf(" %c", &cond1);
    while (cond1 == 'S' || cond1 == 's')
    {
            printf("Nome do produto:");
            scanf("%s",nome_prod[p]);
            printf("Preço do produto:");
            scanf("%f", &valor_prod[p]);
            printf("Quantidade em estoque:");
            scanf("%d", &qntd_prod[p]);
            p++;
            printf("Quer cadastrar mais algum produto?(s/n)");
            scanf(" %c", &cond1);
            
    }
    printf("========================================\n");
    printf("Os produtos cadastrados:\n");

    for (i = 0; i < p; i++){
        printf("========================================\n");

        printf("Nome do produto: %s\n", nome_prod[i]);
        printf("Preço do produto: %.2f\n", valor_prod[i]);
        printf("Quantidade do produto: %d\n", qntd_prod[i]);
        valor = valor_prod[i] * qntd_prod[i];
        if (maior_valor_prod < valor){
            maior_valor_prod = valor;
        }
        total_soma += valor;
        if (maior_valor < valor){
            maior_valor = valor;
        }
        if (maior_valor_prod < valor_prod[i]){
            maior_valor_prod = valor;
        }
        printf("Valor de estoque do produto(Preço x Estoque): %.2f\n", valor);
        estoque += qntd_prod[i];

    }
    
    printf("maior valor de estoque: %.2f\n", maior_valor);
    printf("Valor total:%d produtos no estoque\n", estoque);
    printf("Produto com maior valor:%.2f\n", maior_valor_prod);
    printf("Valor total:%.2f produtos no estoque", total_soma);
    return 0;
}
