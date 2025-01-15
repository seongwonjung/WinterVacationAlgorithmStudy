function solution(name, yearning, photo) {

    const score = {}; // 객체 생성
    for (let i = 0; i < name.length; i++) { 
        score[name[i]] = yearning[i]; // 이름과 점수 매핑
    }

    const result = []; // 점수 저장할 배열 생성
    for (const group of photo) { // for of 반복문 사용 
        let sum = 0;
        for (const person of group) {
            sum += score[person] || 0; // 이름이 score에 없으면 0을 더함
        }
        result.push(sum); //result에 sum을 추가 
    }

    return result;
}


// 프로그래머스
/*

function solution(name, yearning, photo) {
    return photo.map((v)=> v.reduce((a, c)=> a += yearning[name.indexOf(c)] ?? 0, 0))
}
*/

// 벽느낀다..