#include <stdio.h>
#include <string>
#include <iostream>
#include <stdexcept>


class Ageprice
{
protected:
    int id[13];
    int baby, children, teenager, adult, senior;

public:
    void age()
    {
        std::cout << "=================" << '\n';
        std::cout << "�ֹ� ��ȣ�� �Է��ϼ���." << '\n';

        bool validInput = false; // ��ȿ�� �Է������� ��Ÿ���� ����

        while (!validInput) // ��ȿ�� �Է��� ���� ������ �ݺ�
        {
            for (int i = 0; i < 13; i++)
            {
                if (std::cin >> id[i])
                {
                    if (id[i] < 0 || id[i] > 9)
                    {
                        throw std::invalid_argument("�߸��� �Է��Դϴ�. 0���� 9 ������ ���ڸ� �Է����ּ���.");
                    }
                }
                else
                {
                    // �߸��� �Է� ���� (��: ���ڿ�)�� ���� ���
                    throw std::invalid_argument("�߸��� �Է� �����Դϴ�. ���ڸ� �Է����ּ���.");
                }
            }

            if (id[0] == 9)
            {
                std::cin >> baby;
                std::cout << "����";
            }
            else if (id[0] == 8)
            {
                std::cin >> children;
                std::cout << "����";
            }
            else if (id[0] == 7)
            {
                std::cin >> teenager;
                std::cout << "û�ҳ�";
            }
            else if (id[0] == 6)
            {
                std::cin >> adult;
                std::cout << "����";
            }
            else if (id[0] == 5)
            {
                std::cin >> senior;
                std::cout << "���";
            }
            else
            {
                // �߸��� �ֹι�ȣ ���ڸ��� ���� ���
                throw std::invalid_argument("�߸��� �ֹι�ȣ�Դϴ�.");
            }

            validInput = true; // ��ȿ�� �Է��� ���� ��� �ݺ����� ���������ϴ�.
        }

        std::cout << "=================" << '\n';
    }
};
