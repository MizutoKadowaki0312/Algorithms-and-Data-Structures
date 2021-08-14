function rec(N)
    if N == 0
        return 0
    end
    result = N + rec(N + 1)
    @show result
end

rec(5)