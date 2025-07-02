#include <stdio.h>
#include <math.h>

class Angulo {
private:
    double grados;

public:
    void setGrados(double g) {
        grados = g;
    }

    double convertirRadianes() {
        return grados * M_PI / 180.0;
    }

    double calcularSeno() {
        return sin(convertirRadianes());
    }

    double calcularCoseno() {
        return cos(convertirRadianes());
    }

    void imprimir() {
        printf("�ngulo en grados: %.2f\n", grados);
        printf("�ngulo en radianes: %.2f\n", convertirRadianes());
        printf("Seno del �ngulo: %.4f\n", calcularSeno());
        printf("Coseno del �ngulo: %.4f\n", calcularCoseno());
    }
};

int main() {
    Angulo angulo;
    double grados;

    printf("Ingrese el �ngulo en grados: ");
    scanf("%lf", &grados);

    angulo.setGrados(grados);
    angulo.imprimir();

    return 0;
}
