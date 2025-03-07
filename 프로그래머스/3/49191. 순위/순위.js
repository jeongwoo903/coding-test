function solution(n, results) {
    const graph = Array.from({ length: n + 1 }, () => Array(n + 1).fill(0));
    
    results.forEach(([winner, loser]) => {
        graph[winner][loser] = 1;
        graph[loser][winner] = -1;
    });
    
    for (let k = 1; k <= n; k++) {
        for (let i = 1; i <= n; i++) {
            for (let j = 1; j <= n; j++) {
                if (graph[i][k] === 1 && graph[k][j] === 1) {
                    graph[i][j] = 1;
                    graph[j][i] = -1;
                }
                
                else if (graph[i][k] === -1 && graph[k][j] === -1) {
                    graph[i][j] = -1;
                    graph[j][i] = 1;
                }
            }
        }
    }
    
    let count = 0;

    for (let i = 1; i <= n; i++) {
        let knownRelations = 0;
        
        for (let j = 1; j <= n; j++) {
            if (i !== j && graph[i][j] !== 0) {
                knownRelations++;
            }
        }
        
        if (knownRelations === n - 1) {
            count++;
        }
    }
    
    return count;
}