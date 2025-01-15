function solution(name, yearning, photo) {

    const score = {}; // ��ü ����
    for (let i = 0; i < name.length; i++) { 
        score[name[i]] = yearning[i]; // �̸��� ���� ����
    }

    const result = []; // ���� ������ �迭 ����
    for (const group of photo) { // for of �ݺ��� ��� 
        let sum = 0;
        for (const person of group) {
            sum += score[person] || 0; // �̸��� score�� ������ 0�� ����
        }
        result.push(sum); //result�� sum�� �߰� 
    }

    return result;
}


// ���α׷��ӽ�
/*

function solution(name, yearning, photo) {
    return photo.map((v)=> v.reduce((a, c)=> a += yearning[name.indexOf(c)] ?? 0, 0))
}
*/

// ��������..