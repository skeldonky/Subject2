#pragma once
#include <iostream>
#include <vector>
//��� ����
#include "Animal.h"

class Zoo {
private:
    Animal* animals[10]; // ���� ��ü�� �����ϴ� ������ �迭
protected:
    unsigned int animalCount = 0; // ���� ��ü�� ���� �������� Ȯ�ο� �⺻�� 0
public:
    // ������ �������� �߰��ϴ� �Լ�
    // - Animal ��ü�� �����͸� �޾� ������ �迭�� �����մϴ�.
    // - ���� �����̶� ���� �� �߰��� �� �ֽ��ϴ�.
    // - �Է� �Ű�����: Animal* (�߰��� ���� ��ü)
    // - ��ȯ��: ����
    void addAnimal(Animal* animal);

    // �������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
    // - ��� ���� ��ü�� ���� ���������� �Ҹ��� ���� �����̴� ������ �����մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    void performActions();

    

    // Zoo �Ҹ���
    // - Zoo ��ü�� �Ҹ�� ��, ���� ���Ϳ� ����� ��� ���� ��ü�� �޸𸮸� �����մϴ�.
    // - �޸� ������ �����ϱ� ���� ���� �Ҵ�� Animal ��ü�� `delete` �մϴ�.
    // - �Է� �Ű�����: ����
    // - ��ȯ��: ����
    ~Zoo() { cout << "Zoo �ʱ�ȭ" << endl; };
};

//������ �������� �߰��ϴ� �Լ�
void Zoo::addAnimal(Animal* animal){
    if (animalCount < 10)
    {
        animals[animalCount] = animal;
        animalCount++;
    }
    else {
        cout << "���� 10������ ���� �����߽��ϴ�" << endl;
    }
}

//�������� �ִ� ��� ������ �ൿ�� �����ϴ� �Լ�
void Zoo::performActions() {
    //�ݺ������� �����Ҹ� ���� ���
    for (int i = 0; i < 10; i++)
    {
        crying(animals[i]);
    }
}


