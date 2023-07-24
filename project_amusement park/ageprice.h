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
        std::cout << "주민 번호를 입력하세요." << '\n';

        bool validInput = false; // 유효한 입력인지를 나타내는 변수

        while (!validInput) // 유효한 입력이 들어올 때까지 반복
        {
            for (int i = 0; i < 13; i++)
            {
                if (std::cin >> id[i])
                {
                    if (id[i] < 0 || id[i] > 9)
                    {
                        throw std::invalid_argument("잘못된 입력입니다. 0에서 9 사이의 숫자를 입력해주세요.");
                    }
                }
                else
                {
                    // 잘못된 입력 형식 (예: 문자열)이 들어온 경우
                    throw std::invalid_argument("잘못된 입력 형식입니다. 숫자를 입력해주세요.");
                }
            }

            if (id[0] == 9)
            {
                std::cin >> baby;
                std::cout << "유아";
            }
            else if (id[0] == 8)
            {
                std::cin >> children;
                std::cout << "소인";
            }
            else if (id[0] == 7)
            {
                std::cin >> teenager;
                std::cout << "청소년";
            }
            else if (id[0] == 6)
            {
                std::cin >> adult;
                std::cout << "성인";
            }
            else if (id[0] == 5)
            {
                std::cin >> senior;
                std::cout << "경로";
            }
            else
            {
                // 잘못된 주민번호 앞자리가 들어온 경우
                throw std::invalid_argument("잘못된 주민번호입니다.");
            }

            validInput = true; // 유효한 입력이 들어온 경우 반복문을 빠져나갑니다.
        }

        std::cout << "=================" << '\n';
    }
};
