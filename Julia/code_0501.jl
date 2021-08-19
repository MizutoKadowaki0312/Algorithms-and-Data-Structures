INF = 2^60 # dp配列に最初に代入する十分大きな値

h = [2,9,4,5,1,6,10]
N = length(h)

dp = Vector{Float64}(undef, N)

for i in 1:N
    dp[i] = INF
end

# 全ての要素に INF が代入されているか確認
display(dp)

# 初期条件
dp[1] = 0

display(dp)

"""
i = 1は上記で初期条件を与えているので変化させない．
(この中で if i == 1 をしても良いんだけどね)
"""

for i in 2:N
    if i == 2
        dp[i] = abs(h[i] - h[i - 1])
    else
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]))
    end
end

# 答えの確認
for i in 1:N
    result = dp[i]
    println("dp[$i] = $result")
end