import java.util.*

private var n: Int = 0
private var m: Int = 0
private var answer: Int = 0
private lateinit var virus: List<MutableList<Int>>

fun main() = with(System.`in`.bufferedReader()) {
    n = readln().toInt()
    m = readln().toInt()
    virus = List(n + 1) {
        mutableListOf()
    }

    for (i in 0 until m) {
        val pair = readln().split(" ").map { it.toInt() }
        virus[pair[0]].add(pair[1])
        virus[pair[1]].add(pair[0])
    }
    bfs()
    println(answer)
}

fun bfs() {
    val checked = BooleanArray(n + 1) { false }
    val q = LinkedList<Int>()
    q.offer(1)
    checked[1] = true
    while (q.isNotEmpty()) {
        val current = q.poll()
        for (i in virus[current]) {
            if (!checked[i]) {
                q.offer(i)
                checked[i] = true
                answer++
            }
        }
    }
}