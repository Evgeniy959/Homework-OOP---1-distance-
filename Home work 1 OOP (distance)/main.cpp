#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

class Point	//��� ������ Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		this;
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//                    Methods:

	double distance(const Point& other)const
	{
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double dis = sqrt(x_distance * x_distance + y_distance * y_distance);
		return dis;
	}
};

//                     �������:

double distance(const Point& A, const Point& B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double dis = sqrt(x_distance * x_distance + y_distance * y_distance);
	return dis;
}
void main()
{
	setlocale(LC_ALL, "");
	double x, y;
	double dis;
	cout << "������� ���������� ������ ����� �� ��� X: "; cin >> x;
	cout << "������� ���������� ������ ����� �� ��� Y: "; cin >> y;
	Point A(x, y);
	cout << "������� ���������� ������ ����� �� ��� X: "; cin >> x;
	cout << "������� ���������� ������ ����� �� ��� Y: "; cin >> y;
	Point B(x, y);
	dis = distance(A, B);
	cout << "�������� ����� " << endl;
	cout << "���������� �� ����� = " << dis << endl;
	cout << "----------------------------------------------------" << endl;
	cout << "������� ���������� ������ ����� �� ��� X: "; cin >> x;
	cout << "������� ���������� ������ ����� �� ��� Y: "; cin >> y;
	cout << "������� ���������� ������ ����� �� ��� X: "; cin >> x;
	cout << "������� ���������� ������ ����� �� ��� Y: "; cin >> y;
	A.set_x(x); A.set_y(y);
	cout << "�������� ������� " << endl;
	cout << "���������� ����� ����� ������� = " << dis << endl;
}
