class Solution {

    private var count = -1
    private var answer = 0

    fun dfs(alphabets: List<Char>, word: String, target: String, idx: Int) {
        count++
        if (word == target){
            answer = count
            return
        }
        if (word.length == 5)  return
        for (i in idx until 5) {
            dfs(alphabets, word + alphabets[i], target, idx)
        }
    }

    fun solution(word: String): Int {
        val alphabets = listOf<Char>('A', 'E', 'I', 'O', 'U')

        dfs(alphabets, "", word, 0)

        return answer
    }
}