/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.cpp
 * Author: hamid
 * 
 * Created on December 16, 2017, 11:08 AM
 */

#include "Student.h"

Student::Student() {
    cout << "new virtual student registered" << endl;
    setPar(fname , "first name");
    setPar(lname , "last name");
    setPar(studentNo , "1000000");
    setPar(nationalCode , "0123456789");
            
}

//extend Student" constructor with two arguman: first name and last name
Student::Student(string  f, string l)
{
    cout << "new student registered" <<endl;

    setPar(fname,f);
    setPar(lname,l);
    setPar(studentNo , "1000000");
    setPar(nationalCode , "0123456789");
}

// default constructor created with netbean (IDE)
Student::Student(const Student& orig) {
cout << "new student const registered" << endl;
}

//destructor of students class
Student::~Student() {
    cout << "a student object destroyed" << endl ;
}

void Student::setProperties(string f,string l, double avg)
{
    setAverage(avg);
    setPar(fname,f);
    setPar(lname,l);
};

// a set function for char variables(at the first version)
void Student::setPar( string& par1,string  par2)
{

    if (par2 != "")
        par1 = par2;
    else
        cout << "null string given"<<endl;
    
}

// a set function for integer variables(at the first version)-maybe merge later
void Student::setPar(int par1, int par2)
{
    cout << "there";
    if (par2 != 0)
        par1 = par2;
    else
        cout << "zero length given (give larger than 0)" <<endl;
}

//the first name
string const Student::getFname()
{
    if (fname != "")
        return fname;
    else{
        cout << "first name not taken" << endl;
        return 0;
    }
}

//the last name
string const Student::getLname()
{
    if (lname!="")
        return lname;
    else{
        cout << "last name not taken" << endl;
        return 0;
    }    
}

//give nation code of this student
string const Student::getNation()
{
    if (nationalCode!= "0123456789")
        return nationalCode;
    else{
        cout << "bad national code or default one:" << nationalCode << endl;
    }
}

// set the information of units for this student
void Student::setUnits(int total, int passed)
{
    if (total >= passed && passed> 0){
        passedUnits = passed;
        totalUnits = total;
    }
}

// set the average
void Student::setAverage(double avg)
{
    if (avg > 12){
        cout << "can select more than 12" << endl;
    }
    else{
        cout << "can't select more than 12" << endl;
    }
    average = avg;
}

//a function to show passed units of this  student.
int const Student::getPassed()
{
    if (passedUnits != 0){
        return passedUnits;
    }
    else{
        cout << "passed units is not declared" << endl;
    }
}
int const Student::getRemain()
{
    if (totalUnits >= passedUnits && passedUnits > 0){
        remainUnits = totalUnits - passedUnits;
        return remainUnits;
    }
    else{
        cout << "bad units is not declared" << endl;        
    }
}
int const Student::getTotal()
{
        if (totalUnits  > 0){
        return totalUnits;
    }
    else{
        cout << "total units is not declared" << endl;       
    }
}