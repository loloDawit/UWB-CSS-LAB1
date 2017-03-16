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
 
    Student student_data;
    Student::StudentType students [MAXSIZE];
    int size;
    int average;
    int sDiv;
    int maxGrade;
    int histogram[HISTOGRAMSIZE];
    ifstream infile ("data1.txt");
    if(!infile){
        cout << "File could not be opened." << endl;
        return 1;
    }
    
    bool successfulRead = student_data.sortInput(infile, students, size);
    
    if(successfulRead){
        student_data.displayList(students, size);
        average = student_data.findAverage(students, size);
        sDiv = student_data.findStandardDiv(students, size);
        maxGrade = student_data.findMax(students, size);
        student_data.setHistogram(histogram, students, size);
        student_data.displayHistogram(histogram); 
        cout << "Average grade: " << average << endl;
        cout << "StandardDeviation σ: " << sDiv << endl;
        cout << "Maximum score: "<< maxGrade << endl; 
    }
}
