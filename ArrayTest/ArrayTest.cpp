// ArrayTest.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <array>

using namespace std;

//동적 메모리 할당 예제
int main()
{
	//동적 메모리 할당 초기화 안하면 쓰레기 값 설정이 됨 초기화 꼭!
	int* ptr = new int[3] {};
	ptr[0] = 10;
	ptr[1] = 20;

	for (int i = 0; i< 3; i++)
	{
		cout << ptr[i] << endl;
	}

	//동적 메모리 해제
	delete[] ptr;
	ptr = nullptr;
}

//c++언어 배열 구현 - 점수들의 평균을 구하라
//int main()
//{
//	array<int, 5> scores = { 50,60,70,80,90 };
//
//	//합계 구하기
//	int sum = 0;
//	for (int i = 0; i < scores.size(); i++)
//	{
//		sum += scores[i];
//	}
//
//	//평균
//	float avg = (float)sum / scores.size();
//
//	//출력
//	cout << "acerage Score: " << avg << endl;
//}


//c언어 배열 구현 - 점수들의 평균을 구하라
//int main()
//{
//	//배열 선언
//	int scores[5] = {50,60,70,80,90};
//
//	//int length = sizeof(scores) / sizeof(scores[0]);
//	int length = size(scores);
//
//	//합계
//	int sum = 0;
//	for (int i = 0; i < length; i++)
//	{
//		sum += scores[i];
//	}
//
//	//평균
//	float avg = (float)sum / length;
//
//	//출력
//	cout << "acerage Score: " << avg << endl;
//}


//int main()
//{
//    std::cout << "Hello Array!\n";
//}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
