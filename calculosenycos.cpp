#include <stdio.h>
#include <math.h>

class Figura {
protected:
    char nombre[50];

public:
    void setNombre(char* n) {
        sprintf(nombre, "%s", n);
    }

    char* getNombre() {
        return nombre;
    }
};

class Cubo : public Figura {
private:
    double lado;

public:
    void setLado(double l) {
        lado = l;
    }

    double calcularVolumen() {
        return pow(lado, 3);
    }

    void imprimir() {
        printf("El volumen del %s es: %.2f\n", getNombre(), calcularVolumen());
    }
};

class Cilindro : public Figura {
private:
    double radio;
    double altura;

public:
    void setRadio(double r) {
        radio = r;
    }

    void setAltura(double h) {
        altura = h;
    }

    double calcularVolumen() {
        return M_PI * pow(radio, 2) * altura;
    }

    void imprimir() {
        printf("El volumen del %s es: %.2f\n", getNombre(), calcularVolumen());
    }
};

class Cono : public Figura {
private:
    double radio;
    double altura;

public:
    void setRadio(double r) {
        radio = r;
    }

    void setAltura(double h) {
        altura = h;
    }

    double calcularVolumen() {
        return (1.0/3.0) * M_PI * pow(radio, 2) * altura;
    }

    void imprimir() {
        printf("El volumen del %s es: %.2f\n", getNombre(), calcularVolumen());
    }
};

class Esfera : public Figura {
private:
    double radio;

public:
    void setRadio(double r) {
        radio = r;
    }

    double calcularVolumen() {
        return (4.0/3.0) * M_PI * pow(radio, 3);
    }

    void imprimir() {
        printf("El volumen del %s es: %.2f\n", getNombre(), calcularVolumen());
    }
};

class Controlador {
public:
    void ejecutar() {
        printf("Seleccione una opción:\n");
        printf("1. Cubo\n");
        printf("2. Cilindro\n");
        printf("3. Cono\n");
        printf("4. Esfera\n");

        int opcion;
        scanf("%d", &opcion);

        char nombre[50];
        printf("Ingrese el nombre de la figura: ");
        scanf("%s", nombre);

        switch (opcion) {
            // ...
        }
    }
};

int main() {
    Controlador controlador;
    controlador.ejecutar();
    return 0;
}

