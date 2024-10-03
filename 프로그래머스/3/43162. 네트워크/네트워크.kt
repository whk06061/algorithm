import java.util.LinkedList
import java.util.Queue 

class Solution {

    private lateinit var visited: BooleanArray
    private lateinit var info: Array<MutableList<Int>>

    fun solution(n: Int, computers: Array<IntArray>): Int {
        var answer = 0
        info = Array(n) { mutableListOf() }
        visited = BooleanArray(n) { false }

        for (i in 0 until n) {
            for (j in 0 until n) {
                if (i != j && computers[i][j] == 1) info[i].add(j)
            }
        }

        for (i in 0 until n) {
            if (!visited[i]) {
                bfs(i)
                answer++
            }
        }

        return answer
    }

    private fun bfs(start: Int) {
        val q: Queue<Int> = LinkedList()
        q.add(start)
        visited[start] = true
        while (q.isNotEmpty()) {
            val number = q.poll()
            for (i in info[number]) {
                if (!visited[i]) {
                    q.add(i)
                    visited[i] = true
                }
            }

        }
    }
}