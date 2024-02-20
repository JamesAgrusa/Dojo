#include <iostream>
#include <ctime>
#include <cstdlib>
#include "James.h"
#include "Arena.h"

using namespace std;

James::James()
{

}

char James::jamesChoice()
{
    int choice;
    int mhp, hp, atk, def, matk, mdef, damage, mdamage;
    atk = 10;
    def = 15;
    matk = 10;
    mdef = 15;

    srand(unsigned(time(0)));
    mhp = rand() % 50 + 150;
    hp = rand() % 20 + 120;
    while (hp > 0 || mhp > 0)
    {
        cout << "What do you want to do?\n 1 -> Bold Move \n 2 -> Safe Attack \n";
        do { cin >> choice; } while (choice > 2 || choice < 1);
        switch (choice) {
        case 1:
            atk = rand() % 20 + 10;
            def = rand() % 10 + 10;
            break;
        case 2:
            atk = rand() % 5 + 10;
            def = rand() % 10 + 10;
            break;
        case 3:
            atk = rand() % 10 + 10;
            def = rand() % 20 + 10;
            break;
        }
        choice = rand() % 2;

        switch (choice) {
        case 1:
            matk = rand() % 20 + 10;
            mdef = rand() % 10 + 10;
            break;
        case 2:
            matk = rand() % 5 + 10;
            mdef = rand() % 10 + 10;
            break;
        case 3:
            matk = rand() % 10 + 10;
            mdef = rand() % 20 + 10;
            break;
        }
        mdamage = (atk)-(mdef / atk);
        if (mdamage < 0) {
            mdamage = 0;
        }
        mhp = mhp - mdamage;
        cout << "You did " << mdamage << " damage to Austin...Amazing!\n";
        cin.get();

        if (mhp < 1) {
            cout << "You killed Austin! Amazing!\n";
            cin.get();
            return 0;
        }

        cout << "Austin now has " << mhp << " HP left.\n";
        damage = (matk)-(def / matk);
        if (damage < 0)
        {
            damage = 0;
        }
        hp = hp - damage;

        cout << "Austin, in an incredible mannor did: " << damage << " points from you. You still have, " << hp << " HP points availalble\n";

        if (hp < 1) {
            cout << "You died! Austin still has " << mhp << " HP left, come back when youre ready.!\n";
            cin.get();
            return 0;
        }
    }
}James;