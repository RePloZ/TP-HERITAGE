#include <string>
#include <iostream>
#include "technicien.h"

using namespace std;


Technicien::Technicien(std::string e_name, std::string e_firstName, int e_age) :
{
	name = e_name;
	firstName = e_firstName;
	age = e_age;
}
int Technicien::calculSalaire (){
  return 2000
}
