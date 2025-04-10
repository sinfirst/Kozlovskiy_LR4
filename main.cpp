#include <iostream>
#include <math.h>
using namespace std;

float readValues(){

}

int firstTask(float x, float y, float z){

}

float secondTask(float x, float y, float z){
    return sqrt(fabs(x)*fabs(y)*fabs(z)) - floor(sqrt(fabs(x)*fabs(y)*fabs(z)));
}

int main(){
    int vibor;
    float x, y, z;
    while(vibor != 0)
    {
        cout<<"Выберите действие\n";
        cout<<"№1 Введение числа x\n";
        cout<<"№2 Введение числа y\n";
        cout<<"№3 Введение числа z\n";
        cout<<"№4 Целая часть суммы 3-х чисел\n";
        cout<<"№5 Дрбная часть среднего геометрического модулей 3-х чисел\n";
        cout<<"Введите ноль чтобы завершить выполнение программы\n";
        cin>>vibor;
        switch(vibor){
        case 1:
            x = readValues();
            break;
        case 2:
            y = readValues();
            break;
        case 3:
            z = readValues();
            break;
        case 4:
            cout<<firstTask(x, y, z)<<endl;
            break;
        case 5:
            cout<<secondTask(x, y, z)<<endl;
            break;
        };
    }
    return 0;
}