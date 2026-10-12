#include <stdio.h>

struct Person {
    int id;
    char name[50];
    char fatherSurname[50];
    char motherSurname[50];
    char collegeEducation[100];
    char email[100];
    char phoneNumber[15];
};

int main() {
    struct Person person;

    printf("Enter ID: ");
    scanf("%d", &person.id);

    printf("Enter name: ");
    scanf(" %[^\n]", person.name);

    printf("Enter father's surname: ");
    scanf(" %[^\n]", person.fatherSurname);

    printf("Enter mother's surname: ");
    scanf(" %[^\n]", person.motherSurname);

    printf("Enter college education: ");
    scanf(" %[^\n]", person.collegeEducation);

    printf("Enter email: ");
    scanf(" %[^\n]", person.email);

    printf("Enter phone number: ");
    scanf(" %[^\n]", person.phoneNumber);

    printf("\nDetails entered:\n");
    printf("ID: %d\n", person.id);
    printf("Name: %s\n", person.name);
    printf("Father's Surname: %s\n", person.fatherSurname);
    printf("Mother's Surname: %s\n", person.motherSurname);
    printf("College Education: %s\n", person.collegeEducation);
    printf("Email: %s\n", person.email);
    printf("Phone Number: %s\n", person.phoneNumber);

    return 0;
}
