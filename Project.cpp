#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    srand(time(0));
    int strength;
    int dex;
    int intelligence;
    int charisma;
    int maxHealth;
    int currentHealth;
    int toStart;
    
    strength = rand() % 16 + 3;
    dex = rand() % 16 + 3;
    intelligence = rand() % 16 + 3;
    charisma = rand() % 16 + 3;
    currentHealth = rand() % 6 + 3;
    maxHealth = currentHealth;
    
    cout << "strength " << strength << endl;
    cout << "dexterity " << dex << endl;
    cout << "intelligence " << intelligence << endl;
    cout << "charisma " << charisma << endl;
    cout << "maxHealth " << maxHealth << endl;
    cout << "Current Health " << currentHealth << endl;
    
    string start;
    cout << "Press begin to start the game" << endl;
    cin >> start;
    
    if (start == "begin") {
        cout << "You are standing in front of the gate to a large mysterious mansion. The gate’s rusted lock seems ready to fall off. Maybe if you bashed the gate hard enough, you could get through it. Or, you could try to climb over the gate." << endl;
        cout << "Would you like to climb or bash the gate?" << endl;
    }
    
    else {
        cout << "Fault, i don't understand please try again.";
    }
    
    
    string order;
    int rno;
    int injury;
    int rno2;
    
    //loop
    
    cin >> order;
    
    if (order == "Climb") {
        
    rno = (rand() % 20 + 1) ;
    cout << "You rolled " << rno << " against a dex of " << dex <<endl;}
    
    if (rno <= dex) {
        cout << "Success" << endl;
        cout << "You carefully climb over the old rusted gate. You land safely on your feet inside the grounds of the mysterious mansion. Would you like to climb or bash the gate?" << endl;
    }
    else {
        injury = (rand() % 4 + 1) ;
        currentHealth = currentHealth - injury;
        cout << "fail" << endl;
        cout << "As you make your way over the rusted gate, the finial you are using for support snaps and you land hard on the ground below. You take " << injury << " damage and are a little shaken. Nevertheless, you have made it inside the grounds of the mysterious mansion." << endl;
        cout << "HP: " << injury << "/" << maxHealth << endl;
    }
    
    if (order == "Bash")     {
    rno = (rand() % 20 + 1) ;
    cout << "You rolled " << rno << " against a Str of " << strength << endl;
    if (rno2 <= strength) {
        cout << "Success" << endl;
        cout << "You put all your weight into a massive assault on the gate. As you suspected, the lock was not up to the challenge and gave way easily. You hear a large thud as the gate crashes open. You have made it inside the grounds of the mysterious mansion." << endl; }
    else {
        injury = (rand() % 4 + 1) ;
        currentHealth = currentHealth - injury;
        cout << "fail" << endl;
        cout << "You put all your weight into a massive assault on the gate. At first, the lock resists your attack, and the collision with the gate bites into your shoulder. You take " << injury << " damage. After a moment's hesitation, the lock gives, and the gate swings open with a thud. You have made it inside the grounds of the mysterious mansion." << endl;
        cout << "HP: " << injury << "/" << maxHealth << endl;
    }
    }
    cout << "Finish" << endl;
    cout << "Thank you for playing my demo. Hope you liked it." << endl;
    //end loop
    return 0;
    }