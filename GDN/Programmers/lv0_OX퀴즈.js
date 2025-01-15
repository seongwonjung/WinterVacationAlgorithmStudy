/*

function solution(name, yearning, photo) {
    return photo.map((v)=> v.reduce((a, c)=> a += yearning[name.indexOf(c)] ?? 0, 0))
}

*/ 

// lv1_추억점수에서 다른 사람이 이렇게 푼 방식으로 매핑을 이용해보겠습니다

function solution(quiz) {
    return quiz.map(expression => {
        const [left, operator, right, _, result] = expression.split(" "); // 수식을 공백으로 분리
        const calculated = operator === "+" // 삼항 연산자 사용해서 opratior가 +면면
            ? Number(left) + Number(right) // 덧셈하고
            : Number(left) - Number(right); // 아니면 뺄셈해라
        return calculated === Number(result) ? "O" : "X"; 
    });
}
