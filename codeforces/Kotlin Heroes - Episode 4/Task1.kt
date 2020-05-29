//Fri, 29th May, 2020 - Kotlin Heroes, Episode 4 - I finished 570/1505
import java.util.*

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var t: Int = reader.nextInt()
    for (i in 1..t) {
        var n: Int = reader.nextInt()
        var k: Int = reader.nextInt()

        var n1: Int
        var n2: Int
        var n3: Int
        var n4: Int

        var sum: Int = k * k * k + k * k + k + 1
        n1 = n / sum
        n2 = k * n1
        n3 = k * n2
        n4 = k * n3
        println("$n1 $n2 $n3 $n4")
    }
}