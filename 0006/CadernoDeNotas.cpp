/*
	Programador: Euclydes Penteado Junior
	Data: 24/11/2019
	e-mail: jogosdigitaissp@gmail.com
	Objetivo: Instanciar uma classe e chamar uma função pública
*/

#include <iostream>
#include <cstdlib>

class CadernoDeNotas
{
public:
	void exibirMensagem() const
	{
		std::cout << "Seja Bem-Vindo ao caderno de notas:" << std::endl;
	}
};

int main()
{
	CadernoDeNotas meuCadernoDeNotas;
	meuCadernoDeNotas.exibirMensagem();

	system("PAUSE");
	return 0;
}