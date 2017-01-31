#ifndef TECHNICIEN
#define TECHNICIEN
#include "employe.h"
#include <iostream>
#include <string>

class Technicien : public Employe{
public:
	Technicien::Technicien(int e_salaire_salaries, std::string e_name, std::string e_firstName, std::string e_age);
private:
};
#endif
