#include <string>
#include <iostream>
#include "technicien.h"

using namespace std;

Technicien::Technicien(){
 salaire_salaries = 2000;
}
int Technicien::Salaire_technicien_salaries(int salaire_salaries){
int salaire;
salaire = salaire_salaries;
return salaire;
}
Technicien::Technicien(int e_salaire_salaries, std::string e_name, std::string e_firstName, std::string e_age):
{
	salaire_salaries = e_salaire_salaries;
	name = e_name;
	firstName = e_firstName;
	age = e_age;
}


Technicien::Technicien()
