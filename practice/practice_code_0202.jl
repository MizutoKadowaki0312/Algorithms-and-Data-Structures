N = 100
count = 0

@time for i in 0:N
    for j in 0:N
        for k in 0:N
            count += 1
        end
    end
end