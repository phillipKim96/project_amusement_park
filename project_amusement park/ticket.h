#include <stdio.h>
#include <string>
#include <iostream>
#include "ticket_price.h"


class Ticket
{
protected:
	int choice;
	int baby, children, teenager, adult, sinior;
	std::string Ticketdaynight[3] = {
		"잘못된 선택입니다. 다시 입력해 주세요.",
		"주간권",
		"야간권"
	};

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
	};
