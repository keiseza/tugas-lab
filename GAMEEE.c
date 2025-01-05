#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>

#define RESET   "\x1b[0m"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define WHITE   "\x1b[37m"

// Function declarations
void typeOut(const char *text, int delay);
void unknown_person();
void quest_accepted();
void house_decision_withsword();
void gate_3();
void monster_quest();
void infinite_play();
void game_loop();

// MISC
int heads = 0;
int coins = 100;

int main() {
    while (1) {
        printf("+---------------------------------------------------------------------+\n");
        printf("                          Beheader(RPG)                                    \n");
        printf("+---------------------------------------------------------------------+\n");
        printf("    .                  .-.    .  _   *     _   .\n");
        printf("           *          /   \\     ((       _/ \\       *    .\n");
        printf("         _    .   .--'\\/\\_ \\     `      /    \\  *    ___\n");
        printf("     *  / \\_    _/ ^      \\/'__        /\\/\\  /\\  __/   \\ *\n");
        printf("       /    \\  /    .'   _/  /  \\  *' /    \\/  \\/ .`'\\_/\\   .\n");
        printf("  .   /\\/\\  /\\/ :' __  ^/  ^/    `--./.'  ^  `-\\. _    _:\\ _\n");
        printf("     /    \\/  \\  _/  \\-' __/.' ^ _   \\_   .'/   _/ \\ .  __/ \\\n");
        printf("   /\\  .-   `. \\/     \\ / -.   _/ \\ -. `_/   \\ /    `._/  ^  \\\n");
        printf("  /  `-.__ ^   / .-'.--'    . /    `--./ .-'  `-.  `-. `.  -  `.\n");
        printf("@/        `.  / /      `-.   /  .-'   / .   .'   \\    \\  \\  .-  \\%%\n");
        puts("+---------------------------------------------------------------------+\n");
        puts("\033[32m[1]\033[0m Play");
        puts("\033[32m[2]\033[0m Quit");
        puts(GREEN "[3]" RESET " Credits");
        puts("+---------------------------------------------------------------------+\n");
        printf(">");

        int input;
        scanf("%d", &input);

        switch (input) {
            case 1:
                system("cls");
                unknown_person();
                break;
            case 2:
                exit(0);
            case 3:
                puts("Coded and planned by: ....");
                Sleep(3000);
                system("cls");
                break;
            default:
                puts("Invalid choice! Try again.");
                Sleep(2000);
                system("cls");
                break;
        }
    }
    return 0;
}

// Print text with delay for effect
void typeOut(const char *text, int delay) {
    while (*text) {
        putchar(*text);
        fflush(stdout);
        Sleep(delay);
        text++;
    }
    putchar('\n');
}

// Handle unknown person scenario
void unknown_person() {
    puts("It was late at night. You were peacefully enjoying your sleep...");
    puts("Until suddenly, you heard a knock at the door...");
    Sleep(2000);
    puts("You get up and walk cautiously to the door...");
    puts("You open it slowly, and standing there is a mysterious man.");
    Sleep(2000);

    printf("\nPress any key to continue...\n");
    getch();

    system("cls");
    printf("+---------------------------------------------------------------------+\n");
    printf("		               .---.\n");
    printf("		              /     \\\n");
    printf("		              | - - |\n");
    printf("		             (| ' ' |)\n");
    printf("		              | (_) | \n");
    printf("		              `//=\\\\'\n");
    printf("		              (((()))\n");
    printf("		               )))((\n");
    printf("		               (()))\n");
    printf("+---------------------------------------------------------------------+\n");
    printf("You open the door revealing the mysterious man...\n");
    Sleep(2000);
    printf("The man observes you carefully...\n");
    Sleep(2000);
    printf("He then without any hesitation hands you a paper and leaves\n");
    Sleep(2000);
    printf("You decide to read what's inside the paper\n\n");
    Sleep(2000);
    printf("Press any key to continue...");
    getch();

    system("cls");
    puts("+---------------------------------------------------------------------+\n");
    puts("You have been assigned with a quest! It's either up to you whether to do this quest or");
    puts("throw this paper out, however, if you decide to do the following quest, you will be rewarded");
    puts("with a prize, the following quest will need you to get to the forest and collect a monster's head!\n");
    puts("+---------------------------------------------------------------------+\n");
    puts("What do you do?");
    puts("\033[32m[1]\033[0m Accept the given quest");
    puts("\033[32m[2]\033[0m Decline the quest and ignore the quest (The game ends)");
    puts("+---------------------------------------------------------------------+\n");
    printf(">");

    int quest;
    scanf("%d", &quest);

    switch (quest) {
        case 1:
            printf("You decide to take on the challenge to get the rewards that were promised\n");
            Sleep(2000);
            quest_accepted();
            break;
        case 2:
            printf("You think that this is a scam and you ignore the man's quest\n");
            Sleep(2000);
            exit(0);
            break;
        default:
            printf("Invalid choice! Try again.\n");
            break;
    }
}

// Handle quest acceptance
void quest_accepted() {
    system("cls");
    printf("You figured it's a good idea to take a sword with you and head to the forest to behead a monster as told in the task.\n");
    Sleep(5000);
    system("cls");

Checkpoint1:
    puts("+---------------------------------------------------------------------+\n");
    puts("Objective: Find a sword and head to Gate 3\n");
    puts("What do you do now?");
    puts("\033[32m[1]\033[0m Go to the storage room");
    puts("\033[32m[2]\033[0m Go to the kitchen");
    puts("\033[32m[3]\033[0m Go outside the house and head to gate 3");
    puts("+---------------------------------------------------------------------+\n");
    printf(">");

    int house_decision;
    int sword_decision;
    scanf("%d", &house_decision);

    switch (house_decision) {
        case 1:
            puts("You went to the storage room and see your sword laying on the floor.");
            Sleep(3000);
            system("cls");
            puts("+---------------------------------------------------------------------+\n");
            puts("Pick up the sword?");
            puts("\033[32m[1]\033[0m Pick it up");
            puts("\033[32m[2]\033[0m Leave it there");
            puts("+---------------------------------------------------------------------+\n");
            printf(">");

            scanf("%d", &sword_decision);

            switch (sword_decision) {
                case 1:
                    printf("You decide to pick up the sword and head back to the living room.\n");
                    house_decision_withsword();
                    break;
                case 2:
                    printf("You leave the sword there and head back to the living room.\n");
                    Sleep(2000);
                    system("cls");
                    goto Checkpoint1;
                    break;
                default:
                    printf("Invalid choice! Try again.\n");
                    break;
            }
            break;
        case 2:
            printf("After heading to the kitchen, you find nothing of interest there, so you head back to the living room.\n");
            Sleep(2000);
            system("cls");
            goto Checkpoint1;
            break;
        case 3:
            printf("Woah there, you don't have your sword with you, maybe head to the storage room first to get it.\n");
            Sleep(2000);
            system("cls");
            goto Checkpoint1;
            break;
        default:
            printf("Invalid option, Try again.\n");
            goto Checkpoint1;
            break;
    }
}

// Handle situation after picking up the sword
void house_decision_withsword() {
    system("cls");

Checkpoint2:
    puts("+---------------------------------------------------------------------+\n");
    puts("Objective: Go to Gate 3\n");
    puts("+---------------------------------------------------------------------+\n");
    puts("What do you do now?");
    puts("\033[32m[1]\033[0m Go to the storage room");
    puts("\033[32m[2]\033[0m Go to the kitchen");
    puts("\033[32m[3]\033[0m Go outside the house and head to gate 3");
    puts("+---------------------------------------------------------------------+\n");
    printf(">");

    int house_decision;
    scanf("%d", &house_decision);

    switch (house_decision) {
        case 1:
            printf("There's nothing of particular interest here since you already have your sword with you, you decide to head back to the living room.\n");
            Sleep(2000);
            system("cls");
            goto Checkpoint2;
            break;
        case 2:
            printf("After heading to the kitchen, you find nothing of interest there, so you head back to the living room.\n");
            Sleep(2000);
            system("cls");
            goto Checkpoint2;
            break;
        case 3:
            printf("You now head out to gate 3 to go to the forest.\n");
            Sleep(2000);
            system("cls");
            gate_3();
            break;
        default:
            printf("Invalid option, try again.\n");
            Sleep(2000);
            system("cls");
            goto Checkpoint2;
            break;
    }
}

// Gate 3 decision for entering the forest
void gate_3() {
Checkpoint3:
    puts("+---------------------------------------------------------------------+\n");
    puts("Objective: Completed\n");
    puts("+---------------------------------------------------------------------+\n");
    puts("After you get to the gate, your journey finally starts.");
    Sleep(2000);
    puts("Head deeper into the forest?");
    puts("\033[32m[1]\033[0m Yes, head deeper down the forest");
    puts("\033[32m[2]\033[0m No, wander around the area");
    puts("+---------------------------------------------------------------------+\n");
    printf(">");

    int forest_decision;
    scanf("%d", &forest_decision);

    switch (forest_decision) {
        case 1:
            puts("After heading deeper, you encounter a monster, you decide to engage in a fight with it.");
            Sleep(3000);
            monster_quest();
            break;
        case 2:
            puts("After wandering around, you find nothing, so you decide to head deeper down the forest and encounter a monster.");
            Sleep(3000);
            monster_quest();
            break;
        default:
            printf("Invalid option, try again.\n");
            goto Checkpoint3;
    }
}

// Combat function for monster fight
void monster_quest() {
    int M_hp = 75;  // Monster's starting health
    int hp = 100;   // Player's starting health
    int input;      // Player's choice

    srand(time(NULL)); // Initialize random number generator

    while (M_hp > 0 && hp > 0) {
        printf("\nBATTLE!\n");
        puts("+---------------------------------------------------------------------+");
        printf("Your HP: %d, Monster HP: %d\n", hp, M_hp);
        puts("+---------------------------------------------------------------------+");
        printf("What do you do?\n");
        puts("1. Attack");
        puts("2. Defend");
        printf(">");

        scanf("%d", &input);

        switch (input) {
            case 1: 
                {
                    int playerDamage = (rand() % 11) + 10;  // Random attack damage
                    printf("You attacked the monster for %d damage!\n", playerDamage);
                    M_hp -= playerDamage;  // Decrease monster's HP
                    printf("Monster's HP: %d\n", M_hp);
                }
                break;
            case 2:
                printf("You decided to defend!\n");
                int random_number = (rand() % 3) + 1;  // To decide defense success or failure
                if (random_number == 1) {
                    printf("Your defense successfully deflected the monster's attack!\n");
                    M_hp -= (rand() % 11) + 10; // Apply some damage to the monster after a successful defense
                } else {
                    int monsterDamage = (rand() % 11) + 10;  // Damage from monster's attack
                    printf("Defense failed... The monster attacks you for %d damage!\n", monsterDamage);
                    hp -= monsterDamage;  // Decrease player's HP
                }
                break;
            default:
                printf("Invalid input, please choose 1 or 2.\n");
                continue;  // Prompt player again if input is invalid
        }

        // Check if the monster is defeated
        if (M_hp <= 0) {
            // Proceed to head collection and reward logic
            printf("You defeated the monster!\n");
            heads += 1;  // Increment heads 
            coins += 100; // Reward player with coins after monster is defeated
            break;
        }

        // Monster turn: Apply the monster's attack if it isn't dead
        if (M_hp > 0) {
            int monsterDamage = (rand() % 11) + 10;  // Random monster damage
            printf("The monster attacks you for %d damage!\n", monsterDamage);
            hp -= monsterDamage;  // Decrease player's HP
            printf("Your HP: %d\n", hp);

            // Check if player is defeated
            if (hp <= 0) {
                printf("You were defeated by the monster...\n");
                exit(0);  // End the game if player is defeated
            }
        }
    }

    // Game loop after completing a battle
    game_loop();
}

void game_loop() {
    while (1) {
        system("cls");
        puts("+---------------------------------------------------------------------+");
        printf("You currently have %d monster head(s) and %d coins.\n", heads, coins);
        puts("+---------------------------------------------------------------------+");
        puts("What do you want to do next?");
        puts("\033[32m[1]\033[0m Fight more monsters");
        puts("\033[32m[2]\033[0m Sell monster heads");
        puts("\033[32m[3]\033[0m Quit game");
        printf(">");

        int choice;
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("You decide to fight more monsters.\n");
                Sleep(2000);
                system("cls");
                monster_quest(); // Re-engage monster quest
                break;
            case 2:
                printf("You sell your monster heads for 50 coins each. You earned %d coins.\n", heads * 50);
                coins += (heads * 50); // Sell monster heads and update coin count
                heads = 0; // Reset heads after selling
                Sleep(2000);
                break;
            case 3:
                printf("You quit the game. Goodbye!\n");
                exit(0);
                break;
            default:
                printf("Invalid choice! Try again.\n");
                break;
        }
    }
}
