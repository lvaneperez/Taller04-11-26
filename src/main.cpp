#include <iostream>
#include <vector>
#include"Carro.h"
#include"Moto.h"
#include"Bus.h"
#include"Camion.h"
#include"Propietario.h"
#include"Operador.h"
#include"Caseta.h"
#include"Excepciones.h"

using namespace std;

int main () {
    cout << "EL PROGRAMA INICIO CORRECTAMENTE" << endl;

    vector<Vehiculo*> vehiculos;

    vector<Persona*> personas;

    Operador* operador = new Operador("Andres", "1001" , "OPO1");
    Propietario* propietarioVecino = new Propietario("Felipe", "1002", true);
    personas.push_back(operador);
    personas.push_back(propietarioVecino);

    Carro* carro = new Carro("ABC123" , 3);
    vehiculos.push_back(carro);

    Moto* moto = new Moto("XYZ45A", 125);
    vehiculos.push_back(moto);

    Moto* motoGrande = new Moto("MOT650",650);
    vehiculos.push_back(motoGrande);

    Bus* bus = new Bus("BUS777",38);
    vehiculos.push_back(bus);

    Camion* camion = new Camion("CAM301", 3);
    vehiculos.push_back(camion);

    //Caso 1: carro din descuento de vecino
    cout << "\nCASO 1" << endl;
    cout << *carro << endl;
    cout << "Valor a pagar: $" << carro->cobrar() <<endl;

    //Caso 2: Carro con descuento de vecino
    cout << "\nCASO 2" << endl;

    carro->setPropietario(propietarioVecino);

    cout << *carro << endl;
    cout << "Propieatrio vecino: Si" << endl;
    cout << "Valor a pagar: $" << carro->cobrar() << endl;

    //Caso 3: Moto de 125 cc con propitario vecino 
    cout << "\nCASO 3" << endl;

    moto->setPropietario(propietarioVecino);

    cout << *moto << endl;
    cout << "Valor a pagar: $" << moto->cobrar() << endl;

    //CASO 4: Moto de 650 cc sin propietario
    cout <<"\nCASO 4" << endl;

    cout << *motoGrande << endl;
    
    if(motoGrande->esAltoCilindraje()) {
        cout << "Es de alto cilindraje: Si" << endl;
    }
    else {
        cout << "Es de alto cilindraje: No" << endl;
    }
    cout << "Valor a pagar: $" << motoGrande->cobrar() << endl;

    //Caso 5: Bus con propietario vecino
    cout << "\nCASO 5" << endl;

    bus->setPropietario(propietarioVecino);

    cout << *bus << endl;
    cout << "Propietario vecino: Si" << endl;
    cout  << "valor a pagar $" << bus->cobrar() << endl;

    //Caso 6. Camion con 3 ejes
    cout << "\nCASO 6"<<endl;

    cout << *camion << endl;
    cout << "Valor a pagar: $" << camion->cobrar() << endl;

    //Caso 7 : Agregar un eje al mismo camion 
    cout <<"\nCASO 7" << endl;

    camion->agregarEje();

    cout << *camion << endl;
    cout << "Valor a pagar: $" << camion->cobrar() << endl;
    
    //CASO 8: Intentar crear un carro con placa vacia
    cout << "\nCASO 8" << endl;

    try{
        Carro* carroInvalido = new Carro("", 3);
        vehiculos.push_back(carroInvalido);
    }
    catch (const PlacaInvalidaException& e) {
        cout << "Error: " << e.what() << endl;
    }
    // Caso 9. Intentar crear un camion con un solo eje
    cout << "\nCASO 9 " <<endl;

    try {
        Camion* camionInvalido = new Camion("MPA786" , 1);
        vehiculos.push_back(camionInvalido);
    }
    catch (const DatosInvalidosException& e) {
        cout << "Error: " << e.what() << endl;
    }

    //Caso 10: Registrar el paso de vehiculos en la caseta
    cout << "\nCASO 10" << endl;

    Caseta* caseta = new Caseta(operador);

    //Registrar los vehiculos de los casos 2, 3, 5 y 7
    caseta->registrarPaso(carro);
    caseta->registrarPaso(moto);
    caseta->registrarPaso(bus);
    caseta->registrarPaso(camion);

    //Muestra los resultados de la caseta

    cout << "Total recaudado: $" << caseta->getTotalRecaudado() << endl;
    cout << "Cantidad de pasos: " << caseta->getCantidadPasos() << endl;
    cout << "Cantidad de carros: " << caseta->getCantidadCarros() << endl;
    cout << "Cantidad de motos: " << caseta->getCantidadMotos() << endl;
    cout << "Cantidad de buses: " << caseta->getCantidadBuses() << endl;
    cout << "Cantidad de camiones: " << caseta->getCantidadCamiones() << endl;
    
    //Caso 13: Destruccion de objetos
    cout << "\nCASO 13" << endl;

    delete caseta;

    for (int i = 0; i < vehiculos.size(); i ++){
        delete vehiculos[i];
    }
    vehiculos.clear();

    for  (int i = 0; i < personas.size(); i++) {
        delete personas[i];
    }
           
        
 return 0;

   
}
