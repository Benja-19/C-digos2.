//
//	Constructor - example that invokes a constructor 
//
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

class Student 
{
	public:
			Student()
			{
				cout << "constructing student" << endl;
				semesterHours = 0;
				gpa = 0.0;
			}
			~Student()
			{
					// ...whatever assets are returned here...
			}
	protected:
		int semesterHours;
		float gpa;
};
int main(int nNumberofArgs, char* pszArgs[])
{
	cout << "Creating a new Student object" << endl;
	Student s;
	
	cout << "Creating a new object off the heap" << endl;
	Student* pS = new Student;
	
	// wait until user is ready before terminating program 
	// to allow the user to see the program results 
	system("PAUSE");
	return 0;
}
