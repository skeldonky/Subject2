#pragma once
#include <iostream>

using namespace std;

//�θ� Ŭ���� Animal
class Animal {

public:
	Animal(){}
	//�����Լ� �ڽ� Ŭ�������� ���� ���� ����
	virtual void makeSound(){}
	virtual ~Animal(){}
};

//�ڽ�Ŭ����1 Dog
class Dog :public Animal {

public:
	Dog(string sound):c_sound(sound){}
	void makeSound() { cout << "Dog Sound : " << c_sound << endl; }
private:
	string c_sound;
};

//�ڽ� Ŭ����2 Cat
class Cat :public Animal {
public:
	Cat(string sound) :c_sound(sound) {}
	void makeSound() { cout << "Cat Sound : " << c_sound << endl; }
private:
	string c_sound;
};

//�ڽ� Ŭ����3 Cow
class Cow :public Animal {
public:
	Cow(string sound) :c_sound(sound) {}
	void makeSound() { cout << "Cow Sound : " << c_sound << endl; }
private:
	string c_sound;
};

//������ crying�� dog, cat , cow�� �־� �ڽ�Ŭ������ makeSound�� ȣ��
void crying(Animal* animal)
{
	animal->makeSound();
}
