#include <stdio.h>
#include <string.h>

struct Consulta {
    char idConsulta[20];
    char idObjetoConsultado[20];
    double tiempo;
};

int main() {
    struct Consulta consultas[3];

    // Consultas...

    printf("[Consultas]\n");
    for (int i = 0; i < 3; i++) {
        printf("ID de consulta: %s\n", consultas[i].idConsulta);
        printf("ID de objeto consultado: %s\n", consultas[i].idObjetoConsultado);
        printf("Tiempo: %.2lf segundos\n\n", consultas[i].tiempo);
    }

    return 0;
}
