import java.util.LinkedList
import java.util.Queue

class Solution {
    fun solution(numbers: IntArray, target: Int): Int {
        var answer = 0
        val q: Queue<Pair<Int, Int>> = LinkedList()
        q.add(Pair(numbers[0], 0))
        q.add(Pair(-1 * numbers[0], 0))
        while (q.isNotEmpty()) {
            val current = q.poll()
            val value = current.first
            val index = current.second
            if (index == numbers.size - 1) {
                if (value == target) answer++
            } else {
                q.add(Pair(value + numbers[index + 1], index + 1))
                q.add(Pair(value - numbers[index + 1], index + 1))
            }
        }
        return answer
    }
}