#include <stdio.h>

typedef char *string; // declare type string

typedef struct {  // declare variable type Person
    string name;
    string address;
} Person;

int main(void)
{
    Person person1;  // instantiate the object
    Person person2;
    person1.name = "Namraj"; // initialize members of struct object
    person1.address = "123 Main street";

    person2.name = "Nitin";
    person2.address = "21 Newton street";

    printf("The first person is %s and he is from %s .\n", person1.name, person1.address);
    printf("The second person is %s and he is from %s .\n", person2.name, person2.address);

}