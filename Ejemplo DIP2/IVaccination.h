//
// Created by Roni on 3/20/2021.
//

#ifndef EJEMPLO_DIP2_IVACCINATION_H
#define EJEMPLO_DIP2_IVACCINATION_H
#include <iostream>

using namespace std;
class IVaccination{
public:
    virtual string vaccineProcess() = 0;
    virtual ~IVaccination()=default;
};
#endif //EJEMPLO_DIP2_IVACCINATION_H
