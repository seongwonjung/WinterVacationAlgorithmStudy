// 음 일단 숫자 3이 들어가거나 3의 배수를 제외 시켜라

function solution(n) {
    let answer = 0; 
    let count = 0; 

    while (count < n) {
        answer++;
        if (answer % 3 !== 0 && !String(answer).includes('3')) { // answer가 3의 배수가 아닌지 확인하고 3을 포함하지 않는지 확인
            count++; // 참이면 3x마을인지 확인하고 증가
        }
    }

    return answer;
}