// notes: scanf is written like that because when using scanf it gets the input but skips the leading white space,
// the new line when entering the character is stored in the buffer so the next scanf takes the white space as an input
// ampersand is a pointer that tells the scanf to modify play and not just a copy of it

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char play;
    int choice = 0;
    
    do {
        printf("Welcome to Two doors.\n");
        printf("Would you like to play? (y/n): ");
        scanf(" %c", &play);
        
        if (play == 'y'){
            
            printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
            printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
            printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
            printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
            printf("What do you ask so you can pick the door to freedom?\n");
            printf("\t1.Ask the truth-guard to point to the door of doom.\n");
            printf("\t2.Ask the liar-guard to point to the door of doom.\n");
            printf("\t3.Doesn't matter which one you pick.\n");
            scanf("%d", &choice);
            
            char *answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
            switch (choice) {
                case 1:
                    printf("%s", answer);
                    break;
                case 2:
                    printf("%s", answer);
                    break;
                case 3:
                    printf("%s", answer);
                    break;
                default:
                    printf("Not a valid option.\n");
                    break;
            }
            
            printf("Do you wish to play again? (y/n): ");
            scanf(" %c",&play);
            if (play == 'n') {
                break;
            }
        }
    }
    
    while (play == 'y');
    
    return 0;
}
