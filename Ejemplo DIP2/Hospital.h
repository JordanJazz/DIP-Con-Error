//
// Created by Roni on 3/20/2021.
//

#ifndef EJEMPLO_DIP2_HOSPITAL_H
#define EJEMPLO_DIP2_HOSPITAL_H
#include <iostream>
#include "IVaccination.h"

class Hospital{

public:
    Hospital();
    Hospital(string);
    virtual ~Hospital();
    const string &getName() const;
    void setName(const string &name);
    string vaccinate(IVaccination*);

private:
string name;


};


#endif //EJEMPLO_DIP2_HOSPITAL_H
