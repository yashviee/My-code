#include <stdio.h>

struct Coach {
    char name[50];
    int experience;
};

struct Team {
    char teamName[50];
    struct Coach coach;
};

int main() {
    struct Team teams[10];
    int n, i;

    printf("Enter number of teams: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("\n--- Enter details for Team %d ---\n", i + 1);

        printf("Enter Team Name: ");
        scanf("%s", teams[i].teamName);

        printf("Enter Coach Name: ");
        scanf("%s", teams[i].coach.name);

        printf("Enter Coach Experience (years): ");
        scanf("%d", &teams[i].coach.experience);
    }

    printf("\n\n===== Displaying All Teams =====\n");
    for(i = 0; i < n; i++) {
        printf("\nTeam %d:\n", i + 1);
        printf("Team Name: %s\n", teams[i].teamName);
        printf("Coach Name: %s\n", teams[i].coach.name);
        printf("Coach Experience: %d years\n", teams[i].coach.experience);
    }

return 0;
}
