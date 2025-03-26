#include <iostream>
#include <string>
#include "Ram.h"
using namespace std;

Ram::Ram() {
	for (int i = 0; i < strlen(mem); i++) {
		mem[i] = 0;
	}
	size = strlen(mem);
}
Ram::~Ram() {
	cout << "메모리 제거됨" << endl;
}
char Ram::read(int address) {
	return mem[address];
}
void Ram::write(int address, char value) {
	mem[address] = value;
}