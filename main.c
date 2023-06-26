#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

struct Planeta {
    char idObjeto[10];
    double masa;
    double posXPerihelio;
    double posYPerihelio;
    double posXAfelio;
    double posYAfelio;
    double posXInicioSimulacion;
    double posYInicioSimulacion;
};

struct Consulta {
    char idConsulta[10];
    char idObjetoConsultado[10];
    double tiempo;
};

int main() {
    clock_t start_time = clock();

    struct Planeta planetas[8];

    // Definir planetas y sus características
    const char* planetNames[] = {
        "Mercurio", "Venus", "Tierra", "Marte",
        "Jupiter", "Saturno", "Urano", "Neptuno"
    };

    const double planetMasses[] = {
        3.3011e23, 4.8675e24, 5.97219e24, 6.4171e23,
        1.89813e27, 5.6834e26, 8.6810e25, 1.02413e26
    };

    const double planetXPerihelio[] = {
        -4.60012e10, -1.07477e11, -1.471e11, -2.06708e11,
        -7.40597e11, -1.3536e12, -2.7425e12, -4.45294e12
    };

    const double planetYPerihelio[] = {
        46001200, 107476259, 147098074, 206655215,
        741511000, 1353825668, 2742047187, 4452940832
    };

    const double planetXAfelio[] = {
        6.98394e10, 1.08939e11, 1.521e11, 2.49234e11,
        8.16613e11, 1.5074e12, 3.0044e12, 4.54237e12
    };

    const double planetYAfelio[] = {
        69816900, 108939000, 152097000, 249209300,
        816613000, 1507399485, 3004388811, 4542362449
    };

    const double planetXInicioSimulacion[] = {
        -4.60012e10, -1.07477e11, -1.471e11, -2.06708e11,
        -7.40597e11, -1.3536e12, -2.7425e12, -4.45294e12
    };

    const double planetYInicioSimulacion[] = {
        57909175, 108208930, 0.0, -206655215,
        -815708354, -1493741525, 2698685458, 4498252900
    };

    for (int i = 0; i < 8; i++) {
        strcpy(planetas[i].idObjeto, planetNames[i]);
        planetas[i].masa = planetMasses[i];
        planetas[i].posXPerihelio = planetXPerihelio[i];
        planetas[i].posYPerihelio = planetYPerihelio[i];
        planetas[i].posXAfelio = planetXAfelio[i];
        planetas[i].posYAfelio = planetYAfelio[i];
        planetas[i].posXInicioSimulacion = planetXInicioSimulacion[i];
        planetas[i].posYInicioSimulacion = planetYInicioSimulacion[i];
    }

    int numPlanetas = sizeof(planetas) / sizeof(planetas[0]);

    struct Consulta consulta;

    printf("Ingrese el ID del planeta que desea consultar: ");
    scanf("%s", consulta.idObjetoConsultado);

    printf("Ingrese el tiempo para calcular la posición (en días): ");
    scanf("%lf", &consulta.tiempo);

    int indexObjeto = -1;
    for (int j = 0; j < numPlanetas; j++) {
        if (strcasecmp(planetas[j].idObjeto, consulta.idObjetoConsultado) == 0) {
            indexObjeto = j;
            break;
        }
    }

    if (indexObjeto != -1) {
        double t = consulta.tiempo * 24 * 60 * 60; // Convertir días a segundos

        // Calcular posición X
        double distanciaX = planetas[indexObjeto].posXAfelio - planetas[indexObjeto].posXPerihelio;
        double velocidadX = distanciaX / (365.25 * 24 * 60 * 60); // Velocidad promedio en X (m/s)
        double posX = planetas[indexObjeto].posXInicioSimulacion + velocidadX * t;

        // Calcular posición Y
        double distanciaY = planetas[indexObjeto].posYAfelio - planetas[indexObjeto].posYPerihelio;
        double velocidadY = distanciaY / (365.25 * 24 * 60 * 60); // Velocidad promedio en Y (m/s)
        double posY = planetas[indexObjeto].posYInicioSimulacion + velocidadY * t;

        printf("El planeta %s en el tiempo %.2lf días tiene la siguiente posición:\n", planetas[indexObjeto].idObjeto, consulta.tiempo);
        printf("Posición X: %.2lf km\n", posX / 1000);
        printf("Posición Y: %.2lf km\n", posY / 1000);
    } else {
        printf("El ID del planeta ingresado no es válido.\n");
    }

  time_t end_time = time(NULL);
    double tiempo_total = difftime(end_time, start_time);

    printf("Tiempo total de simulación: %.2lf segundos\n", tiempo_total);

    return 0;
}
