#include "main.h"
#include <iostream>
using namespace std;

int main() {
	cout << "The following program will number alphabets A-Z\n";
	int alpha_num = 0;
	char tab = '\t';
	while (alpha_num < 26) {
		char new_alpha = 'A' + alpha_num;
		cout << alpha_num << tab << new_alpha << endl;
		++alpha_num;
	
		
	}
	if (alpha_num >= 25) {
		cout << "This is the end of the numbering\n";

	}
	else { cout << "25 is not the same as Z\n"; }


}
