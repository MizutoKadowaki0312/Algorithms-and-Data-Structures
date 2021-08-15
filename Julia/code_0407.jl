using BenchmarkTools


N = 20

F = Vector{Float64}(undef, N)

for i in 1:length(F)
    if i == 1
        F[i] = 0
    elseif i == 2
        F[i] = 1
    else
        F[i] = F[i - 1] + F[i - 2]
    end
end

for i in 1:length(F)
    println(F[i])
end



"""
関数化してしまえ
"""

function fibo(N)
    F = Vector{Float64}(undef, N)
    for i in 1:length(F)
        if i == 1
            F[i] = 0
        elseif i == 2
            F[i] = 1
        else
            F[i] = F[i - 1] + F[i - 2]
        end
    end
end


fibo(20)