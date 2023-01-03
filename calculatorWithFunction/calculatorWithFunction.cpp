#include <iostream>
#include <cmath>

using namespace std;

void calculate(int choice){
	switch(choice){
		case 1:
			sum = num1 + num2;
			cout << sum;break;
		case 2:
			substr = num1 - num2;
			cout << substr;break;
		case 3:
			prod = num1 * num2;
			cout << prod;break;
		case 4:
			quot = num1 / num2;
			cout << quot;break;
		case 5:
			cout << "Enter the number: " << endl;
			cin >> num1;

			cout << sqrt(num1);break;
		case 6:
			cout << "Enter the number: " << endl;
			cin >> num1;

			cout << "Enter the power: " << endl;
			cin >> num2;

			cout << sum;break;
	}
}

int main(){
	int num1, num2, sum, substr, prod, quot;
	int choice;
	do{
		cout << "1-Sum" << endl;
		cout << "2-Substraction" << endl;
		cout << "3-Product" << endl;
		cout << "4-Quotient" << endl;
		cout << "5-Square root" << endl;
		cout << "6-Power" << endl;

		cout << "Your choice: ";
		cin >> choice;
	}while(choice == 0);

	if(choice>0 && choice <4){
		cout << "Enter the first number: " << endl;
		cin >> num1;

		cout << "Enter the second number: " << endl;
		cin >> num2;
	}

	calculate(choice);

}