//
//  student.cpp
//  student
//
//  Created by Dawit Abera on 3/15/17.
//  Copyright © 2017 University of Washington. All rights reserved.
//

#include "student.hpp"

bool Student::sortInput(istream & infile, Student::StudentType * students, int &size){
    
    if(students == nullptr)
        return false;
    
    size = 0;
    StudentType temp;                       // temp save the studnet record
    
    while (size < MAXSIZE) {
        infile >> temp.last >> temp.first >> temp.grade;
        
        if(infile.eof()){                   // end of file
            return true;
        }
        
        int i = 0 ;
        for (i=size; i > 0; i--){
           
            
            if(strncmp(temp.last, students[i - 1].last, MAXLENGTH) < 0){
                students[i] = students[i-1];
            }
            
        
        /* error check the grade. 
           grade must be greater than 0 and less than 100 */
        if(temp.grade < LOWGRADE || temp.grade > MAXGRADE){
            continue;                     // skip -ve values and >100 values
        }
        
        // grades are fine, now check the names and sort it by last name
        // if the last names are the same, check the first name to sort the list
        // alphabetically
       
    }
    

}
