function solution(left, right) {
    let sum = 0;
    for (let n = left; n <= right; n++) {
        const sqrtN = Math.sqrt(n);
        const rounded = Math.round(sqrtN);
        sum += rounded * rounded === n ? -n : n;
    }
    return sum;
}