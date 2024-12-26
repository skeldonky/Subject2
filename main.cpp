//과제 2
#include <iostream>
//헤더 참조
#include "Animal.h"
#include "Zoo.h"

using namespace std;

//시작할때 동적 메모리 부여
Dog* dog = new Dog("Bow Bow");
Cat* cat = new Cat("Meow~");
Cow* cow = new Cow("Moooooo");


// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
Animal* createRandomAnimal()
{
    //배열에 일단 저장해줍니다.
    Animal* ani[3] = { dog, cat, cow };

    Animal* res;
    res = ani[rand() % 3];

    //rand사용 0, 1, 2 중에서 숫자를 랜덤으로 하여 랜덤 동물을 저장
    return res;
}

int main()
{
    //동물 울음소리
    /*Dog Dog("Bow Bow");
    Cat Cat("Meow~");
    Cow Cow("Moooooo");*/

    //Animal을 포인터 타입으로 생성
    Animal* animal[3] = {dog, cat, cow};

    //반복문으로 울음소리 호출
    for (int i = 0; i < 3; i++)
    {
        crying(animal[i]);
    }

    cout << "필수 끝" << endl;

    //Zoo선언
    Zoo zoo;

    //반복문으로 동물 10개 넣어줍니다.
    for (int i = 0; i < 10; i++)
    {
        Animal* ani = createRandomAnimal();
        zoo.addAnimal(ani);
    }
    // 울음소리 출력
    zoo.performActions();

    //끝날때 동적 메모리 해제?(맞는 방법인지 모르겠음...)
    delete dog;
    delete cat;
    delete cow;

    return 0;
}