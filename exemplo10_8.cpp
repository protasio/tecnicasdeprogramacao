#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
using namespace std;

int main (){
	string nome = "João de Deus";
	int p = 10;
	float cra = 10.0;

    ofstream saida("teste.txt", ios::app);
	if( !saida ){cout << "Erro ao abrir o arquivo!"; return 1;}

	saida << nome << endl;
	saida << p << " " << cra << endl;

    saida.close();
	return 0;
}