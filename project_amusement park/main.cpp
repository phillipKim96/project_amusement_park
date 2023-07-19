#include <stdio.h>
#include <iostream>
#include "Ticket.h"

#define _CRT_SECURE_NO_WARNING

int main()
{
	Ticket ticket;
	Ticket_price price;
	 
	ticket.ticketdisplay();
	ticket.age();

	return 0;
}