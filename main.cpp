//���� 2
#include <iostream>
//��� ����
#include "Animal.h"
#include "Zoo.h"

using namespace std;

//�����Ҷ� ���� �޸� �ο�
Dog* dog = new Dog("Bow Bow");
Cat* cat = new Cat("Meow~");
Cow* cow = new Cow("Moooooo");


// ���� ������ �����ϴ� �Լ�
// - 0, 1, 2 �� �ϳ��� ������ �����Ͽ� ���� Dog, Cat, Cow ��ü �� �ϳ��� �������� �����մϴ�.
// - ������ ��ü�� Animal Ÿ���� �����ͷ� ��ȯ�˴ϴ�.
// - �Է� �Ű�����: ����
// - ��ȯ��: Animal* (������ ���� ��ü�� ������)
Animal* createRandomAnimal()
{
    //�迭�� �ϴ� �������ݴϴ�.
    Animal* ani[3] = { dog, cat, cow };

    Animal* res;
    res = ani[rand() % 3];

    //rand��� 0, 1, 2 �߿��� ���ڸ� �������� �Ͽ� ���� ������ ����
    return res;
}

int main()
{
    //���� �����Ҹ�
    /*Dog Dog("Bow Bow");
    Cat Cat("Meow~");
    Cow Cow("Moooooo");*/

    //Animal�� ������ Ÿ������ ����
    Animal* animal[3] = {dog, cat, cow};

    //�ݺ������� �����Ҹ� ȣ��
    for (int i = 0; i < 3; i++)
    {
        crying(animal[i]);
    }

    cout << "�ʼ� ��" << endl;

    //Zoo����
    Zoo zoo;

    //�ݺ������� ���� 10�� �־��ݴϴ�.
    for (int i = 0; i < 10; i++)
    {
        Animal* ani = createRandomAnimal();
        zoo.addAnimal(ani);
    }
    // �����Ҹ� ���
    zoo.performActions();

    //������ ���� �޸� ����?(�´� ������� �𸣰���...)
    delete dog;
    delete cat;
    delete cow;

    return 0;
}