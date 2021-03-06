//
//  student.hpp
//  student
//
//  Created by Dawit Abera on 3/15/17.
//  Copyright © 2017 University of Washington. All rights reserved.
//

#ifndef student_hpp
#define student_hpp
#include <fstream>
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int const MAXLENGTH = 31;                   // maximum string lenght
int const MAXSIZE = 100;                    // maximum number of records in file
int const MAXGRADE = 100;                   // highest possible grade
int const LOWGRADE = 0;                     // lowest possible grade
int const GROUP = 10;
int const HISTOGRAMSIZE = (MAXGRADE - LOWGRADE) / GROUP +1;

class Student{
public:
    
    struct StudentType{
        int grade;
        char last[MAXLENGTH];
        char first[MAXLENGTH];
    };
    
    bool sortInput(istream&, StudentType*, int&);
    void displayList(StudentType*, int);
    void setHistogram(int*, StudentType*, int);
    void displayHistogram(int*);
    int findAverage(StudentType*, int);
    int findStandardDiv(StudentType*, int);
    int findMax(StudentType*, int);
    int findMin(StudentType*, int); 

};
#endif /* student_hpp */
