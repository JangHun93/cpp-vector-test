#include <iostream>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

// 1 ~ 10까지 숫자를 동적으로 할당받아 배열에 넣고
// 입력받은 숫자를 임의 위치에 추가해서 배열 크기를 늘리고
// 출력하는 프로그램을 만들어 보세요.
void SetArrayRandomlyByInput(int *numList)
{
    // 임의의 위치
    int randomIndex = rand() % 10;

    // 입력 값
    int inputNumber = 0;
    cout << "숫자을 입력하세요: ";
    cin >> inputNumber;

    int *newList = new int;
    for (int i = 0; i <= randomIndex; i++)
    {
        if (i == randomIndex)
        {
            // 랜덤 인덱스
            int temp = newList[randomIndex];
            newList[randomIndex] = inputNumber;
            newList[randomIndex + 1] = temp;
        }
        else
        {
            newList[i] = numList[i];
        }
    }

    for (int i = randomIndex; i < 11; i++)
    {
        newList[i + 1] = numList[i];
    }

    for (int i = 0; i < 11; i++)
    {
        cout << newList[i] << ", ";
    }

    delete newList;
}

int main()
{
    srand(time(nullptr));

    int *numList = new int;

    for (int i = 1; i <= 10; i++)
    {
        numList[i - 1] = i;
    }

    SetArrayRandomlyByInput(numList);

    delete numList;

    return 0;
}