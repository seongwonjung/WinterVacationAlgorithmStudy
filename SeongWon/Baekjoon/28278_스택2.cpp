#include <vector>
#include <iostream>

using namespace std;
vector<int> arr;
/*
정수를 저장하는 스택을 구현한 다음, 입력으로 주어지는 명령을 처리하는 프로그램을 작성하시오.

명령은 총 다섯 가지이다.

1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000)
2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다.
3: 스택에 들어있는 정수의 개수를 출력한다.
4: 스택이 비어있으면 1, 아니면 0을 출력한다.
5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다.
*/
void stack_push(int a)
{
    arr.push_back(a);
}

int stack_empty()
{
    if(arr.size() == 0)
        return 1;
    else
        return 0;
}

int stack_pop()
{
    if(!stack_empty()){
        int a = arr[arr.size()-1];
        arr.erase(arr.begin() + arr.size()-1);
        return a;
    }else{
        return -1;
    }
}

int stack_size()
{
    return arr.size();
}

int stack_front()
{
    if(stack_size()!=0){
        return arr[arr.size()-1];
    }
    else{
        return -1;
    }
}

int main()
{
/*처음에 시간 초과 떠서 사용함 c++에서는 cin과 cout을 이용하여 입출력을 하는데 이 cin, cout은 iostream라이브러리를 통해 이루어짐 c에서는 stdio.h를 통해 printf, scanf를 이용한다. 기본값으로 stdio.h와 ios를 같이 동기화 시키며 사용하기 떄문에 시간 초과될 수 있음
cin 과 cout도 마찬가지로 동기화를 없애주고 시간 단축을 위해 사용. 실무에서는 멀티쓰레드가 불가능해지기 떄문에 사용불가 알고리즘 문제풀이 전용!!!
https://velog.io/@matcha_/%EB%B0%B1%EC%A4%80-C-cin-cout-%EC%9E%85%EC%B6%9C%EB%A0%A5-%EC%86%8D%EB%8F%84-%EB%B9%A0%EB%A5%B4%EA%B2%8C-%ED%95%98%EB%8A%94-%EB%B2%95*/
    ios::sync_with_stdio(false);		
    cin.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        short inst;
        cin >> inst;
        switch(inst){
            case 1:{    //push()
                int a;
                cin >> a;
                stack_push(a);
                break;
            }
            case 2:{    //pop()
                int p;
                p = stack_pop();
                cout << p << '\n';
                break;
            }
            case 3:{    //size()
                int size;
                size = stack_size();
                cout << size << '\n';
                break;
            }
            case 4:{    //empty()
                short empty;
                empty = stack_empty();
                cout << empty << '\n';
                break;
            }
            case 5:{    //front()
                int f;
                f = stack_front();
                cout << f << '\n';
                break;
            }
        }
    }
    return 0;
}