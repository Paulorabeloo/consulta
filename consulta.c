#include <stdio.h>

int main()
{
    char alunos[3][50];
    float medias[3];
    int i=0;

    //entradas
    for(i=0; i<3; i++)
    {
        printf("Digite o nome do aluno: \n");
        scanf("%s", &alunos[i]);

        printf("Digite a média do aluno: \n");
        scanf("%f", &medias[i]);
    }

    //consulta
    printf("Alunos com média abaixo de 6:\n");
    for(i=0; i<3; i++)
    {
         if (medias[i] < 6)
         {
            printf("%s - Média: %.2f\n", alunos[i], medias[i]);
         }
    }
    return 0;
}
