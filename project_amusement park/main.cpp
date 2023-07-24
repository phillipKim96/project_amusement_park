#include <stdio.h>
#include <iostream>
#include "Ticket.h"
#include "condition.h"
#include "ageprice.h"
#define _CRT_SECURE_NO_WARNING

int main()

{
	Ticket ticket;
	Ageprice ageprice;
	Condition condition;



	ticket.ticketdisplay();
	try
	{
		ageprice.age();
	}
	catch (const std::exception& e)
	{
		std::cerr << "예외 발생:" << e.what() << '\n';
	}
	return 0;
	condition.special_treatment();


}