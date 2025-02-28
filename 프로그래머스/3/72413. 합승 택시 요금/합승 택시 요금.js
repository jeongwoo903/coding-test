function solution(n, s, a, b, fares) {
  // 1. 그래프(인접 리스트) 초기화
  const graph = Array.from({ length: n + 1 }, () => []);

  // 2. fares를 이용하여 양방향 그래프 구성
  for (const [c, d, f] of fares) {
    graph[c].push([d, f]);
    graph[d].push([c, f]);
  }
    
  // 4. 다익스트라 알고리즘 구현
  function dijkstra(start) {
    const dist = Array(n + 1).fill(Infinity);
    dist[start] = 0;

    // 우선순위 큐에는 [비용, 노드] 형태로 삽입
    const pq = [[0, start]]; // cost, node

    while (pq.length > 0) {
      // 비용이 가장 작은 원소 pop
      pq.sort((a, b) => a[0] - b[0]);
      const [currentCost, currentNode] = pq.shift();

      // 이미 저장된 거리보다 큰 비용이면 스킵
      if (dist[currentNode] < currentCost) continue;

      // 인접 노드를 확인하며 거리 갱신
      for (const [nextNode, nextCost] of graph[currentNode]) {
        const totalCost = currentCost + nextCost;

        // 더 짧은 경로를 찾으면 갱신
        if (dist[nextNode] > totalCost) {
          dist[nextNode] = totalCost;
          pq.push([totalCost, nextNode]);
        }
      }
    }

    return dist;
  }

  // 3. s, a, b에서 각각 시작하는 다익스트라 실행
  const distFromS = dijkstra(s);
  const distFromA = dijkstra(a);
  const distFromB = dijkstra(b);

  // 5. 모든 지점을 거점으로 고려하여 최소 비용 계산
  let answer = Infinity;
  for (let i = 1; i <= n; i++) {
    const cost = distFromS[i] + distFromA[i] + distFromB[i];
    if (cost < answer) {
      answer = cost;
    }
  }

  return answer;
}
