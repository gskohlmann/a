#include <iostream>
#include <cstdlib>
#include <time.h>

int main(){
    int card_num;
	srand(time(NULL));

	do {
		card_num = rand() % + 99999999 + 10000000;
	} while ((card_num % 29 != 0));

	std::cout << card_num << "\n";

    do {
		card_num = rand() % + 99999999 + 20000000;
	} while ((card_num % 29 != 0));

	std::cout << card_num << "\n";

	do {
		card_num = rand() % + 99999999 + 30000000;
	} while ((card_num % 29 != 0));

	std::cout << card_num << "\n";

	do {
		card_num = rand() % + 99999999 + 40000000;
	} while ((card_num % 29 != 0));

	std::cout << card_num << "\n";

	do {
		card_num = rand() % + 99999999 + 50000000;
	} while ((card_num % 29 != 0));

	std::cout << card_num << "\n";

	do {
		card_num = rand() % + 99999999 + 60000000;
	} while ((card_num % 29 != 0));

	std::cout << card_num << "\n";

	do {
		card_num = rand() % + 99999999 + 70000000;
	} while ((card_num % 29 != 0));

	std::cout << card_num << "\n";

	do {
		card_num = rand() % + 99999999 + 80000000;
	} while ((card_num % 29 != 0));

	std::cout << card_num << "\n";

	do {
		card_num = rand() % + 99999999 + 90000000;
	} while ((card_num % 29 != 0));

	std::cout << card_num << "\n";

    system("pause");
    return 0;
}
