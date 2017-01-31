#ifndef TECHNICIEN
#define TECHNICIEN
#include "employe.h"
#include <iostream>
#include <string>

class Technicien : public Employe{
public:
	Technicien();
	int Salaire_technicien_salaries(int salaire);
private:
	int salaire_salaries;
};
Technicien::Technicien(int e_salaire_salaries, std::string e_name, std::string e_firstName, std::string e_age);
#endif
