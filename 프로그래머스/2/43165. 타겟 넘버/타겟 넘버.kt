import java.util.LinkedList
import java.util.Queue

class Solution {
    fun solution(numbers: IntArray, target: Int): Int {
        var answer = 0
        
        val q: Queue<Pair<Int, Int>> = LinkedList()
        q.add(Pair(-numbers[0], 0))
        q.add(Pair(numbers[0], 0))
        
        while(q.isNotEmpty()){
            val current = q.poll()
            val value = current.first
            val nextIndex = current.second + 1
            if(nextIndex == numbers.size){
                if(value == target) answer ++
            }else{
                q.add(Pair(value - numbers[nextIndex], nextIndex))
                q.add(Pair(value + numbers[nextIndex], nextIndex))
            }
        }
        
        return answer
    }
}