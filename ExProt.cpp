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
	cout << "\nDigite um número: ";
	cin >> num1;
	cout << "Digite outro número: ";
	cin >> num2;
	cout << "\n-----OPERAÇÕES DISPONÍVEIS-----" << "\n";
	cout << "\n-Adição (+)\n-Subtração (-)\n-Multiplicação (*)\n-Divisão (/)";
	cout << "\n\nInsira a operação que deseja realizar: ";
	cin >> Opera;
	cout << "O resultado da operação: " << Op(Opera, num1, num2) << "\n";

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
	default: cout << "\nOPERAÇÃO INVÁLIDA, TENTE NOVAMENTE....." << "\n";
		break;
	}
}