#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student{
	int number;
	string firstName;
	string lastName;
	float gpa;

	public:
		Student();
		Student(const Student&);
		Student(string, string , int, float );
		int getNumber();
		void setNumber(int);
		string getFirstName();
		void setFirstName(string);
		string getLastName();
		void setLastName(string);
		float getGPA();
		void setGPA(float);
		void print();
	};
#endif
