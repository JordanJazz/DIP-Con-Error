#include <iostream>
#include "PfizerBioNTech.h"
#include "Moderna.h"
#include "Johnson.h"
#include "Hospital.h"
#include <vector>

int main() {//h
    //

    cout<<endl;
    cout<<"Bienvenido al Hospital San Juan de Dios\n";

    Hospital hospital("San Juan de Dios");
    IVaccination* _vacunaModerna= new Moderna();
    IVaccination* _vacunaJohnsons= new Johnson() ;
    IVaccination* _vacunaPfizer= new PfizerBioNTech();

    cout<<"===========Proceso de Vacunacion========\n";
    cout<<"Digite la vacuna que de aplicarse\n";
    cout<<" 1-Pzifer\n 2-Johnsons\n 3-Moderna\n";
    int clave;
    cin>>clave;
    switch (clave) {
        case 1:
        cout<<hospital.vaccinate(_vacunaPfizer)<<endl;

            break;
        case 2:
            cout<<hospital.vaccinate(_vacunaJohnsons)<<endl;

            break;
        case 3:
            cout<<hospital.vaccinate(_vacunaModerna)<<endl;

            break;
        default:
                cout<<"Seleccione una opc1ion entre 1-3 solamente\n";

    }

    delete _vacunaJohnsons;
    delete _vacunaModerna;
    delete _vacunaPfizer;
    return 0;
}
