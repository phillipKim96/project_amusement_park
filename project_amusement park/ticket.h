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
		"�߸��� �����Դϴ�. �ٽ� �Է��� �ּ���.",
		"�ְ���",
		"�߰���"
	};

public:
	std::string getticketChoice(int choice) {
		if (choice >= 0 && choice < 3) {
			return Ticketdaynight[choice];
		}
		return "�߸��� �����Դϴ�. �ٽ� �Է��� �ּ���.";
	}

	void ticketdisplay() {
		while (true) {
			std::cout << "=================" << '\n';
			std::cout << "������ �����ϼ���." << '\n';
			std::cout << "1.�ְ���\n2.�߰���" << std::endl;
			std::cout << "=================" << '\n';
			std::cin >> choice; // choice�� 1 or 2���� ����
			std::string selectTicket = getticketChoice(choice);
			std::cout << selectTicket << std::endl;
			if (selectTicket != "�߸��� �����Դϴ�. �ٽ� �Է��� �ּ���.") {
				break; //���ѷ��� ������
			}
			// �Է� ���� ����
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		}
	};
