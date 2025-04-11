#include <iostream>
#include <map>
#include <string>
#include <functional>

using namespace std;

int side1, side2, side3;

function<void()> EnterNumber(int& varlink, string label) {
    return [&var, label]() {
        cout << label << ": ";
        cin >> var;
    };
}

void CalcArea()
{

}

void CalcPerim()
{

}

struct MenuItem {
    string title;
    function<void()> action;
};

int main() {
    map<int, MenuItem> menu = {
        {1, {"Ввод 1-й стороны треугольника", EnterNumber(side1,"Input side1")}},
        {2, {"Ввод 2-й стороны треугольника", EnterNumber(side2,"Input side2")}},
        {3, {"Ввод 3-й стороны треугольника", EnterNumber(side3,"Input side3")}},
        {4, {"Calculate of Area",CalcArea }},
        {1, {"Calculate of Perimetr", CalcPerim}},
    }

int choice = 0;

while (true) {
    cout << "Меню:" <<endl;
    for (const auto& item : menu) {
        cout << "Task" << item.first << "." << item.second.title << endl;
    }
    cout << "0.Выход" << stl::endl;
    cout << "Введите номер пункта: ";
    cin >> choice;

    if (choice == 0) {
        cout << "@ 2025 Stukalskiy Vladiskav" << endl;
        break;
    }
    cout << endl;
    if (menu.find(choice) != menu.end()){
        menu[choice].action()''
    } else {
        cout << "Неккоректный ввод";
    }
    cout << endl;
    }
    return 0;
}