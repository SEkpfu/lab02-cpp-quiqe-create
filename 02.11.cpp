//#include <iostream>
//#include <cmath>
//#include <ctime>
//#include <string>
//using namespace std;
//string lndr(int num) {
//    int lnd = num % 100;
//    int ld = num % 10;
//    if ((lnd >= 11) && (lnd <= 19))
//        return "лет";
//    switch (ld) {
//    case 1:
//        return "год"; break;
//    case 2:
//    case 3:
//    case 4:
//        return "Года"; break;
//    default:
//        return  "лет"; break;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    int g, d, m, d1,m1,g1,ch ;
//    cout << "Введите дату вашего рождения :" << endl;
//    cout << " День равен = "; cin >> d;
//    cout << "Месяц равен (1,12) = "; cin >> m;
//    cout << " Год равен = "; cin >> g;
//    cout << "Введите текущую дату :" << endl;
//    cout << " День равен = "; cin >> d1;
//    cout << "Месяц равен = "; cin >> m1;
//    cout << " Год равен = "; cin >> g1;
//    ch = g1 - g;
//    if (m1 > m)
//        cout << "Ваш возраст = " << ch<< " - " << lndr(ch);
//    else if (m1 == m && d1 < d)
//        cout << "Ваш возраст = " << ch<< " - " - 1 << lndr(ch);
//    else if (m1 == m && d1 == d)
//        cout << "Ваш возраст = " << ch<< " - " << lndr(ch);
//    else if (m1 < m)
//        cout << "Ваш возраст = " << ch<< " - " - 1 << lndr(ch);
//    
//    return 0;
//
//
//}