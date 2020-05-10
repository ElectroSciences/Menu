#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice = 0;
    
    printf("\n======== Menu ======== \n");
    printf("1. Entrcote \n");
    printf("2. Suckling pig \n");
    printf("3. Homemade bolognese pasta  \n");
    printf("4. Potatos salads \n");
    printf("What's your choice ? 1, 2, 3 or 4 ? ");
    scanf("%d", &choice);
    
    switch(choice){
        case 1:
            printf(" \nYour entrecote will be here in 6 minutes \n\n ");
            break;
        case 2:
            printf(" \nYou'll be able to devour your suckling pig in 12 minutes \n\n");
            break;
        case 3:
            printf(" \nYour Bolognese pasta will arrive in 8 minutes \n\n ");
            break;
        case 4:
            printf(" \nYou who are probably a vegetarian, will be able to taste your potato salad in 3 minutes \n\n ");
            break;
        default:
            printf(" \nThis dish does not exist in our establishment, please get the hell out of here or we'll make it ourselves \n\n ");
            break;
    }
    
    return 0;
}
