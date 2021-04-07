//
// Created by Roni on 3/20/2021.
//

#include "Hospital.h"
Hospital::Hospital() {
    name = "";
}
Hospital::Hospital(string name,Vaccine vaccine1) {
    this->name = name;
    this->vaccine = vaccine1;
}

const string &Hospital::getName() const {
    return name;
}

void Hospital::setName(const string &name) {
    Hospital::name = name;
}

Hospital::~Hospital() {

}
string Hospital::vaccinateUsingModerna(){
    return this->vaccine.applyModernaVaccine();
}
string Hospital::vaccinateUsingJohnson(){
    return this->vaccine.applyJohnsosnsVaccine();
}
string Hospital::vaccinateUsingPfizer(){
    return this->vaccine.applyPfizerVaccine();
}

