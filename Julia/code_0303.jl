N = 5
v = 7
A = [4 , 3 , 12 , 7 , 11]

INF = 20000000

# 線形探索
min_value = INF
for i in 1:length(A)
    if A[i] < min_value
        min_value = A[i]
    end
end

println("min_value = $min_value")
