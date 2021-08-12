N = 5
W = 10
A = [1,2,4,5,11]

exist = false

for bit in 0:(1 << N)
    sum = 0

    for i in 1:N
        if bit & (1 << i)
            sum += A[i]
        end
    end

    if sum == W
        exist = true
    end
end

if exist
    println("Yes")
else
    println("No")
end