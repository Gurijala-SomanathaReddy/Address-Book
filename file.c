#include <stdio.h>
#include "file.h"

void saveContactsToFile(AddressBook *addressBook) 
{
    FILE *fp;
   fp = fopen("contact.csv", "w+");
    if(fp==NULL)
    {
        printf("Could not open file\n");
        return;
    }
    else
    {
        for(int i=0;i<addressBook->contactCount;i++)
        {
            
            fprintf(fp, "%s,%s,%s\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email);
        }

        fclose(fp);  // Close the file
        printf("Contacts saved successfully.\n");
    }
}
    

void loadContactsFromFile(AddressBook *addressBook) 
{
    FILE *fp;

    int i;
    // Open the file for reading
    fp = fopen("contact.csv", "r");
    if (fp == NULL) 
    {
        printf("Could not open file\n");
        return; // Exit the function if file opening fails
    }

    // Loop to read each contact's details from the file
    else 
    {
        while (fscanf(fp, "%[^,],%[^,],%[^\n]\n", addressBook->contacts[i].name, addressBook->contacts[i].phone, addressBook->contacts[i].email)!=EOF)
        {
            i++;
        }
    }

    // Close the file after reading
    fclose(fp);
    addressBook->contactCount = i;

    //printf("Contacts loaded successfully.\n");
}