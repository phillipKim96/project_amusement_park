#include <stdio.h>
#include <string>
#include <iostream>


class Condition
{
protected:

	std::string Conditionvalue[5] = {
	"����",
	"�����",
	"����������",
	"���ڳ�",
	"�ӻ��"
	};
	int condition;

public:

	std::string getticketCondition(int condition) {
		if (condition >= 0 && condition < 5) {
			return Conditionvalue[condition];
		}
		return "�߸��� �����Դϴ�. �ٽ� �Է��� �ּ���.";
	}

	void special_treatment() {
		while (true) {
			std::cout << "=================" << '\n';
			std::cout << "�������� �����ϼ���" << '\n';
			std::cout << "0. ����'\n' 1.�����'\n' 2.����������'\n' 3. ���ڳ�'\n' 4.�ӻ��'\n'";
			std::cin >> condition;
			std::string selectCondition = getticketCondition(condition);
			std::cout << selectCondition << std::endl;
			if (selectCondition != "�߸��� �����Դϴ�. �ٽ� �Է��� �ּ���.") {
				break; //���ѷ��� ������
			}
			// �Է� ���� ����
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
};
