#include <iostream>
#include <tchar.h>

using namespace std;

double Op(char Opera, double num1, double num2);

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));

	float num1, num2;
	char Opera;

	cout << "-----CALCULADORA-----";
	cout << "\nDigite um n�mero: ";
	cin >> num1;
	cout << "Digite outro n�mero: ";
	cin >> num2;
	cout << "\n-----OPERA��ES DISPON�VEIS-----" << "\n";
	cout << "\n-Adi��o (+)\n-Subtra��o (-)\n-Multiplica��o (*)\n-Divis�o (/)";
	cout << "\n\nInsira a opera��o que deseja realizar: ";
	cin >> Opera;
	cout << "O resultado da opera��o: " << Op(Opera, num1, num2) << "\n";

	system("PAUSE");
	return 0;
}

double Op(char Opera, double num1, double num2)
{
	switch (Opera)
	{
	case '+': return num1 + num2;
		break;
	case '-': return num1 - num2;
		break;
	case '*': return num1 * num2;
		break;
	case '/': return num1 / num2;
		break;
	default: cout << "\nOPERA��O INV�LIDA, TENTE NOVAMENTE....." << "\n";
		break;
	}
}