//
// Created by Roni on 3/20/2021.
//

#ifndef EJEMPLO_DIP2_HOSPITAL_H
#define EJEMPLO_DIP2_HOSPITAL_H
#include <iostream>
#include "Vaccine.h"
using namespace std;
class Hospital{

public:
    Hospital();
    Hospital(string,Vaccine);
    virtual ~Hospital();
    const string &getName() const;
    void setName(const string &name);
    string vaccinateUsingModerna();
    string vaccinateUsingJohnson();
    string vaccinateUsingPfizer();


private:
string name;
Vaccine vaccine;

};


#endif //EJEMPLO_DIP2_HOSPITAL_H
