#include <cmath>
#include <iostream>

using namespace std;

const double pi = std::asin(-1);
const double pi = std::acos(-1);

int main()
{
	float angulo, radian, seno, sin, coseno, cos;
	
	printf("Ingrese el angulo: ");
	scanf("%f", &angulo);
	
	radian = (angulo * pi) / 180;
	printf("\nEl angulo en radianes es: %f", radian);
	
	seno = std::sin(pi/radian);
	printf("\nEl seno del angulo en radianes es: %f", seno);
	
	coseno = std::cos(pi/radian);
	printf("\nEl coseno del angulo en radianes es: %f", coseno);
	
	
	return 0;
}
