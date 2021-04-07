//
// Created by Roni on 3/20/2021.
//

#include "Hospital.h"
Hospital::Hospital() {
    name = "";
}
Hospital::Hospital(string name) {
    this->name = name;
}

string Hospital::vaccinate(IVaccination* iVaccination) {
    return iVaccination->vaccineProcess();
}

const string &Hospital::getName() const {
    return name;
}

void Hospital::setName(const string &name) {
    Hospital::name = name;
}

Hospital::~Hospital() {

}
