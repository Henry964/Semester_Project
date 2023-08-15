#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    cout << "Enter the number of subjects: ";
    cin >> numSubjects;

    double totalCredits = 0;
    double totalGradePoints = 0;

    for (int i = 1; i <= numSubjects; ++i) {
        int credits;
        string grade;

        cout << "\nEnter credits for subject " << i << ": ";
        cin >> credits;

        cout << "Enter grade for subject " << i << " (A/B+/B/C+/C/D+/E/F): ";
        cin >> grade;

        double gradePoints;

        if(grade=="A" || grade=="a"){
                gradePoints = 4.0;
    	
				totalCredits += credits;
        		totalGradePoints += (gradePoints * credits);
		}
    	
    	else if(grade=="B+" || grade=="b+"){
                gradePoints = 3.5;
    	
		}
    	
    	else if(grade=="B" || grade=="b"){
                gradePoints = 3.0;
    	
		}
        
        else if(grade=="C+" || grade=="c+"){
                gradePoints = 2.5;

		}
        
        else if(grade=="C" || grade=="c"){
				gradePoints = 2.0;
 
		}
        
        else if(grade=="D+" || grade=="d+"){
                gradePoints = 1.5;

		}
		
		else if(grade=="E" || grade=="e"){
				gradePoints = 0.5;

		}
		
		else if(grade=="F" || grade=="f"){
				gradePoints = 0;

		}
		
		else{	
			cout << "Invalid grade entered." << endl;
            i--;
            continue; // Skip this iteration and try again
    	}
    	
    	
				totalCredits += credits;
        		totalGradePoints += (gradePoints * credits);
	}	

        
    

    if (totalCredits == 0) {
        cout << "No subjects entered." << endl;
    } else {
        double cgpa = totalGradePoints / totalCredits;
        
        cout <<"\n\nYour Total Credit Hours: "<< totalCredits <<endl 
			 <<"Your CGPA is: " << cgpa << endl;
    }

    return 0;
}

