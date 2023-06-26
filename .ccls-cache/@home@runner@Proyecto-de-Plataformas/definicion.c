#include <stdio.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

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