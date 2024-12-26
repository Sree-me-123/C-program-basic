#include <stdio.h>
struct account {
    int acno; 
    char name[50]; 
    float balance;       
};
void main() {
    int n;
    float minbal;
    printf("Enter the number of customers: ");
    scanf("%d", &n);
    struct account customers[n];
    for (int i=0;i<n;i++) 
    {
        printf("\nCustomer %d:\n", i + 1);
        printf("Enter Account Number: ");
        scanf("%d", &customers[i].acno);
        getchar(); 
        printf("Enter Account Holder Name: ");
        gets(customers[i].name);
        printf("Enter Balance: ");
        scanf("%f", &customers[i].balance);
    }
    printf("\nEnter the minimum balance: ");
    scanf("%f", &minbal);
    printf("\nCustomers with balance less than %.2f:", minbal);
    int count = 0;
    for (int i=0;i<n;i++) 
    {
        if (customers[i].balance < minbal) {
            printf("\nAccount Number: %d\n", customers[i].acno);
            printf("Account Holder Name: %s\n", customers[i].name);
            printf("Balance: %.2f\n", customers[i].balance);
            count = 1;
        }
    }

    if (!count)
     {
        printf("\nNo customers have a balance less than %.2f.\n", minbal);
    }

}
