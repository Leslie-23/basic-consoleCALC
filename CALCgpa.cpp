#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	cout <<"____________________________________________________________________________________________________________________" << endl;
	cout <<"                                     STUDENT GPA CALCULATOR                                                        " << endl;
	cout <<"____________________________________________________________________________________________________________________" << endl;
	
	string name, name2 , name3, indexNo , program , class1 , c1,c2,c3,c4,c5,c6,c7,c8,c9,c10; 
	int courseNo, creditHrs1,creditHrs2, creditHrs3, creditHrs4 , creditHrs5 , creditHrs6 , creditHrs7 , creditHrs8 , creditHrs9 , creditHrs10 , g1,g2,g3,g4,g5,g6,g7,g8,g9,g10 ;
	cout << "ENTER YOUR NAME: "<< endl;
	cin >> name >> name2 ;
	
	cout << "ENTER YOUR INDEX NUMBER: "  << endl;
	cin >> indexNo;
	
	cout << "ENTER YOUR PROGRAM: " << endl;
	cin >> program; 
	
	cout << "ENTER YOUR LEVEL (100-400): " << endl;
	cin >> class1;
	
	cout << "ENTER THE NUMBER OF COURSES OFFERED: " << endl;
	cin >> courseNo;
	
	if (courseNo <= 10){
		cout << "GO AHEAD TO INPUT COURSES. " << endl;
	} else  {
		cout << "PLEASE CHECK YOUR INPUT." << endl;
	}
	
	cout << "INPUT YOUR COURSES: " << endl;
	cin >> c1 >> c2 >> c3 >> c4 >> c5 >> c6 >> c7 >> c8 >> c9 >> c10; 
	
	cout << "ENTER YOUR GRADES: " << endl;
	cin >> g1 >> g2 >> g3 >> g4 >> g5 >> g6 >> g7 >> g8 >> g9 >> g10;
	
	cout << "INPUT YOUR CREDIT HOURS FOR EACH COURSE: " << endl;
	cin >> creditHrs1 >> creditHrs2 >> creditHrs3 >> creditHrs4 >> creditHrs5 >> creditHrs6 >> creditHrs7 >> creditHrs8 >> creditHrs9 >> creditHrs10 ;
	int totalCreditHrs = creditHrs1 + creditHrs2 + creditHrs3 + creditHrs4 + creditHrs5 + creditHrs6 + creditHrs7 + creditHrs8 + creditHrs9 + creditHrs10 ;  
	int r1,r2,r3,r4,r5,r6,r7,r8,r9,r10;
	
	cout << " ___________________________________________________________________________" << endl;
	cout << "|                  YOUR GRADE POINT PER SUBJECT                             |    " << endl;
	cout << "|___________________________________________________________________________|" << endl;
	
	cout << c1  <<": " << "RESULT: " <<creditHrs1*g1/totalCreditHrs << endl;
	cout << c2  <<": " << "RESULT: " <<creditHrs2*g2/totalCreditHrs << endl;
	cout << c3  <<": " << "RESULT: " <<creditHrs3*g3/totalCreditHrs << endl;
	cout << c4  <<": " << "RESULT: " <<creditHrs4*g4/totalCreditHrs << endl;
	cout << c5  <<": " << "RESULT: " <<creditHrs5*g5/totalCreditHrs << endl;
	cout << c6  <<": " << "RESULT: " <<creditHrs6*g6/totalCreditHrs << endl;
	cout << c7  <<": " << "RESULT: " <<creditHrs7*g7/totalCreditHrs << endl;
	cout << c8  <<": " << "RESULT: " <<creditHrs8*g8/totalCreditHrs << endl;
	cout << c9  <<": " << "RESULT: " <<creditHrs9*g9/totalCreditHrs << endl;
	cout << c10 <<": " << "RESULT: " <<creditHrs10*g10/totalCreditHrs << endl;
	int resultTOTAL = (creditHrs1*g1/totalCreditHrs + creditHrs2*g2/totalCreditHrs + creditHrs3*g3/totalCreditHrs + creditHrs4*g4/totalCreditHrs +creditHrs5*g5/totalCreditHrs + creditHrs6*g6/totalCreditHrs + creditHrs7*g7/totalCreditHrs +  creditHrs8*g8/totalCreditHrs + creditHrs9*g9/totalCreditHrs + creditHrs10*g10/totalCreditHrs)/10;

	cout << "________________________________________________________________________" << endl;	
	cout << "                NAME: " << name << "-"<< name2  << endl;
	cout << "                INDEX NUMBER: " << indexNo << endl;
	cout << "                PROGRAM: " << program << endl;
	
	cout << "                STUDENT LEVEL: " << class1 << endl;
	cout << "________________________________________________________________________" << endl;
	cout << "YOUR FINAL GPA IN TOTALITY IS: " << (creditHrs1*g1/totalCreditHrs + creditHrs2*g2/totalCreditHrs + creditHrs3*g3/totalCreditHrs + creditHrs4*g4/totalCreditHrs +creditHrs5*g5/totalCreditHrs + creditHrs6*g6/totalCreditHrs + creditHrs7*g7/totalCreditHrs +  creditHrs8*g8/totalCreditHrs + creditHrs9*g9/totalCreditHrs + creditHrs10*g10/totalCreditHrs)/10 << endl;
 	if (resultTOTAL < 2){
 		cout << "YOU HAVE FAILED THIS COURSE. PLEASE CONTACT THE SCHOOL FOR FURTHER AID" << endl;
	 } else if (resultTOTAL < 4){
	 	cout << "YOU HAVE BEEN PUT ON A PROBATIONARY PERIOD FOR THE NEXT SEMESTER" << endl;
	 } else if (resultTOTAL < 6){
	 	cout << "YOU COULD DO BETTER NEXT TIME" << endl;
	 } else if (resultTOTAL < 7){
	 	cout << "YOU HAVE DONE WELL. KEEP IT UP" << endl;
	 } else {
	 	cout << " EXCELLENT!!! YOU HAVE DONE EXTREMELY WELL. " << endl;
	 }
	system("pause");
	return 0;
}
