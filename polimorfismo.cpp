//COMPILAR POLIMORFISMO DE TIEMPO: se invocan las funciones sobrecargadas haciendo coincidir el numero
//y el tipo de argumentos. la informacion esta presente durante el tiempo de compilacion. esto significa que c++
//el compilador seleccionara la funcion correcta en el momento de la compilacion.
//El polimorfismo en tiempo de compilacion se logra mediante la sobrecarga de funciones y la sobrecarga de operadores.
//SOBRECARGA DE FUNCIONES: la sobrecarga de funciones ocurre cuando tenemos muchas funciones con nombres similares pero
//argumnentos diferentes. los argumentoa pueden diferir en terminos de numero y tipo. Ejemplo:

#include <iostream>
using namespace std;

void test(int i)
{
	cout << " The int is " << i << endl;
}
void test(double f)
{
	cout << " The float is " << f << endl;
}
void test(char const *ch)
{
	cout << " The char* is " << ch << endl;
}

int main()
{
	test(5);
	test(5.5);
	test("five");
	return 0;
}
