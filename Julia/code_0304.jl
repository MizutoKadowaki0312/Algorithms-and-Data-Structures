N = 3
K = 10

A = [8,5,4]
B = [4,1,9]

INF = 10000000;

min_value = INF;

for i in 1:length(A)
    for j in 1:length(B)
        if A[i] + B[j] < K
            continue
        end
        if A[i] + B[j] < min_value
            min_value = A[i] + B[j]
        end
    end
end

println("min_value = $min_value")