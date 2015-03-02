#include <stdio.h>
#include <string.h>
#include <stdlib.h>

enum DataType {
	type_int,
	type_float,
	type_string
}; // end of dataTypes enum

union Val {
	int integer;
	float floater;
	char* stringer;
}; // end of val union

struct Entry {
	enum DataType dataType;
	union Val value;
}; // end of entry struct

int main(void) {
	struct Entry entry;

	entry.dataType = type_int;
	entry.value.integer = 4;
	
	switch (entry.dataType) {
		case type_int:
			printf("%d\n", entry.value.integer);
			break;

		case type_float:
			printf("%f\n", entry.value.floater);

		case type_string:
			printf("%s\n", entry.value.stringer);
	}
} // end of main function
