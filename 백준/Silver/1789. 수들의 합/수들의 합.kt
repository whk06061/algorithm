fun main() = with(System.`in`.bufferedReader()){
    val S = readLine().toLong()
    var sum = 0L
    var count = 0L
    while(sum <= S){
        count++
        sum += count
    }

    println(count-1)
}