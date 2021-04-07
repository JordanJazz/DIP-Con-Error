#include <iostream>
#include "Vaccine.h"
#include "Hospital.h"
#include <vector>

int main() {//h
    //

    cout<<endl;
    cout<<"Bienvenido al Hospital San Juan de Dios\n";

    Vaccine vaccine1;
    Hospital hospital("San Juan de Dios",vaccine1);

    cout<<"===========Proceso de Vacunacion========\n";
    cout<<"Digite la vacuna que de aplicarse\n";
    cout<<" 1-Pzifer\n 2-Johnsons\n 3-Moderna\n";
    int clave;
    cin>>clave;
    switch (clave) {
        case 1:
        cout<<hospital.vaccinateUsingPfizer()<<endl;

            break;
        case 2:
            cout<<hospital.vaccinateUsingJohnson()<<endl;

            break;
        case 3:
            cout<<hospital.vaccinateUsingModerna()<<endl;

            break;
        default:
                cout<<"Seleccione una opc1ion entre 1-3 solamente\n";

    }

    return 0;
}
