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
        
        /* error check the grade.
         grade must be greater than 0 and less than 100 */
        if(temp.grade < LOWGRADE || temp.grade > MAXGRADE){
            continue;                     // skip -ve values and >100 values
        }
        
        int i = 0 ;
        for (i=size; i > 0; i--){
           
            /* check the new student last name (temp.last) with the original
               student last name from file.
               strncmp() manipulation function is used to compare two strings
               lexicographically until the characters differ or a null is encountered
               or when specified count is reached. It returns an integer value.
             */
            if(strncmp(temp.last, students[i-1].last, MAXLENGTH) < 0){
                students[i] = students[i-1];
            }
            
            /* @this stage, the last names are the same, check the first name
             to sort the data alphabetically.
            */
            else if (strncmp(temp.last, students[i-1].last, MAXLENGTH) == 0 &&
                     strncmp(temp.first, students[i-1].first, MAXLENGTH) < 0){
                students[i] = students[i-1];
            }else{
                // the list already sorted, break out
                break;
            }
        }
            // save the new student record to the array
            students[i] = temp;
            size++;
    }
        return true;

}
