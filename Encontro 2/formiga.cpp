#include <iostream>

int main() {
    int hora {0};
    int minuto {0};
    char sentido {0};
    int distancia {0};
    
    std::cin >> hora >> minuto >> sentido >> distancia;

    auto distancia_minutos = [&](){ return distancia * 10; };
    
    if (sentido == 'H') {
        int temp {minuto + distancia_minutos()};
        hora = (hora + (temp / 60)) % 12;
        minuto = temp % 60;
    } else {
        int temp = minuto - distancia_minutos();
        minuto = (((temp) % 60) + 60) % 60;
        hora = ((-hora + ((temp) / 60 / 12) % 12) + 12) % 12;
    }
    std::cout << hora << " " << minuto;
}