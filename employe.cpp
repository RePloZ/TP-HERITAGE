#include <string>
#include <iostream>
#include "employe.h"
using namespace std;

string Employe::getName(){
  return name;
}
void Employe::setName(string value){
  name = value;
}
string Employe::getFirstName(){
  return firstName;
}
void Employe::setFirstName(string value){
  firstName = value;
}
int Employe::getAge(){
  return age;
}
void Employe::setAge(string value){
  age = value;
}
