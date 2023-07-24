#include <stdio.h>
#include <string>
#include <iostream>


class Condition
{
protected:

	std::string Conditionvalue[5] = {
	"없음",
	"장애인",
	"국가유공자",
	"다자녀",
	"임산부"
	};
	int condition;

public:

	std::string getticketCondition(int condition) {
		if (condition >= 0 && condition < 5) {
			return Conditionvalue[condition];
		}
		return "잘못된 선택입니다. 다시 입력해 주세요.";
	}

	void special_treatment() {
		while (true) {
			std::cout << "=================" << '\n';
			std::cout << "우대사항을 선택하세요" << '\n';
			std::cout << "0. 없음'\n' 1.장애인'\n' 2.국가유공자'\n' 3. 다자녀'\n' 4.임산부'\n'";
			std::cin >> condition;
			std::string selectCondition = getticketCondition(condition);
			std::cout << selectCondition << std::endl;
			if (selectCondition != "잘못된 선택입니다. 다시 입력해 주세요.") {
				break; //무한루프 나가기
			}
			// 입력 버퍼 비우기
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
};
