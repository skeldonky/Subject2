#pragma once
#include <iostream>

using namespace std;

//부모 클래스 Animal
class Animal {

public:
	Animal(){}
	//가상함수 자식 클래스에서 새로 정의 가능
	virtual void makeSound(){}
	virtual ~Animal(){}
};

//자식클래스1 Dog
class Dog :public Animal {

public:
	Dog(string sound):c_sound(sound){}
	void makeSound() { cout << "Dog Sound : " << c_sound << endl; }
private:
	string c_sound;
};

//자식 클래스2 Cat
class Cat :public Animal {
public:
	Cat(string sound) :c_sound(sound) {}
	void makeSound() { cout << "Cat Sound : " << c_sound << endl; }
private:
	string c_sound;
};

//자식 클래스3 Cow
class Cow :public Animal {
public:
	Cow(string sound) :c_sound(sound) {}
	void makeSound() { cout << "Cow Sound : " << c_sound << endl; }
private:
	string c_sound;
};

//다형성 crying에 dog, cat , cow를 넣어 자식클래스의 makeSound를 호출
void crying(Animal* animal)
{
	animal->makeSound();
}
