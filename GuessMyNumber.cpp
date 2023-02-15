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

	cout << incognito;
	do {

		cout << "\nEn que numero estoy pensando: \n";
		cin >> respuesta;
		intentos++;

		if (respuesta > incognito)
		{

			cout << "\nTu numero es mas abajo\n";

			if (abs(respuesta - incognito) <= 5)
				cout << "Estas bastante cerca\n";

		}
			
		if (respuesta < incognito)
		{

			cout << "\nTu numero esta mas arriba\n";

			if (abs(respuesta - incognito) <= 5)
				cout << "Estas bastante cerca\n";

		}

		if (respuesta == incognito)
		{

			cout << "\n Ese es mi numero \n";
			cout << "Solamente te costo: " << intentos << " intentos \n";

		}			

	} while (respuesta != incognito);

	return 0;
}