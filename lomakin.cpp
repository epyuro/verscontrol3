#include "constantInFunction.h"



//Second commit in BRANCH
/*
�������� ����� ������ ������ ��������� ������ ����� �������
*/
short constantInFunction::getAppearanceCount() 
{
	return this->countInFunction;
}

/*
* �������� ����� ������,� ������� ��������� �����������,�� ������� ����� �� �������
\param[in] index - ������ ������,��� ��������� ���������, � �������
*/
short constantInFunction::getAppearingString(int index) 
{
	if (index >= 0 && index <= countInFunction)
		return this->appearingStrings[index];
	else
		return -1;
}


/*
�������� ������� ��������� �� ����������� ������
\param[in] string - ����� ������,�� ������� ��������� ���������
*/
void constantInFunction::addNewAppearance(int string)	
{
	if (string > 0 && string<MAX_STRING_NUMBER)
		this->appearingStrings[countInFunction] = string;	//�������� ������� ��������� �� �������� ������,���� ��� �� ��������
	countInFunction += 1;	//��������� ����� ������ ���� ��������� � ������� �� 1
}
// First commit in BRANCH
/*
������ ��� ���������
\param[in] name - ���,���������� ���������
*/
void constantInFunction::setName(std::string _name)
{
	this->name = _name;
}
