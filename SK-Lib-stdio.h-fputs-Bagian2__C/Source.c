#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

void writeToFile(char str[]) {
    FILE* fp;
    fp = fopen("f1.txt", "w");
    fputs(str, fp);
    fclose(fp);
}

int main() {
    char str[20];
    strcpy(str, "Testing Manusia Biasa");
    writeToFile(str);

    _getch();    
}