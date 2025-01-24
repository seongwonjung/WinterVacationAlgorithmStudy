function solution(answers) {
    const per1 = [1, 2, 3, 4, 5];
    const per2 = [2, 1, 2, 3, 2, 4, 2, 5];
    const per3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5];

    let count = [0, 0, 0];

    for (let i = 0; i < answers.length; i++) {
        if (answers[i] === per1[i % per1.length]) {
            count[0]++;
        }
        if (answers[i] === per2[i % per2.length]) {
            count[1]++;
        }
        if (answers[i] === per3[i % per3.length]) {
            count[2]++;
        }
    }

    let answer = [];
    let index = 0;
    let maxValue = Math.max(...count);

    for (let i = 0; i < 3; i++) {
        if (maxValue === count[i]) {
            answer[index] = i + 1;
            index++;
        }
    }

    return answer;
}