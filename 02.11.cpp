//#include <iostream>
//#include <cmath>
//#include <ctime>
//#include <string>
//using namespace std;
//string lndr(int num) {
//    int lnd = num % 100;
//    int ld = num % 10;
//    if ((lnd >= 11) && (lnd <= 19))
//        return "���";
//    switch (ld) {
//    case 1:
//        return "���"; break;
//    case 2:
//    case 3:
//    case 4:
//        return "����"; break;
//    default:
//        return  "���"; break;
//    }
//}
//
//int main() {
//    setlocale(LC_ALL, "RU");
//    int g, d, m, d1,m1,g1,ch ;
//    cout << "������� ���� ������ �������� :" << endl;
//    cout << " ���� ����� = "; cin >> d;
//    cout << "����� ����� (1,12) = "; cin >> m;
//    cout << " ��� ����� = "; cin >> g;
//    cout << "������� ������� ���� :" << endl;
//    cout << " ���� ����� = "; cin >> d1;
//    cout << "����� ����� = "; cin >> m1;
//    cout << " ��� ����� = "; cin >> g1;
//    ch = g1 - g;
//    if (m1 > m)
//        cout << "��� ������� = " << ch<< " - " << lndr(ch);
//    else if (m1 == m && d1 < d)
//        cout << "��� ������� = " << ch<< " - " - 1 << lndr(ch);
//    else if (m1 == m && d1 == d)
//        cout << "��� ������� = " << ch<< " - " << lndr(ch);
//    else if (m1 < m)
//        cout << "��� ������� = " << ch<< " - " - 1 << lndr(ch);
//    
//    return 0;
//
//
//}