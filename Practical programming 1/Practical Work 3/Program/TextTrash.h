#pragma once
#include <iostream>
using namespace std;

float Cost1(float Price) {
    if (Price < 200) {
        return 0;
    }
    else if (200 <= Price && Price < 500) {
        return Price * 0.03;
    }
    else if (500 <= Price && Price < 800) {
        return Price * 0.06;
    }
    else if (Price && Price < 1000) {
        return Price * 0.07;
    }
    else {
        return Price * 0.10;
    }
}

void Task1TextOutput() {
    cout << endl << "\t\t\t\t\t\t  ������� 1.19" << endl << endl << "� ������������� ��������� ������ ���, ����� �������� ������� �� 4, �������� ����������, �� ����������� ���, ������� ������� �� 100 � �� ������� �� 400 ������. ���������� ����� ���� � ���� �� ������ ����." << endl << endl << "������� ��� ���: ";
}

void Task2TextOutput() {
    cout << endl << "\t\t\t\t\t\t  ������� 2.24" << endl << endl << "�������� ������� ������. ����� ���������: ������� 1 ����� ������ ������� � ���� �� ����� 50 �� �����, ������� ������� ����� � �� ����� 60 �� �  ����, ������� 3 ����� � �� ����� 70 �� � ����. ���� ����, �� ������� ������ �������, ����������, �������� �� �� ������� �����." << endl;
}

void Task3TextOutput() {
    cout << endl << "\t\t\t\t\t\t  ������� 3.4" << endl << endl << "��� ������� ������ �� ����� �� 200 �� 500 ��� ��������������� ������ 3%, ��� ������� ������ �� ����� �� 500 �� 800 � ������ 5%, ��� ������� ������  �� ����� �� 800 �� 1000 ��� � ������ 7%, ����� 1000 ��� � ������ 10%. ���������� �������� 8 ������� ����� �� ���� �1 � ��� ����� ������ �� ����  �2. ������� �� ��������?" << endl;
}

void NotLeapYear() {
    cout << endl << "��� �� ���������� ���, ���� � ���� �����: ";
}
void LeapYear() {
    cout << endl << "��� ���������� ���, ���� � ���� �����: ";
}

void DayFunction() {
    cout << "����." << endl;
}

void �ourseInput() {
    cout << endl << "������� ����: ";
}

void AppleInput() {
    cout << endl << "������� ������� ��������� ����� ������ �������: ";
}

void CourseNumber() {
    cout << "����� ��� �������: ";
}

void CourseNone() {
    cout << " ������������.";
}

void StudentCouldNot() {
    cout << endl << "������� �� �������� ������� �����, ��� ��������� ";
}

void DailyNormFalse() {
    cout << "-��� ����� ������� ����� ���������� ";
}

void ApplesInput() {
    cout << " ��������� �����" << " ������� ���������� ";
}
void ApplesInput2() {
    cout << " ��������� �����.";
}

void ApplesInputElse() {
    cout << " ��������� �����. *�������� ������� ������� ������*." << endl;
}

void StudentCouldTrue() {
    cout << endl << "������� �������� ������� ����� ��� ������ �����. ������� ����� ";
}

void StudentCouldTrueText() {
    cout << "- ��� ����� ���������� ";
}

void OverNorm() {
    cout << " ������� ������ ����� ����� ";
}

void OverNormeAJGoodHorse() {
    cout << " ��������� �����. * �������� ��������� * " << endl;
}

void PriceWallpaper() {
    cout << endl << "������� ���� ������ �����: ";
}

void PaintBottle() {
    cout << endl << "����� ���� ����� ������: ";
}

void CalculationAmount() {
    cout << endl << "���� ������ ������ ����� ����������: ";
}

void CalculationAmount1() {
    cout << endl << "C����� �� 1 ������� ������ ���������: ";
}

void CalculationAmount2() {
    cout << endl << "���� ����� ����� ������ ����������: ";
}

void CalculationAmount3() {
    cout << endl << "�� ��������� 8 ������� �����. ���� � ������ ������ ���������: ";
}

void CalculationAmount4() {
    cout << endl << "�� ��������� 2 ����� ������. ���� � ������ ������ ���������: ";
}

void CalculationAmount5() {
    cout << endl << "����� ��������� ������� ���������:  ";
}

void Bits() {
    cout << " ����." << endl;
}
void line() {
    cout << "------------------------------------------------------------" << endl;
}