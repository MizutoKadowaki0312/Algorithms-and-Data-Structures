W = 77

# A = [1,2,4,5,11]
A = [1,4,8,64,3,4,5]

exist = false

for bit  in 0:(1 << length(A))
    sum = 0
    for i in 1:length(A)
        if bit & (1 << i) != 0
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