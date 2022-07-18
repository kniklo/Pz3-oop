#pragma once
#include <iostream>
#include <ctime>

using namespace std;

class Food //������������ ����������� ����� ��� ����� �� ���� ����� ����������� �������
{
protected:
	string _name;			//��������
	time_t _productionDate;	//���� ������������
	int _expirationTime;	//���� �������� ����
	float _energy100;		//�������������� �������� 100 � ���
public:		
	void set_name(string _name);
	string get_name();
	void set_productionDate(time_t productionDate);
	time_t get_productionDate();
	void set_expirationTime(int expirationTime);
	int get_expirationTime();
	void set_energy100(float expirationTime);
	float get_energy100();

	virtual string smell() = 0; //����������� ������� - ����� ���
	virtual string recipe() = 0; //����������� ������� - ������ �������������

	virtual void getInfo();
	virtual void setInfo();

	virtual void ToPrint();
};