#include <iostream>
#include <string>

using namespace std;

int main() {
    int cr;
    string nc;
    float lan, lat, consumo, vu, vc;
    int tl;

    // Entradas
    cout << "Digite o c�digo do rel�gio: \n";
    cin >> cr;
    cout << "Digite o nome do cliente: \n";
    cin >> nc;
    cout << "Digite a leitura anterior: \n";
    cin >> lan;
    cout << "Digite a leitura atual: \n";
    cin >> lat;
    cout << "Digite o tipo de liga��o (1 - Resid�ncia, 2 - Com�rcio, 3 - Ind�stria): \n";
    cin >> tl;

    // C�lculos
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
