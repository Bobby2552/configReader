#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct entry {
  
} // end of entry struct

  enum dataTypes {
    type_int,
    type_float,
    type_string
  } // end of dataTypes enum

    union val {
      int data_type;
      char name[20];
    } // end of val union

int main(void) {

} // end of main function
