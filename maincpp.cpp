/*
#include <iostream>
// 전처리 -> 컴파일 -> 링크
// 전처리 지시자 include[파일], define[키, 값], ifdef [키], endif, ifndef,endif, pragama
//main은 프로그램 시작점

int main(int argc, char* argv[])
{
	int value1 = 0;//정수 (예 1,-1)
	int a1(0);
	int a2 = { 0 };//최신 초기화 표기법
	int a3{ 0 };//최신 초기화 표기법
	value1 = 0b1001011;//2진법
	value1 = 0123;//8진법
	value1 = 0x9f;//16진법

	char c1 = 'A';
	c1 = '\101';// 10진수 유니코드'A'
	c1 = '\x41';//16진수 유니코드'A'
	
    //std::cin >> value1;
	std::cout << "Hello, World" << std::endl;
	//std::cout 문장시작
	std::cout << "There are " << c1 << " ways\nI love you.\nA\nBC\nDEF\nGH" << std::endl;
	//std::endl; 문장끝!
	// \n과 같은 문자를 이스케이프 시퀀스
	// \n은 줄바꿈 문자
	// \r 출력 커서를 처음으로 옮김
	// \t 탭
	// \" 따옴표
	//int value; std::cin은 사용자가 키보드로 입력한 값을 받음
	//unsigned 음수X
	//float 실수, double 실수
	//char c1; 'A'(문자열1)
	return 0; 
}
*/