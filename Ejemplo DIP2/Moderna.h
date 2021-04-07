//
// Created by Roni on 3/20/2021.
//

#ifndef EJEMPLO_DIP2_MODERNA_H
#define EJEMPLO_DIP2_MODERNA_H
#include "iostream"
#include "IVaccination.h"

using namespace std;

class Moderna : public IVaccination
{
public:
    string vaccineProcess() override;
    ~Moderna()=default;
};


#endif //EJEMPLO_DIP2_MODERNA_H
