#include <iostream>;
#include "my_lib/ip_generator.h"



int main(int argc, char** argv) {
	if (argc != 3) {
		std::cout << "Incorrect number of params\n";
        return 1;
	}
	generate(argv[1], std::stoi(argv[2]));

}
