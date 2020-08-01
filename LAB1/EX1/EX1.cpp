﻿// EX1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int correct = 0, picks[2], lotterys[2];

    srand(time(0));

    for (int i = 0; i < 2; i++)
    {
        lotterys[i] = rand() % 10;
    }

    std::cout << "Enter your first lottery pick: ";
    std::cin >> picks[0];
    std::cout << "Enter your second lottery pick: ";
    std::cin >> picks[1];

    std::cout << "The lottery number is " << lotterys[0] << " and " << lotterys[1] << "\n";

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            if (picks[i] == lotterys[j])
            {
                correct += 1;

                // avoid re select
                lotterys[j] = -1;
            }
        }
    }

    switch (correct)
    {
    case 0:
        std::cout << "Sorry: no match";
        break;
    case 1:
        std::cout << "Match one diger: you win $1,000";
        break;
    case 2:
        std::cout << "Exact match: you win $10,000";
        break;
    default:
        std::cout << "Not Handle";
        break;
    }
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示:
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
