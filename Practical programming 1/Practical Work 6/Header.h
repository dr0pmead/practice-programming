#pragma once
#include <iostream>
using namespace std;

double Square(double FirstSide, double  SecondSide, double  ThirdSide) {
	double Perimeter = (FirstSide + SecondSide + ThirdSide) / 2;
	double TreeSquare = sqrt(Perimeter * (Perimeter - FirstSide) * (Perimeter - SecondSide) * (Perimeter - ThirdSide));
	return TreeSquare;
}
int Factorial(int Number)
{
	if (Number < 1)
		return 0;

	if (Number == 1)
		return 1;

	return Number * Factorial(Number - 1);
}

string TextTask_1 = "\n\t\t\t���� ������� ���� �����. ��������� ������� �������������� ������� ���� �����. \n";
string TextTask_2 = "\n\t\t\t��������� ������� ����, ��������� �� ������� ������������� � ���������� ���������. \n";
string TextTask_3 = "\n\t\t\t��������� �������� ��������� a! + b! + c! + d! \n";

string ArithmeticMeanVolumesText = "\n C������ �������������� ������� ���� ����� �����: ";
string TreeSquareText = "\n ������� ����, ����������: ";
string FactorialText = "\n �������� ��������� ������ ����������� �����: ";

string RadiusFirstBall = "\n ������� ������ ������� ����: ";
string RadiusSecondBall = "\n ������� ������ ������� ����: ";
string RadiusThirdBall = "\n ������� ������ �������� ����: ";

string FirstSideFirstTriangleText = "\n ������� ������ ������� ������� ������������:  ";
string SecondSideFirstTriangleText = "\n ������� ������ ������� ������� ������������:  ";
string ThirdSideFirstTriangleText = "\n ������� ������ ������� ������� ������������:  ";

string FirstSideSecondTriangleText = "\n ������� ������ ������� ������� ������������:  ";
string SecondSideSecondTriangleText = "\n ������� ������ ������� ������� ������������:  ";
string ThirdSideSecondTriangleText = "\n ������� ������ ������� ������� ������������:  ";

string FirstSideThirdTriangleText = "\n ������� ������ ������� �������� ������������:  ";
string SecondSideThirdTriangleText = "\n ������� ������ ������� �������� ������������:  ";
string ThirdSideThirdTriangleText = "\n ������� ������ ������� �������� ������������:  ";

string FirstSideFourthTriangleText = "\n ������� ������ ������� ��������� ������������:  ";
string SecondSideFourthTriangleText = "\n ������� ������ ������� ��������� ������������:  ";
string ThirdSideFourthTriangleText = "\n ������� ������ ������� ��������� ������������:  ";

string FactorialFirstNumber = "\n ������� ��������� ������� �����:  ";
string FactorialSecondNumber = "\n ������� ��������� ������� �����:  ";
string FactorialThirdNumber = "\n ������� ��������� �������� �����:  ";
string FactorialFourthNumber = "\n ������� ��������� �������� �����:  ";

string Line = "\n\n------------------------------------------------------------------------------------------------------------------------";