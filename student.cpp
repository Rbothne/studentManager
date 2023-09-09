#include "student.h"
#include <iostream>
#include <string>
using namespace std;

int Student::getNumber(){return number;}
void Student::setNumber(int id){number=id;}
string Student::getFirstName(){return firstName;}
void Student::setFirstName(string first){ firstName = first;}
string Student::getLastName(){ return lastName;}
void Student::setLastName(string last){lastName = last;}
float Student::getGPA(){return gpa;}
void Student::setGPA(float gradePointAverage){gpa = gradePointAverage;}



Student::Student(const Student& current){
  number = current.number;
  firstName = current.firstName;
  lastName = current.lastName;
  gpa = current.gpa;
}
Student::Student(){
number = 0000000;
firstName = "null";
lastName = "null";
gpa = 0.0000000;
}
Student::Student(string f, string l, int n, float g)
{
  number = n;
  firstName = f;
  lastName = l;
  gpa = g;
}
void Student::print(){
  cout.width(8); cout<< left << firstName << lastName << "   " <<number << "\n";
}
