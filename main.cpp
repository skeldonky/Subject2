//���� 2
#include <iostream>
//��� ����
#include "Animal.h"

using namespace std;

int main()
{
    //���� �����Ҹ�
    Dog Dog("Bow Bow");
    Cat Cat("Meow~");
    Cow Cow("Moooooo");

    //Animal�� ������ Ÿ������ ����
    Animal* animal[] = {&Dog, &Cat, &Cow};

    //�ݺ������� �����Ҹ� ȣ��
    for (int i = 0; i < 3; i++)
    {
        crying(animal[i]);
    }


    return 0;
}