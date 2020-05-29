//Fri, 29th May, 2020 - Kotlin Heroes, Episode 4 - I finished 570/1505 - this problem got TLE :(
import java.util.*
import kotlin.math.min

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var t: Int = reader.nextInt()
    for (i in 1..t) {
        var n: Int = reader.nextInt()
        var k: Int = reader.nextInt()
        var x: Int = reader.nextInt()
        var y: Int = reader.nextInt()

        var shelfs = mutableListOf<Int>()
        var sum: Double = 0.0
        var res: Long = 0
        var temp: Int
        for (j in 1..n) {
            temp = reader.nextInt()
            shelfs.add(temp)
            sum += temp
        }
        shelfs.sortDescending()
        var now: Int = 0

        while (sum / n > k) {
            sum -= shelfs[now]
            now++
            res += x
        }

        if (shelfs[now] > k) {
            var xIny: Int = y / x
            var amt: Int = 0
            while (now < shelfs.size && shelfs[now] > k && amt < xIny) {
                now++
                amt++
            }
            if (amt == 0)
                res += y
            else
                res += min(y, x * amt)
        }

        println("$res")
    }
}