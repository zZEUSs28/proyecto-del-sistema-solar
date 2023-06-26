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

        // Procesar la consulta y obtener las coordenadas X e Y del objeto consultado en el tiempo dado
        double coordenadaX, coordenadaY;
        // Realizar los cálculos necesarios para obtener las coordenadas...
        // Supongamos que las coordenadas se obtienen y se almacenan en las variables coordenadaX y coordenadaY

        // Escribir la respuesta en el archivo respuestas.txt
        FILE *archivoRespuestas = fopen("respuestas.txt", "a"); // Abrir el archivo en modo "a" para añadir al final
        if (archivoRespuestas == NULL) {
            printf("Error al abrir el archivo de respuestas.\n");
            return 1; // Salir del programa con código de error
        }

        fprintf(archivoRespuestas, "%s, %.2lf, %.2lf\n", consultas[i].idConsulta, coordenadaX, coordenadaY);

        fclose(archivoRespuestas);
    }

    return 0;
}

