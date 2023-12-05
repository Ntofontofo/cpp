#include <iostream>
using namespace std;

int main(){
double (price), (conv), (amR) {};

	price=200;
	conv=19.8;
	amR=price*conv;
	cout << "Those shoes cost $" << price  << " in American dollars";
	cout << " or R" << amR << " in South African rands.";

	return 0;
}