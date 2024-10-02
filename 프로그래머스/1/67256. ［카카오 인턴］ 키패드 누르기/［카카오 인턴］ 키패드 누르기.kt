import kotlin.math.abs

class Solution {

    fun solution(numbers: IntArray, hand: String): String {
        var answer = ""
        var leftPosition = Pair(3, 0)
        var rightPosition = Pair(3, 2)
        
        for (number in numbers) {

            val numberPosition = if (number == 0){
                Pair(3,1)
            }else{
                Pair((number - 1) / 3, (number - 1) % 3)
            }

            when (number) {
                in intArrayOf(1, 4, 7) -> {
                    leftPosition = numberPosition
                    answer += "L"
                }

                in intArrayOf(3, 6, 9) -> {
                    rightPosition = numberPosition
                    answer += "R"
                }

                else -> {
                    val leftDistance =
                        abs(numberPosition.first - leftPosition.first) + abs(numberPosition.second - leftPosition.second)
                    val rightDistance =
                        abs(numberPosition.first - rightPosition.first) + abs(numberPosition.second - rightPosition.second)
                    if (leftDistance == rightDistance && hand == "right"){
                        answer += "R"
                        rightPosition = numberPosition
                    }else if(leftDistance == rightDistance && hand == "left"){
                        answer += "L"
                        leftPosition = numberPosition
                    } else if(leftDistance < rightDistance){
                        answer += "L"
                        leftPosition = numberPosition
                    }else{
                        answer += "R"
                        rightPosition = numberPosition
                    }
                }
            }
        }
        return answer
    }
}