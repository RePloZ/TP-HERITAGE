#ifndef TECHNICIEN
#define TECHNICIEN
#include "employe.h"
#include <iostream>
#include <string>

class Technicien : public Employe{
public:
	Technicien::Technicien(std::string e_name, std::string e_firstName, int e_age);
private:
};
#endif
