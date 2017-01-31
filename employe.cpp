#include <string>
#include <iostream>
#include "employe.h"
using namespace std;


Employe::getName(){
  return Name;
}
Employe::setName(string value){
  Name = value;
}
Employe::getfirstName(){
  return firstName;
}
Employe::setfirstName(string value){
  firstName = value;
}
Employe::getAge(){
  return age;
}
Employe::setAge(string value){
  age = value;
}
