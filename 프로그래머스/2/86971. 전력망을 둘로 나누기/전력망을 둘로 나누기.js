function solution(n, wires) {
    const list = Array.from({ length: n + 1 }, () => []);
    
    for(const [a,b] of wires) {
        list[a].push(b);
        list[b].push(a);
    }
    
    let answer = Infinity;
    
    for (const [a, b] of wires) {
        const count = dfs(a, a, b, list, n);
        const diff = Math.abs(n - 2 * count);
        answer = Math.min(answer, diff);
    }
    
    return answer;
}

function dfs(start, ignoreA, ignoreB, list, n) {
    const visited = Array(n + 1).fill(false);
    const stack = [start];
    visited[start] = true;
    
    let count = 1;
    while (stack.length) {
        const node = stack.pop();
        
        for (const next of list[node]) {
            if ((node === ignoreA && next === ignoreB) || (node === ignoreB && next === ignoreA)) {
                continue;
            }
            
            if (!visited[next]) {
                visited[next] = true;
                stack.push(next);
                count++;
            }
        }
    }
    
    return count;
}