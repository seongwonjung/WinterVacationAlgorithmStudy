function solution(score) {

    const averages = score.map(([english, math]) => (english + math) / 2); // 평균 점수 반환

    // 평균 점수와 원래 인덱스를 함께 정렬
    const sorted = averages
        .map((avg, index) => ({ avg, index })) // 평균과 인덱스를 객체로 저장
        .sort((a, b) => b.avg - a.avg); // 평균 점수 기준 내림차순 정렬

    const ranks = Array(score.length).fill(0); // 결과 배열 초기화
    let rank = 1; // 등수 초기화
    sorted.forEach((student, i) => {
        if (i > 0 && student.avg < sorted[i - 1].avg) {
            rank = i + 1; // 이전 점수와 다를 경우 등수를 증가
        }
        ranks[student.index] = rank; // 원래 인덱스에 등수 저장
    });

    return ranks;
}