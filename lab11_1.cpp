#include<iostream>
using namespace std;

int main(){
    char grade;
    int i=1;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	
	do{
		cout << "Student [" << i<<"]: ";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade=='0'){
		    break;
		}
		if(grade=='A'){ // if grade is A
			count[0]++;
		}else if(grade=='B'){ // if grade is B
			count[1]++;
        }else if(grade=='C'){ // if grade is C
			count[2]++;
		}else if(grade=='D'){ // if grade is D
			count[3]++;
		}else if(grade=='F'){ // if grade is F
			count[4]++;

		}else{ 
			cout <<"Wrong input. Please input again.\n";
			continue;
		} 
		i++;
	}while(1);
	
	
	cout << "In total "<<i-1 <<" students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";	
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;	
	
	return 0;
}
