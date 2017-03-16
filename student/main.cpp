//
//  main.cpp
//  student
//
//  Created by Dawit Abera on 3/15/17.
//  Copyright © 2017 University of Washington. All rights reserved.
//

#include <iostream>
#include "student.hpp"

int main(int argc, const char * argv[]) {
 
    Student x;
    Student::StudentType students [MAXSIZE];
    int size;
    ifstream infile ("data1.txt");
    if(!infile){
        cout << "File could not be opened." << endl;
        return 1;
    }
    
    bool successfulRead = x.sortInput(infile, students, size);
    
    if(successfulRead){
        x.dispayList(students, size); 
    }
}
