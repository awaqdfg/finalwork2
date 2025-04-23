#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <locale.h>

#define NUM_GAZETS 5

<<<<<<< HEAD
struct Gazeta
{
    char name[50];     // Название газеты
    char data[20];     // Дата выпуска
    int kol;           // Количество экземпляров
    int cena;          // Цена за один экземпляр
======

};


void inputGazetaData(struct Gazeta gazets[], int n)
{

    char name_data[70];

    for (int i = 0; i < n; i++)
    {
        printf("Введите данные для газеты %d:\n", i + 1);

        printf("Название и дата выпуска: ");
        fgets(name_data, sizeof(name_data), stdin);

        name_data[strcspn(name_data, "\n")] = '\0';

        sscanf(name_data, "%s %s", gazets[i].name, gazets[i].data);

        printf("Кол-во: ");
        scanf("%d", &gazets[i].kol);

        printf("Цена: ");
        scanf("%d", &gazets[i].cena);

        getchar();
    }
}

void printGazetaData(struct Gazeta gazets[], int n)
{
    printf("------------------------------------------------------------\n");
    printf("| %-28s | %-10s | %-12s |\n", "          Выпуски", " ", " ");
    printf("| %-26s | %-10s | %-12s |\n", "----------------------------", " ", " ");
    printf("| %-15s | %-10s | %-10s | %-12s |\n", "Название", "Дата", "Кол-во", "Цена, шт.");
    printf("------------------------------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("| %-15s | %-10s | %-10d | %-12d |\n",
            gazets[i].name,
            gazets[i].data,
            gazets[i].kol,
            gazets[i].cena);
        printf("------------------------------------------------------------\n");
    }
}

void swapFirstAndLast(struct Gazeta gazets[], int n)
{
    if (n > 1)
    {
        struct Gazeta temp = gazets[0];
        gazets[0] = gazets[n - 1];
        gazets[n - 1] = temp;
    }
}

int main()
{
    system("chcp 1251"); 
    system("cls");        

	int A[10] = {-10, -5, 0, 3, 7, -2, 8, 12, 15, 1};

		for (int i = 0; i < 10; ++i) {
			std::cout << A[i] << " ";
		}

    struct Gazeta gazets[NUM_GAZETS];

    inputGazetaData(gazets, NUM_GAZETS);

    printf("Исходные данные:\n");
    printGazetaData(gazets, NUM_GAZETS);

    swapFirstAndLast(gazets, NUM_GAZETS);

    printf("Данные после перестановки первой и последней строки:\n");
    printGazetaData(gazets, NUM_GAZETS);

    return 0;
}