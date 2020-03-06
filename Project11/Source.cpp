#include<iostream>	
#include"Header.h"
#include "stringWorker.h"
// підятгує прототип
//функції з header
using namespace std;

#define clear system("cls");
#define PI 3.14

#define begin {
#define end  }



int main() {

	
	int result = Calc ::sum(10,5);

	StringWorker ::sum("IT", "STEP");






	//int result2 = multiplicate(5,5);
	//cout << result << " " << result2 <<  endl;


	/*for (int i = 0; i < 10; i++)
		begin
		cout << i << endl;

		end*/

	








	//cout << "Hello world 1 " << endl;
	//clear
	//cout << "Hello world 2 " << endl;
	//clear
	//cout << "Hello world 3 " << endl;
	//clear

		cout << PI << endl;
	system("pause");
	return 0;
}
