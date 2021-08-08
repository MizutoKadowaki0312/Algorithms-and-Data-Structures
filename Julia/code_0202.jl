count = 0

N = 100000

@time for i in 0:N
    for j in 0:N
        count += 1
    end
end