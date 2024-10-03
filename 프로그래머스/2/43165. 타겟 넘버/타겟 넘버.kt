import java.util.LinkedList
import java.util.Queue

class Solution {
    fun solution(numbers: IntArray, target: Int): Int {
        var answer = 0
        
        val q: Queue<Pair<Int, Int>> = LinkedList()
        q.add(Pair(-numbers[0], 0))
        q.add(Pair(numbers[0], 0))
        
        while(q.isNotEmpty()){
            val (temp, index) = q.poll()
            val nextIndex = index + 1
            if(nextIndex < numbers.size){
                q.add(Pair(temp - numbers[nextIndex], nextIndex))
                q.add(Pair(temp + numbers[nextIndex], nextIndex))
            } else if(temp == target) answer ++
        }
        
        return answer
    }
}