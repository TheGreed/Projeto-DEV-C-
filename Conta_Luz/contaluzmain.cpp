#include <iostream>
#include <string>

using namespace std;

int main() {
    int cr;
    string nc;
    float lan, lat, consumo, vu, vc;
    int tl;

    // Entradas
    cout << "Digite o código do relógio: \n";
    cin >> cr;
    cout << "Digite o nome do cliente: \n";
    cin >> nc;
    cout << "Digite a leitura anterior: \n";
    cin >> lan;
    cout << "Digite a leitura atual: \n";
    cin >> lat;
    cout << "Digite o tipo de ligação (1 - Residência, 2 - Comércio, 3 - Indústria): \n";
    cin >> tl;

    // Cálculos
   consumo = lat - lan;
    if (tl == 1){
    	vu = consumo*0.6;
    	cout << "Seu consumo foi:" << vu;
    	
}
	if (tl == 2){
		vu = consumo*0.48;
		cout <<"Seu consumo foi:" << vu;
	}
	if (tl == 3){
		vu = consumo*1.29;
		cout <<"Seu consumo foi: " << vu;		
	}
 

    return 0;
}
