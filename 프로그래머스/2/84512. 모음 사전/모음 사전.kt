class Solution {

    private var answer = 0
    private var count = -1

    private fun dfs(target: String, word: String, idx: Int, alphabets: List<Char>) {
        count++
        if (target == word) {
            answer = count
            return
        }
        if (word.length == 5) return
        for(i in idx until 5){
            dfs(target, word.plus(alphabets[i]), idx, alphabets)
        }
    }

    fun solution(word: String): Int {

        dfs(word, "", 0, listOf('A', 'E', 'I', 'O', 'U'))

        return answer
    }
}