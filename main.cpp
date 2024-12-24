//과제 2
#include <iostream>
//헤더 참조
#include "Animal.h"

using namespace std;

int main()
{
    //동물 울음소리
    Dog Dog("Bow Bow");
    Cat Cat("Meow~");
    Cow Cow("Moooooo");

    //Animal을 포인터 타입으로 생성
    Animal* animal[] = {&Dog, &Cat, &Cow};

    //반복문으로 울음소리 호출
    for (int i = 0; i < 3; i++)
    {
        crying(animal[i]);
    }


    return 0;
}