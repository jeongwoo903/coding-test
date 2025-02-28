function solution(n) {
    const result = hanoi(n, 1, 2, 3, []);
    return result
}

function hanoi(n, from, by, to, acc) {
    if(n === 1) {
        acc.push([from, to]);
    } else {
        hanoi(n - 1, from, to, by, acc);
		acc.push([from, to]);
		hanoi(n - 1, by, from, to, acc);
    }
    
    return acc;
}