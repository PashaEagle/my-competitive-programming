//Fri, 29th May, 2020 - Kotlin Heroes, Episode 4 - I finished 570/1505
import java.util.*
import kotlin.math.min

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var t: Int = reader.nextInt()
    for (i in 1..t) {
        var n: Int = reader.nextInt()
        var k1: Int = reader.nextInt()
        var k2: Int = reader.nextInt()
        var s: String = reader.next()

        var res: Int = 0
        var skip: Boolean = false
        for (i in 0 until n) {
            if (skip) {
                skip = false
                continue
            }
            if (s[i] == '0') continue
            if (i < s.length - 1 && s[i + 1] == '1') {
                res += min(k1 * 2, k2)
                skip = true
            } else res += k1
        }

        println("$res")
    }
}