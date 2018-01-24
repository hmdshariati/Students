/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: hamid
 *
 * Created on December 16, 2017, 11:03 AM
 */
    
#include <cstdlib>
#include <unistd.h>
#include "Student.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Student *student1 = new Student();
    cout<< student1->getFname()<<endl;
    cout<<student1->getLname()<<endl;
    delete student1;
    
    return 0;
}

