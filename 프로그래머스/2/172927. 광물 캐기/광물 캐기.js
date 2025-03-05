function solution(picks, minerals) {
    const fatigue = [
        [1, 1, 1],
        [5, 1, 1],
        [25, 5, 1]
    ];
    
    const groupedMinerals = [];
    const maxMining = picks.reduce((a, b) => a + b, 0) * 5;
    minerals = minerals.slice(0, maxMining);
    
    for (let i = 0; i < minerals.length; i += 5) {
        const group = minerals.slice(i, i + 5);
        const diamondCount = group.filter(m => m === 'diamond').length;
        const ironCount = group.filter(m => m === 'iron').length;
        const stoneCount = group.filter(m => m === 'stone').length;
        
        groupedMinerals.push({
            diamonds: diamondCount,
            irons: ironCount,
            stones: stoneCount,
            totalFatigue: diamondCount * 25 + ironCount * 5 + stoneCount
        });
    }
    
    let answer = 0;
    groupedMinerals.sort((a, b) => b.totalFatigue - a.totalFatigue);
    
    for (const line of groupedMinerals) {
        if (picks[0]) {
            picks[0]--;
            answer += line.diamonds * fatigue[0][0] + line.irons * fatigue[0][1] + line.stones * fatigue[0][2];
        } else if (picks[1]) {
            picks[1]--;
            answer += line.diamonds * fatigue[1][0] + line.irons * fatigue[1][1] + line.stones * fatigue[1][2];
        } else if (picks[2]) {
            picks[2]--;
            answer += line.diamonds * fatigue[2][0] + line.irons * fatigue[2][1] + line.stones * fatigue[2][2];
        } else {
            break;
        }
    }
    
    return answer;
}