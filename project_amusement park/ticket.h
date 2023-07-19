#include <stdio.h>
#include <string>
#include <iostream>
#include "ticket_price.h"


class Ticket
{
protected:
	std::string Ticketdaynight[3] = {
		"잘못된 선택입니다. 다시 입력해 주세요.",
		"주간권",
		"야간권"
	};
	int id[13];
	int choice;


public:
	std::string getticketChoice(int choice) {
		if (choice >= 0 && choice < 3) {
			return Ticketdaynight[choice];
		}
		return "잘못된 선택입니다. 다시 입력해 주세요.";
	}

	void ticketdisplay() {
		while (true) {
			std::cout << "=================" << '\n';
			std::cout << "권종을 선택하세요." << '\n';
			std::cout << "1.주간권\n2.야간권" << std::endl;
			std::cout << "=================" << '\n';
			std::cin >> choice; // choice에 1 or 2값을 저장
			std::string selectTicket = getticketChoice(choice);
			std::cout << selectTicket << std::endl;
			if (selectTicket != "잘못된 선택입니다. 다시 입력해 주세요.") {
				break; //무한루프 나가기
			}
			// 입력 버퍼 비우기
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}


	void age() {
		std::cout << "=================" << '\n';
		std::cout << "주민 번호를 입력하세요." << '\n';
		//std::cin >> id[13];
		for (int i = 0; i < 13; i++) {
			scanf_s("%1d",&id[i]);
		}
		for (int i = 0; i < 13; i++) {
			std::cout << id[i];
		}
		std::cout << "=================" << '\n';
	}

};
