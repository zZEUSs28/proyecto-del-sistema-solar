#include <stdio.h>
#include <string.h>

struct Planeta {
    char idObjeto[20];
    double masa;
    double posXPerihelio;
    double posYPerihelio;
    double posXAfelio;
    double posYAfelio;
    double posXInicioSimulacion;
    double posYInicioSimulacion;
};

int main() {
    struct Planeta planetas[8];

    // Inicializar los planetas

    //Mercurio

    strcpy(planetas[0].idObjeto, "Mercurio");
    planetas[0].masa = 3.3011e23;
    planetas[0].posXPerihelio = -0.3075;
    planetas[0].posYPerihelio = 0.0;
    planetas[0].posXAfelio = 0.4667;
    planetas[0].posYAfelio = 0.0;
    planetas[0].posXInicioSimulacion = -0.3075;
    planetas[0].posYInicioSimulacion = 0.0
      
    // Venus

    strcpy(planetas[1].idObjeto, "Venus");
    planetas[1].masa = 4.8675e24;
    planetas[1].posXPerihelio = -0.7184;
    planetas[1].posYPerihelio = 0.0;
    planetas[1].posXAfelio = 0.7282;
    planetas[1].posYAfelio = 0.0;
    planetas[1].posXInicioSimulacion = -0.7184;
    planetas[1].posYInicioSimulacion = 0.0;

    // Tierra
    strcpy(planetas[2].idObjeto, "Tierra");
    planetas[2].masa = 5.97237e24;
    planetas[2].posXPerihelio = -0.9833;
    planetas[2].posYPerihelio = 0.0;
    planetas[2].posXAfelio = 1.0167;
    planetas[2].posYAfelio = 0.0;
    planetas[2].posXInicioSimulacion = -0.9833;
    planetas[2].posYInicioSimulacion = 0.0;

    // Marte
    strcpy(planetas[3].idObjeto, "Marte");
    planetas[3].masa = 6.4171e23;
    planetas[3].posXPerihelio = -1.6660;
    planetas[3].posYPerihelio = 0.0;
    planetas[3].posXAfelio = 1.3816;
    planetas[3].posYAfelio = 0.0;
    planetas[3].posXInicioSimulacion = -1.6660;
    planetas[3].posYInicioSimulacion = 0.0;

    // Júpiter
    strcpy(planetas[4].idObjeto, "Júpiter");
    planetas[4].masa = 1.8982e27;
    planetas[4].posXPerihelio = -5.4554;
    planetas[4].posYPerihelio = 0.0;
    planetas[4].posXAfelio = 5.1854;
    planetas[4].posYAfelio = 0.0;
    planetas[4].posXInicioSimulacion = -5.4554;
    planetas[4].posYInicioSimulacion = 0.0;

    // Saturno
    strcpy(planetas[5].idObjeto, "Saturno");
    planetas[5].masa = 5.6834e26;
    planetas[5].posXPerihelio = -10.1238;
    planetas[5].posYPerihelio = 0.0;
    planetas[5].posXAfelio = 9.0420;
    planetas[5].posYAfelio = 0.0;
    planetas[5].posXInicioSimulacion = -10.1238;
    planetas[5].posYInicioSimulacion = 0.0;

    // Urano
    strcpy(planetas[6].idObjeto, "Urano");
    planetas[6].masa = 8.6810e25;
    planetas[6].posXPerihelio = -18.2871;
    planetas[6].posYPerihelio = 0.0;
    planetas[6].posXAfelio = 20.0788;
    planetas[6].posYAfelio = 0.0;
    planetas[6].posXInicioSimulacion = -18.2871;
    planetas[6].posYInicioSimulacion = 0.0;

    // Neptuno
    strcpy(planetas[7].idObjeto, "Neptuno");
    planetas[7].masa = 1.02413e26;
    planetas[7].posXPerihelio = -29.8118;
    planetas[7].posYPerihelio = 0.0;
    planetas[7].posXAfelio = 30.0587;
    planetas[7].posYAfelio = 0.0;
    planetas[7].posXInicioSimulacion = -29.8118;
    planetas[7].posYInicioSimulacion = 0.0;

    for (int i = 0; i < 8; i++) {
        printf("Planeta: %s\n", planetas[i].idObjeto);
        printf("Masa: %e kg\n", planetas[i].masa);
        printf("Posición inicial: (%lf, %lf)\n\n", planetas[i].posXInicioSimulacion, planetas[i].posYInicioSimulacion);
    }

    return 0;
}


struct Planeta {
    char idObjeto[20];
    double masa;
    double posXPerihelio;
    double posYPerihelio;
    double posXAfelio;
    double posYAfelio;
    double posXInicioSimulacion;
    double posYInicioSimulacion;
};

struct Consulta {
    char idConsulta[20];
    char idObjetoConsultado[20];
    double tiempo;
};

int main() {
    struct Planeta planetas[8];
