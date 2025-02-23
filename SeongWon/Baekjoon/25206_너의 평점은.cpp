#include <iostream>
#include <iomanip>  // setprecision 포함
using namespace std;
int main(){
	//전공평점 = 전공과목별(학점 x 과목평점)의 합을 학점의 총합으로 나눈 값
	//입력은 과목명, 학점, 등급이 공백으로 구분
	//학점은 a+ = 4.5, a0 = 4.0, b+ = 3.5 ... d0 = 1.0, F = 0.0 ,P = 0.0 P인과목은 계산에서 제외 해야 함
	string subject, s_grade;	//과목, 등급
	double credit, total = 0, total_credit = 0;	//학점
	int cnt = 0;
	for(int i = 0; i < 20; i++){
		cin >> subject >> credit >> s_grade;
		double f_grade = 0;
		if (s_grade == "A+") {
    f_grade = 4.5;
		} else if (s_grade == "A0") {
    f_grade = 4.0;
		} else if (s_grade == "B+") {
    f_grade = 3.5;
		} else if (s_grade == "B0") {
    f_grade = 3.0;
		} else if (s_grade == "C+") {
    f_grade = 2.5;
		} else if (s_grade == "C0") {
    f_grade = 2.0;
		} else if (s_grade == "D+") {
    f_grade = 1.5;
		} else if (s_grade == "D0") {
    f_grade = 1.0;
		} else if (s_grade == "F") {
    f_grade = 0.0;
		} else {
    f_grade = -1.0; //P 인 경우
}

		if(f_grade != -1.0){
			cnt++;
    total_credit += credit;
			total += f_grade*credit;
		}
	}
	double num = total/total_credit;
	cout << fixed << setprecision(6);  // 소수점 6자리까지 출력
    cout << num;
	return 0;
}