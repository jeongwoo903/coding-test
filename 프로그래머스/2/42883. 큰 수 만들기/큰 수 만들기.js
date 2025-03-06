function solution(number, k) {
  const stack = [];
  
  for (let i = 0; i < number.length; i++) {
    const cur = number[i];
    
    while (stack.length > 0 && k > 0 && stack[stack.length - 1] < cur) {
      stack.pop();
      k--;
    }
    
    stack.push(cur);
  }
  
  if (k > 0) {
    stack.splice(stack.length - k);
  }
  
  return stack.join("");
}