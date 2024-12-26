#pragma once
#include <iostream>
#include <vector>
//헤더 참조
#include "Animal.h"

class Zoo {
private:
    Animal* animals[10]; // 동물 객체를 저장하는 포인터 배열
protected:
    unsigned int animalCount = 0; // 동물 객체가 전부 저장됬는지 확인용 기본값 0
public:
    // 동물을 동물원에 추가하는 함수
    // - Animal 객체의 포인터를 받아 포인터 배열에 저장합니다.
    // - 같은 동물이라도 여러 번 추가될 수 있습니다.
    // - 입력 매개변수: Animal* (추가할 동물 객체)
    // - 반환값: 없음
    void addAnimal(Animal* animal);

    // 동물원에 있는 모든 동물의 행동을 수행하는 함수
    // - 모든 동물 객체에 대해 순차적으로 소리를 내고 움직이는 동작을 실행합니다.
    // - 입력 매개변수: 없음
    // - 반환값: 없음
    void performActions();

    

    // Zoo 소멸자
    // - Zoo 객체가 소멸될 때, 동물 벡터에 저장된 모든 동물 객체의 메모리를 해제합니다.
    // - 메모리 누수를 방지하기 위해 동적 할당된 Animal 객체를 `delete` 합니다.
    // - 입력 매개변수: 없음
    // - 반환값: 없음
    ~Zoo() { cout << "Zoo 초기화" << endl; };
};

//동물을 동물원에 추가하는 함수
void Zoo::addAnimal(Animal* animal){
    if (animalCount < 10)
    {
        animals[animalCount] = animal;
        animalCount++;
    }
    else {
        cout << "동물 10마리를 전부 지정했습니다" << endl;
    }
}

//동물원에 있는 모든 동물의 행동을 수행하는 함수
void Zoo::performActions() {
    //반복문으로 울음소리 전부 출력
    for (int i = 0; i < 10; i++)
    {
        crying(animals[i]);
    }
}


