function chmin(a, b)
    println("before chmin : chmin(a , b) =  chmin($a , $b)")
    if a > b
        a = b
    end
    println("after chmin : a = $a , b = $b")
    return a, b
end

INF = 2^60

h = [2,9,4,5,1,6,10]
N = length(h)

dp = Vector{Int64}(undef, N)

for i in 1:N
    dp[i] = INF
end

# 初期条件
dp[1] = 0

for i in 2:N
    println("i = $i")
    println("-- 1つ前からの移動 --")
    println("-- before chmin --")

    value = dp[i]
    cost = abs(h[i] - h[i - 1])
    sum = dp[i - 1] + cost

    println("value = $value , cost = $cost , sum = $sum")

    chmin(value, sum)

    """
    chmin の結果に関係なく value = dp[i] の値を更新．
    chmin 関数内では更新してくれないから．
    """

    dp[i] = chmin(value, sum)[1]

    println("-- after chmin --")
    value = dp[i]
    println("value = $value")

    if i > 2
        println("--2つ前からの移動 --")
        value = dp[i]
        cost = abs(h[i] - h[i - 2])
        sum = dp[i - 2] + cost

        println("value = $value , cost = $cost , sum = $sum")

        chmin(value, sum)

        """
        i-1 番目からの総和が小さければここの処理で値は変わらない．
        i-2 番目からの総和の方が小さければここで書き換える．
        """

        dp[i] = chmin(value, sum)[1]

        println("-- after chmin --")
        value = dp[i]
        println("value = $value")
    end

    println("$i 番目に到達するためのコストの総和の最小値 = $value")
    println("------")
end


# 答えの確認
for i in 1:N
    result = dp[i]
    println("dp[$i] = $result")
end
