/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Students.h
 * Author: hamid
 *
 * Created on December 16, 2017, 11:08 AM
 */

#ifndef STUDENTS_H
#define STUDENTS_H

class Students {
public:
    Students();
    Students(char f,char l);//a constructor with first name and last name 
    Students(int t,int p,int r); //a constructor with the information of units
    Students(const Students& orig);
    virtual ~Students();
    
private:
    char nationalCode,fname,lname,studentNo;
    int passedUnits,totalUnits,remainUnits;
};

#endif /* STUDENTS_H */

