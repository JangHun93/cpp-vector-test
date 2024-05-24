#include <iostream>
#include <string>
#include <time.h>
#include <vector>
using namespace std;

// 1 ~ 10까지 숫자를 동적으로 할당받아 배열에 넣고
// 입력받은 숫자를 임의 위치에 추가해서 배열 크기를 늘리고
// 출력하는 프로그램을 만들어 보세요.

void SetArrayRandomlyByInput(vector<int> numList)
{
    // 임의의 위치
    int randomIndex = rand() % numList.size();
    // 입력 값
    int inputNumber = 0;
    cout << "숫자을 입력하세요: ";
    cin >> inputNumber;

    numList.insert(numList.begin() + randomIndex, inputNumber);

    for (auto literator = numList.begin(); literator < numList.end(); ++literator)
    {
        cout << *literator << endl;
    }
    //
    // cout << name << endl;
}

int main()
{

    srand(time(nullptr));
    vector<int> numList;

    for (int i = 1; i <= 10; i++)
    {
        numList.push_back(i);
    }

    SetArrayRandomlyByInput(numList);

    return 0;
}