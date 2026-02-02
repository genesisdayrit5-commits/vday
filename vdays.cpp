#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

// Set cursor position
void setCursor(int x, int y) {
    COORD pos = { (SHORT)x, (SHORT)y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

// Typing effect
void typeText(string text, int delay) {
    for (int i = 0; i < text.length(); i++) {
        cout << text[i];
        Sleep(delay);
    }
    cout << endl;
}

// Curtain effect from sides
void curtainEffect() {
    system("cls");
    int width = 80;

    for (int i = width / 2; i >= 0; i--) {
        system("cls");
        for (int y = 0; y < 25; y++) {
            setCursor(i, y);
            cout << " III#####III";
            setCursor(width - i, y);
            cout << " III#####III" ;
        }
        Sleep(20);
    }
    system("cls");
}

// Heart explosion in red
void heartExplosion() {
    system("cls");
    string hearts[8];
    hearts[0] = "   ??????     ?????";
    hearts[1] = "  ????????   ???????";
    hearts[2] = " ????????????????????";
    hearts[3] = "  ??????????????????";
    hearts[4] = "    ??????????????";
    hearts[5] = "       ?????????";
    hearts[6] = "          ????";
    hearts[7] = "            ?";

    // Change text color to bright red
    system("color 4F"); // red background bright text for hearts
    for (int i = 0; i < 8; i++) {
        system("cls");
        for (int j = 0; j <= i; j++) {
            cout << hearts[j] << endl;
        }
        Sleep(300);
    }
    system("color 40"); // return to red background black text
}

int main() {
    // Red background, black text
    system("color 40");

    // Curtain effect at the start
    curtainEffect();

    char choice;

    typeText("0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0\n", 40);

    typeText("                     VALENTINES DAY                     \n", 40);

    typeText("0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0 o 0\n", 40);
    typeText("System booting emotions...", 40);
    Sleep(500);
    typeText("Confidence: HIGH", 40) ;
    typeText("Feelings: VERY REAL\n", 40);

    typeText("After deep analysis and zero sleep,", 40);
    typeText("I finally reached this conclusion:\n", 40);

    typeText("You are my favorite variable\n", 40);

    typeText(" FINAL QUESTION:)\n" , 40);
    typeText("WILL YOU BE MY VALENTINE THIS FEBRUARY 14?\n", 40);

    typeText("[Y] Yes (GOOD CHOICE)", 40);
    typeText("[N] No  (MASAMA KANG TAO)\n", 40);

    cout << " i type mo na o baka ako ang type mo ;)";
    cin >> choice;

    if (choice == 'Y' || choice == 'y') {
        heartExplosion();
        typeText("\nRESULT:NABOO NA ANG HEART KO\n", 40);
        typeText("Heart stopped responding (too happy)\n", 40);
        typeText("salamat sa pag yes my cutiiee bebii nayan\n", 40);
        typeText(" attttt dahil dyann. . . . . . . \n", 40);
        Sleep(1000);
        typeText(" tayu ay kakain sa labas at mag di date ;)",40);
    }
    else if (choice == 'N' || choice == 'n') {
        typeText("\nAYAW KU ULIT MUYAN", 40);
        typeText("ISA PA FROM THE START", 40);
        typeText("WALA KANG NO CHOICE BOSS", 40);
    }
    else {
        typeText("\nRESULT:	kaya mo yan boss paka isipan mo ng mabuti ", 40);
        typeText("take a deep breath and water", 40);
    }

    typeText("\nTAPUSS NA SEE YOU SA PUERTEN BEBII KO", 40);
    typeText("Press any key to exit...", 40);
    cin.ignore();
    cin.get();

    return 0;
}

