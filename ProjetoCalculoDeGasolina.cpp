#include <iostream>  // Biblioteca usada para mostrar e ler informações na tela
using namespace std; // Permite usar comandos como "cout" e "cin" sem precisar escrever "std::"

int main() {
    // Declaração das variáveis (onde guardamos informações)
    float distancia, consumo, preco, dinheiro;
    int tipoCombustivel;

    // Escolha do tipo de combustível
    cout << "Escolha o tipo de combustivel:\n";
    cout << "1 - Gasolina\n";
    cout << "2 - Etanol\n";
    cout << "3 - Diesel\n";
    cout << "Digite o numero correspondente: ";
    cin >> tipoCombustivel;

    // Validação da escolha
    while (tipoCombustivel < 1 || tipoCombustivel > 3) {
        cout << "Opcao invalida! Escolha 1 (Gasolina), 2 (Etanol) ou 3 (Diesel): ";
        cin >> tipoCombustivel;
    }

    // Explicação para o usuário e leitura dos dados
    do {
        cout << "Digite a distancia da viagem (em km): ";
        cin >> distancia;
        if (distancia <= 0) cout << "Valor invalido! Digite um numero maior que zero.\n";
    } while (distancia <= 0);

    do {
        cout << "Digite quantos km o carro faz por litro: ";
        cin >> consumo;
        if (consumo <= 0) cout << "Valor invalido! Digite um numero maior que zero.\n";
    } while (consumo <= 0);

    do {
        cout << "Digite o preco do combustivel (em reais): ";
        cin >> preco;
        if (preco <= 0) cout << "Valor invalido! Digite um numero maior que zero.\n";
    } while (preco <= 0);

    do {
        cout << "Digite quanto dinheiro voce tem: ";
        cin >> dinheiro;
        if (dinheiro <= 0) cout << "Valor invalido! Digite um numero maior que zero.\n";
    } while (dinheiro <= 0);

    // Cálculo de quantos litros serão necessários
    float litros = distancia / consumo; // divide a distância pelo consumo
    // Exemplo: 200 km / 10 km/l = 20 litros

    // Cálculo do custo total da viagem
    float custo = litros * preco; // multiplica os litros pelo preço do combustível

    // Mostra o tipo de combustível escolhido
    cout << "\nTipo de combustivel escolhido: ";
    if (tipoCombustivel == 1) cout << "Gasolina";
    else if (tipoCombustivel == 2) cout << "Etanol";
    else cout << "Diesel";
    cout << endl;

    // Mostra os resultados na tela
    cout << "Você vai precisar de " << litros << " litros de combustivel." << endl;
    cout << "O custo total da viagem sera de R$ " << custo << endl;

    // Verifica se o dinheiro é suficiente
    if (dinheiro >= custo) {
        cout << "Parabens! Voce CONSEGUE fazer a viagem com o dinheiro que tem." << endl;
    } else {
        cout << "Infelizmente voce NAO CONSEGUE fazer a viagem com o dinheiro que tem." << endl;
    }

    return 0; // Finaliza o programa
}
