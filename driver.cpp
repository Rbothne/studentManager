//Robert Bothne
//student_mgmt
//Student Display and Top GPA displayer

#include <iostream>
#include <string>
#include <string.h>
#include <fstream>
#include "student.h"
#define MAX_NUM 125
using namespace std;

int getStudents(int , Student[], string);
Student findMaxStudent(int,Student[]);
void printStudentTable(int,Student[]);
int main (int argc, char* argv[])
{
	if (argc!=2){
	cout << "Correct usage:"<< "./text_analyzer filename\n";
	return(0);
}

	Student students[MAX_NUM];
	string iFile = argv[1];
	int size;
	int totalStudents = getStudents(size,students,iFile);
	if (totalStudents == -1){//close program
			return(0);
		}
	printStudentTable(totalStudents, students);
	Student best = findMaxStudent(totalStudents, students);
	cout << "The student with the highest gpa is: "<< best.getFirstName() << " "<< best.getLastName() <<"\n";
	return(0);
}

int getStudents(int size, Student students[],string fileName){
	ifstream fin(fileName);
if (fin.fail()){
			cout << "Sorry, could not open "<< fileName << " for reading\n";
			return(-1);
	}else{
		string firstName;
		string lastName;
		int number;
		float gpa;
		while (fin >> number >> lastName >> firstName >> gpa){
			Student current(firstName, lastName, number, gpa);
			students[size]=current;
			size++;
		}
		fin.close();
		return (size);
	}
}
void printStudentTable(int size,Student students[]){
	cout.width(8); cout<<"First   " << "Last    " << "Number" << "\n";
	cout.width(8); cout<< left << "======================" << "\n";

	for (int i = 0; i<size; i++){
		students[i].print();
	}
}

Student findMaxStudent(int size, Student students[]){
	int top=0;
	for(int i = 0; i<size; i++){
		if (students[top].getGPA()<students[i].getGPA()){
			top=i;
		}
	}
	return students[top];
}
