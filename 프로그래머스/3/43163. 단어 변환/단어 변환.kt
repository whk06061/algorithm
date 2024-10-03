import java.util.LinkedList
import java.util.Queue

class Solution {

    private lateinit var visited: BooleanArray

    fun solution(begin: String, target: String, words: Array<String>): Int {
        var answer = 0
        visited = BooleanArray(words.size) { false }

        val q: Queue<Pair<String, Int>> = LinkedList()
        q.add(Pair(begin, 0))
        while (q.isNotEmpty()) {
            val cur = q.poll()
            val word = cur.first
            val count = cur.second
            if (word == target) return count
            for (i in words.indices) {
                if (!visited[i] && checkWord(words[i], word)){
                    q.add(Pair(words[i], count + 1))
                    visited[i] = true
                }
            }
        }

        return answer
    }

    private fun checkWord(w1: String, w2: String): Boolean {
        var same = true
        for (i in w1.indices) {
            if(w1[i] != w2[i]){
                if (!same) return false
                same = false
            }
        }
        return !same
    }
}