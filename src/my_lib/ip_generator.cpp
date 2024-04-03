#include "ip_generator.h"

void generate(const char* path, int64_t count_of_adresses) {
    std::filesystem::path filepath = path;

	std::ofstream file;
	file.open(filepath);


	std::uniform_int_distribution<int> range(0, 255);
	for (auto i = 0; i < count_of_adresses; ++i) {
		int n1 = range(my_gen());
		int n2 = range(my_gen());
		int n3 = range(my_gen());
		int n4 = range(my_gen());
		file << n1 << "." << n2 << "." << n3 << "." << n4 <<"\n";
	}
	file.close();
}
