using BenchmarkTools

N = 50

memo = Vector{Float64}(undef, N)

function fibo(N)
    # ベースケース
    if N == 1
        return 0
    elseif N == 2
        return 1
    end

    # memoをチェック(すでに計算済みなら答えをリターンする)
    if memo[N] != -1
        return memo[N]
    end

    # 答えをメモ化しながら再帰呼び出し
    return memo[N] = fibo(N - 1) + fibo(N - 2)
end

for i in eachindex(memo)
    memo[i] = -1;
end

# 全要素に-1が代入されたか確認
@show memo

fibo(N)

for i in 1:length(memo)
    result = memo[i]
    println("memo[$i] = $result")
end


for i in 1:N
    result = fibo(i)
    println("fibo($i) = $result")
end