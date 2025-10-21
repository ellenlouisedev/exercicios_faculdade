#include <stdio.h>

int main(){
    int voto, votoCandidato = 0, votoNulo = 0, votoBranco = 0, totalVotos;
    float percentNulos, percentBrancos;
    scanf("%d", &voto);
    while (voto != 0){
        if (voto == 1 || voto == 2 || voto == 3 || voto == 4){
            votoCandidato = votoCandidato + 1;
        }
        else if (voto == 5){
            votoNulo = votoNulo + 1;
        }
        else if (voto == 6){
            votoBranco = votoBranco + 1;
        }
        else {
            printf("Digite um código válido.\n");
        }
        scanf("%d", &voto);
    }
    totalVotos = votoCandidato + votoNulo + votoBranco;
    percentNulos = (votoNulo * 100) / totalVotos;
    percentBrancos = (votoBranco * 100) / totalVotos;
    printf("Total de votos: %d Votos nulos: %d Votos brancos: %d Porcentagem de nulos: %.2f Porcentagem de brancos: %.2f", totalVotos, votoNulo, votoBranco, percentNulos, percentBrancos);
    return 0;
}