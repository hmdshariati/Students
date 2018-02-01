/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Student.h
 * Author: hamid
 *
 * Created on December 16, 2017, 11:08 AM
 */
#include <string>
#include <iostream>

using namespace std;
class Student {
public:
    Student();
    Student(string f,string l);//a constructor with first name and last name 
    Student(int t,int p,int r); //a constructor with the information of units
    Student(const Student& orig);
    virtual ~Student();
    void setPar(int par1,int par2);
    void setPar(string& par1,string par2);
    string const getNation();
    string const getFname();
    string const getLname();
    int const getStdno();
    void setAverage(double avg);
    void setUnits(int total, int passed);
    void setProperties(string f,string l, double avg);
    int const getPassed();
    int const getRemain();
    int const getTotal();
private:
    string nationalCode,fname,lname,studentNo;
    int passedUnits,totalUnits,remainUnits;
    double average;
};