



////пункт А
//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    double x;
//    cout << "Введите x: ";
//    cin >> x;
//
//    double res;
//
//    if (x <= -2) {
//        res = 0;
//    }
//    else if (x <= 10) {
//        res = x * x + 4 * x + 5;
//    }
//    else {
//        res = x * x + 4 * x - 5;
//    }
//
//    cout << " f = " << res;
//
//    return 0;
//}


//Пункт B 

//#include <iostream>
//using namespace std;
//
//int main()
//{
//    setlocale(LC_ALL, "RU");
//    double x;
//    cout << "Введите x: ";
//    cin >> x;
//
//    double res;
//
//    if (x <= -2) {
//        res = 0;
//    }
//    else if (x <= 0) {
//        res = x * x + 4 * x + 5;
//    }
//    else {
//        res = x * x + 4 * x - 5;
//    }
//
//    
//    if (res != res) { // NaN всегда не равен самому себе
//        cout << "Ошибка: получен нечисловой результат";
//    }
//    else {
//        cout << "f = " << res;
//    }
//
//    return 0;
//}