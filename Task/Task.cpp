#include "Header.h"

class Worker
{
public:
    string name;
    float years;        // �������� ��� !!!!! � ������ ������ ��� ���������� ���, ����������� �� ������ � ���� �����
    float salary;          // �/�
    float baseRate = 100000;
    string chief;

    //virtual float CountSalary()
    //{
    //    //return 1;
    //}
    
};

class Employee : public Worker
{
    float CountSalary(float years, float baseRate)
    {
        float salary;
        this->baseRate = baseRate;
        this->years = years;
        if (years>=10)
        {
            salary = baseRate + baseRate * 0.3;
        }
        else
        {
            salary = baseRate + baseRate * years * 0.05f;
        }
        return salary;
    }
};

class Manager : public Worker
{
    int numberOfSubordinatesFirst;     // ���������� ����������� ������� ������
    float CountSalary(float years, float baseRate, int numberOfSubordinatesFirst)        // ���������� ����������� ������� ������
    {
        float salary;
        this->baseRate = baseRate;
        this->years = years;
        this->numberOfSubordinatesFirst = numberOfSubordinatesFirst;
        if (years >= 8)
        {
            salary = baseRate + baseRate * 0.4f + baseRate *0.005f* numberOfSubordinatesFirst;
        }
        else
        {
            salary = baseRate + baseRate * years * 0.05f+0.005f * numberOfSubordinatesFirst;
        }
        return salary;
    }
};

class Sales :public Worker
{
    int numberOfSubordinatesFirst;     // ���������� ����������� ������� ������
    int numberOfSubordinatesSecond;
    float CountSalary(float years, float baseRate, int numberOfSubordinates, int numberOfSubordinatesSecond)        // ���������� ���� ����������� 
    {
        float salary;
        this->baseRate = baseRate;
        this->years = years;
        this->numberOfSubordinatesFirst = numberOfSubordinatesFirst;
        this->numberOfSubordinatesSecond = numberOfSubordinatesSecond;
        if (years >= 8)
        {
            salary = baseRate + baseRate * 0.4 + baseRate * 0.005 * (numberOfSubordinates+ numberOfSubordinatesSecond);
        }
        else
        {
            salary = baseRate + baseRate * years * 0.05 + 0.005 * (numberOfSubordinates + numberOfSubordinatesSecond);
        }
        return salary;
    }
};


int main()
{
    Manager A;
    //A.name = "Ivan";
    cout << "Hello World!\n";
}
