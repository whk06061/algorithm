import java.util.LinkedList
import java.util.Queue

class Solution {
    fun solution(numbers: IntArray, target: Int): Int {
        var answer = 0
        val q: Queue<Pair<Int, Int>> = LinkedList()
        q.add(Pair(numbers[0], 0))
        q.add(Pair(-numbers[0], 0))
        while (q.isNotEmpty()) {
            val (temp, idx) = q.poll()
            val nextIdx = idx + 1
            if (nextIdx < numbers.size) {
                q.add(Pair(temp + numbers[nextIdx], nextIdx))
                q.add(Pair(temp - numbers[nextIdx], nextIdx))
            } else if (temp == target) answer++
        }
        return answer
    }
}