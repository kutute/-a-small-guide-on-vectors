#include <iostream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

    int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001); 

    vector<int> v = {1, 2, 3 ,4, 5}; // создать вектор | create a vector

    v.push_back(10); // добавить элемент в конец | add an element to the end

    v.pop_back(); // удалить посследний элемент | delete the last element

    v.erase(v.begin() + 1); // удалить по индексу | delete by index

    v.insert(v.begin() + 1, 100); // вставка элемента |  insertion of an element

    v.clear(); // очистка вектора | vector cleaning

    v.empty(); // проверка пуст ли вектор | Checking whether the vector is empty.

    int min_val = *min_element(v.begin(), v.end()); // найти минимальное значение | find the minimum value

    int max_val = *max_element(v.begin(), v.end()); // найти макс значение | find the maximum value

        
    sort(v.begin(), v.end()); // сортировка по возрастанию | ascending order sorting

    reverse(v.begin(), v.end()); // реверс массива | array reversal
 
    for (int i = 0; i < v.size(); i++) { // цикл | cycle
    cout << v[i];

    for ( int x : v) // быстрый вывод массива | quick array output
    cout << x << " "; // быстрый вывод массива | quick array output

     int len = v.size(); // длинна массива | the length of the array


    return 0;

} 

