/*
    PROJECT:  COUNTY LIBRARY   SYSTEM
    AUTHOR:   ELOSY KATHAMBI
    DATE:     19TH   NOVEMBER  2021
    COMPILER: GCC    GNC
    LANGUAGE: C99
    LICENSE:  MIT
*/

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

Int menu();
Int main()
{
    Int action;
    Action = menu();
    Execute_action(action);
    Return 0;
}

Void execute_action(int action) {
    Printf(“You selected action %d”,action);
}
Int menu() // header/prototype
{
    Int action;
    Do {
        Printf(“\tcounty Library!\n”);
        Printf(“Welcome Mrs.Elosy \n”);
        Printf(“What would you like to do?\n”);
        Printf(“1. View users.\n”);
        Printf(“2. Add new user\n”);
        Printf(“3. Edit User\n”);
        Printf(“4. Delete user\n”);
        Printf(“5. Change Password\n”);
        Printf(“6. Log out\n”);
        Printf(“7. Exit system\n”);
        Printf(“Selected Action(1-7):”);
        Scanf(“%d”,&action);
        If ( action < 1 || action > 7) {
            Printf(“Invalid action!!! Try again.\n”);
       }
    } while ( action < 1 || action > 7);
    Return action;
}

