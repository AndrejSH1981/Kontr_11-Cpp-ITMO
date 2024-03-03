// Kontr_11_2-Cpp-ITMO.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
# include <windows.h>

using namespace std;


// class Point - это класс Point, Точки x и y - поля вещественного типа
class Point {
public:
    double x;
    double y;

    Point(double x, double y) : x(x), y(y) {
    }

    
    // Расстояние до центра координат (√x^2+y^2)
    double ToСenter() const {
        //cout << sqrt(pow(x, 2) + pow(y, 2)) << endl;
        return sqrt(pow(x, 2) + pow(y, 2));
    }

    friend ostream& operator<<(ostream& out, const Point& v) {
        return out << '(' << v.x << ", " << v.y << ')';
    }

    friend bool operator<(const Point& lhs, const Point& rhs) {
        bool w = false;
        if (lhs.ToСenter() < rhs.ToСenter()) {
            //cout << lhs.ToСenter() << "<" << rhs.ToСenter() << endl;
            w = true;
        }
        else {
            w = false;
        }
        return w;
    }
};

int main() {
    vector<Point> v;
    v.push_back(Point(1, 2));
    v.push_back(Point(10, 12));
    v.push_back(Point(21, 7));
    v.push_back(Point(4, 8));
    sort(v.begin(), v.end());

    for (auto& point : v) {
        cout << point << '\n';
    }

    //for (Point& point : v) {
    //    cout << point << '\n';
    //}


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
