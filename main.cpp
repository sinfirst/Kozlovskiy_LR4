#include <iostream>
#include <math.h>
using namespace std;

bool ValidateInputToInt(string input) {
    if (input.empty()) return false;
    try {
        stoi(input);
    } catch (...) {
        return false;
    }
    return true;
}


bool ValidateInputToFloat(string input) {
    if (input.empty()) return false;
    try {
        stof(input);
    } catch (...) {
        return false;
    }
    return true;
}

float EnterNumber(string label) {
    string input;
    cout << label << ": ";
    getline(cin, input);
    while (!ValidateInputToFloat(input)) {
        cout << "Не валидный ввод!\n " << label << ": ";
        getline(cin, input);
    }
    return stof(input);
}

float inputX(){
    float value = EnterNumber("Введите число x");
    return value;
}
float inputY(){
    float value = EnterNumber("Введите число y");
    return value;
}

float inputZ(){
    float value = EnterNumber("Введите число z");
    return value;
}


int firstTask(float x, float y, float z){
    return (int) x + y + z;
}

float secondTask(float x, float y, float z){
    return sqrt(fabs(x)*fabs(y)*fabs(z)) - floor(sqrt(fabs(x)*fabs(y)*fabs(z)));
}

int main(){
    string input;
    int vibor;
    float x, y, z;
    while(true)
    {
        cout<<"Выберите действие\n";
        cout<<"№1 Введение числа x\n";
        cout<<"№2 Введение числа y\n";
        cout<<"№3 Введение числа z\n";
        cout<<"№4 Целая часть суммы 3-х чисел\n";
        cout<<"№5 Дрбная часть среднего геометрического модулей 3-х чисел\n";
        cout<<"Введите 0 чтобы завершить выполнение программы\n";
        getline(cin, input);
        while (!ValidateInputToFloat(input)) {
            cout << "Не валидный ввод!";
            getline(cin, input);
        }
        vibor = stoi(input);
        switch(vibor){
        case 1:
            x = inputX();
            break;
        case 2:
            y = inputY();
            break;
        case 3:
            z = inputZ();
            break;
        case 4:
            cout<<firstTask(x, y, z)<<endl;
            break;
        case 5:
            cout<<secondTask(x, y, z)<<endl;
            break;
        case 0:
            return 0;
        default:
            cout<<"Такого выбора нет!"<<endl;
            break;
        };
    }
    return 0;
}