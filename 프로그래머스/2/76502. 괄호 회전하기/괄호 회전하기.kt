class Solution {

    private fun check(s: String): Boolean {

        val temp = mutableListOf<Char>()

        for (c in s) {
            if (c == '{' || c == '[' || c == '(') {
                temp.add(c)
            } else {
                if (temp.isEmpty()) return false;
                when (c) {
                    '}' -> if (temp.last() == '{') temp.removeLast()
                    ']' -> if (temp.last() == '[') temp.removeLast()
                    ')' -> if (temp.last() == '(') temp.removeLast()
                }
            }
        }

        return temp.isEmpty()
    }

    fun solution(s: String): Int {
        var answer: Int = 0
        var temp = s
        repeat(s.length) {
            val first = temp.first()
            temp = temp.drop(1).plus(first)
            if (check(temp)) answer++
        }

        return answer
    }
}