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
#include <vector>
#include <sstream>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include "Student.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
   
    string input;
    cout << "type students list with ; delimiter and comma seperated for each student:";
    cin >> input;
    stringstream ss( input );
    vector<string> result,record;
    while( ss.good() )
    {
        string substr;
        getline( ss, substr, ';' );
        result.push_back( substr );
    }
    //create an object of student for each entry delimited with ; semicolon.
    Student student[result.size()];
    
    for (int i = 0 ; i < result.size() ; i++)
    {
        string substr;
        std::stringstream ss(result[i]);
        while (ss >> substr)
        {
            record.push_back(substr);
            if (ss.peek() == ',')
            ss.ignore();
        }
        cout << i<<"------------------------------";
        cout << record[i] << endl;
        student[i].setProperties("test1","test2",12.5);
        
        cout << student[i].getFname() << " " 
                << student[i].getLname() << " "<< endl;
    }
    return 0;
}

