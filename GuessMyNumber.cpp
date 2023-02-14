#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	int incognito;
	int	respuesta;
	int intentos = 0;

	srand(time(0));
	incognito = rand() % 100 + 1;

	do {

		cout << "En que numero estoy pensando: ";
		cin >> respuesta;
		intentos++;

		if (respuesta > incognito)
			cout << "Tu numero es alto\n";

		else if (respuesta < incognito)
			cout << "Tu numero es bajo\n";

		else
			cout << "\n Ese es mi numero \n";
			cout << "\n solamente te costo: " << intentos << " intentos \n";

	} while (respuesta != incognito);

	return 0;
}