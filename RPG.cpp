/* Program to demonstrate an RPG * written by Christian Rodriguez */
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int selection = 0;
    int health = 0;
    char role[100];
    char msg[100];


    cout << "[ Welcome to the world of the Incursion! ]" << endl;
    cout << "please select a role";
    cout << "\n choose ... " << endl;
    cout << "1 for Count Doom" << endl;
    cout << "2 for the Countess of Crime" << endl;
    cout << "3 for the Spartan Warrior" << endl;
    cout << "4 for the Messenger of Incursion" << endl;
    cout << "5 for Christian" << endl;
    cin >> selection;

    switch (selection)
    {
    case 1:
    {
        strcpy_s(role, "Count Doom");
        strcpy_s(msg, "welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "We hope your role will be successful!\n";
        cout << "you have ... 100% health" << endl;
        health += 100;
        break;
    }
    case 2:
    {
        strcpy_s(role, "Countess of Crime");
        strcpy_s(msg, "welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "May you achieve your objectives!\n";
        cout << "you have ... 75% health" << endl;
        health += 75;
        break;
    }
    case 3:
    {
        strcpy_s(role, "Spartan Warrior");
        strcpy_s(msg, "welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "May you achieve your objectives!\n";
        cout << "you have ... 50% health" << endl;
        health += 50;
        break;
    }
    case 4:
    {
        strcpy_s(role, "Messenger of Incursion");
        strcpy_s(msg, "welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "May you achieve your objectives!\n";
        cout << "you have ... 25% health" << endl;
        health += 25;
        break;

    }
    case 5: {
        strcpy_s(role, "Christian Student");
        strcpy_s(msg, "welcome ");
        strcat_s(msg, role);
        cout << msg << endl;
        cout << "May you achieve your objectives!\n";
        cout << "sorry, you have ... 0 % health " << endl;
        health += 0;
        break;

    }
    default:
        cout << "invalid entry ... try again later" << endl;
    }

    // part 2 ... choosing a mission
    cout << "please select an objective";
    cout << "\n choose ... " << endl;
    cout << "1 for \"Get the Gold\"" << endl;
    cout << "2 for \"Capture the Fortress\"" << endl;
    cout << "3 for \"Enter the City\"" << endl;
    cout << "4 for \"Forest of Frenzy\"" << endl;
    cout << "5 for \"Battle for Midland\"" << endl;
    cin >> selection;
    int treasure = 0;
    switch (selection) {
    case 1: {
        treasure += 10;
        cout << "Your mission is to retrieve the gold." << endl;
        cout << "Your initial score: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;
    }
    case 2: {
        treasure += 20;
        cout << "Your mission is to secure the fortress." << endl;
        cout << "Your initial score: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;
    }
    case 3: {
        treasure += 30;
        cout << "Your mission is to infiltrate the city." << endl;
        cout << "Your initial score: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;
    }
    case 4: {
        treasure += 40;
        cout << "Your mission is to survive the forest." << endl;
        cout << "Your initial score: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;
    }
    case 5: {
        treasure += 50;
        cout << "Your mission is to attack Midland." << endl;
        cout << "Your initial score: " << treasure << endl;
        cout << "We wish that your mission is a success!" << endl;
        break;
    }
    default:
        cout << "invalid entry ... try again later" << endl;
    }



    // part 3 ... the Game Play

    // variable to remember that the mission is ongoing
    bool active = true;
    // variable for keyboard action
    char motion = ' ';

    // game play keys defined
    cout << "Let the action begin!" << endl << endl;
    cout << "Use these keyboard keys for game play." << endl;
    cout << endl;
    cout << "press w for forward and then press Enter" << endl;
    cout << "press s for backward and then press Enter" << endl;
    cout << "press a for left and then press Enter" << endl;
    cout << "press d for right and then press Enter" << endl;

    while (active == true)
    {
        // open loop block	

        // commence game play		
        cout << endl;
        cout << "enter the building (w) or" << endl;
        cout << "bypass building and enter the alley (a or d)" << endl;
        cout << endl;
        cin >> motion;

        // update game points
        if (motion == 'w' || motion == 'W')
            treasure += 20;
        else
            treasure += 5;

        // display current game points
        cout << "your treasure score : " << treasure << endl;
        cout << "your health : " << health << endl;

        // continue game play
        cout << endl;
        cout << "enter into forest (w) or" << endl;
        cout << "bypass forest and walk to the river (a or d)" << endl;
        cout << endl;
        cin >> motion;

        // assess character motion
        if (motion == 'w' || motion == 'W')
        {
            cout << "you have encountered your nemesis!" << endl;
            treasure -= 10;
            health -= 10;
        }
        else if (motion == 'a' || motion == 'A')
        {
            treasure += 20;
            cout << "you have retrieved the goblet of gold!" << endl;
            health += 10;
        }
        else if (motion == 'd' || motion == 'D')
        {
            treasure += 5;
            cout << "your nemesis has defeated you!" << endl;
            health = 0;
        }
        else if (motion == 's' || motion == 'S')
        {
            treasure += 10;
            cout << "you have retrieved the ring of silver!" << endl;
            health += 5;
        }
        else
        {
            treasure += 0;
            health += 0;
        }

        // display current game points
        cout << "your treasure score : " << treasure << endl;
        cout << "your health : " << health << endl;

        // game play ends
        if (health <= 0) {
            active = false;
            cout << "You have been defeated. Mission failed!" << endl;
        }
        else if (treasure >= 100 && health > 0) {  // Define a success condition
            active = false;
            cout << "Congratulations! You have successfully completed the mission!" << endl;
            cout << "Final treasure score: " << treasure << endl;
            cout << "Remaining health: " << health << endl;
        }
        else {
            cout << "Continue completion of your mission!" << endl;
        }
    }
    // close loop block

    cout << endl;
    cout << "the game is over ... " << "time for homework!" << endl;

    return 0;
}
