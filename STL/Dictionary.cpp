#include <iostream>
#include <map>
#include <Windows.h>
#include <fstream>
using namespace std;

typedef pair<string, string> word;

void Input(multimap<string, string>& dict)
{
    string str1, str2;
    cout << "введите слово на англ -> ";
    cin >> str1;
    cout << "введите перевод -> ";
    cin >> str2;
    dict.insert(word(str1, str2));
}
void Print(multimap<string, string>& dict)
{
    for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
    {
        cout << ptr->first << " -> " << ptr->second << endl;
    }
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    multimap<string, string> dict;

    ofstream out("Text.txt");

    int v;
    do
    {
        cout << "1. Add word\n2. Print All\n3. Find\n 4. Exit\n -> ";
        cin >> v;
        switch (v)
        {
        case 1:
            system("cls");
            Input(dict);
            break;
        case 2:
            system("cls");
            Print(dict);
            break;
        case 3:
            system("cls");
            string str;
            cout << "Enter word -> ";
            cin >> str;
            int count = 0;
            for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
            {
                if (ptr->first == str) {
                    count++;
                }
            }

            if (count == 0)// если не нашли !!
            {
                cout << "Нет такого слова в словаре!!!! Ищите в другом месте!!!\n";
            }
            else // Если нашли !!!
            {
                cout <<"Слово повторяется " << count <<" раз" << endl;
            }
            break;
        }
    } while (v != 4);

    for (auto ptr = dict.begin(); ptr != dict.end(); ptr++)
    {
        string a = ptr->first;
        string b = ptr->second;

        out << a<<" | " << b << "\n";
    }
    out.close();

}

/*
* Реализовать:
* 1. работа с текстовым файлом
* 2. при поиске, так же показать количество повторов(сколько раз слово встречается в словаре).

*/