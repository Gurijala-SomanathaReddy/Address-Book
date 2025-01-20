#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTACTS 100

//Creating a contact structure
typedef struct {
    char name[50];
    char phone[20];
    char email[50];
} Contact;

//Createing array of contacts structure
typedef struct {
    Contact contacts[MAX_CONTACTS];
    int contactCount;
} AddressBook;

//Function decleration for creating contact
void createContact(AddressBook *addressBook);

//Function decleration for searching the contact
void searchContact(AddressBook *addressBook);

//Function decleration for edit the contact
void editContact(AddressBook *addressBook);

//Function decleration for delete the contact
void deleteContact(AddressBook *addressBook);

//Function decleration for list all the contact
void listContacts(AddressBook *addressBook);

//Function decleration for initialize the contact to the structure
void initialize(AddressBook *addressBook);
//void saveContactsToFile(AddressBook *AddressBook);

#endif