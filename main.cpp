#include <iostream>
#include "inventory.h"
#include "History.h"
#include "inventory.cpp"
#include "History.cpp"

int main() {
    inventory inventory;
    History history;

    int choice;

    do {
        std::cout << "Inventario Binchilin 2024" << std::endl;
        std::cout << "1. Agregar producto" << std::endl;
        std::cout << "2. Encontrar producto" << std::endl;
        std::cout << "3. Quitar producto" << std::endl;
        std::cout << "4. Ver historial" << std::endl;
        std::cout << "5. Salir" << std::endl;
        std::cout << "Elige una opción: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name1;
                int quantity;
                std::cout << "Ingrese el nombre del producto: ";
                std::cin >> name1;
                std::cout << "Ingrese la cantidad: ";
                std::cin >> quantity;
                inventory.addProduct(name1, quantity);
                history.addRecord("Agregar "+name1+" al inventario");
                break;
            }
            case 2: {
                std::string name2;
                std::cout << "Ingrese el nombre del producto a buscar: ";
                std::cin >> name2;

                int i = inventory.getProduct(name2);

                std::cout << "Cantidad producto: " << i << std::endl;

                history.addRecord("Busqueda de "+name2);

                break;
            }
            case 3: {
                std::string name3;
                std::cout << "Ingrese el nombre del producto a quitar: ";
                std::cin >> name3;
                std::cout << "Producto quitado: " << name3 << std::endl;
                inventory.removeProduct(name3);
                history.addRecord("Quitar "+name3+" del inventario");
                break;
            }
            case 4: {
                history.showHistory();
                break;
            }
            case 5: {
                break;
            }
            default:{
                std::cout<<"Opcion no valida";
                break;
            }
        }
    } while (choice != 5);

    return 0;
}