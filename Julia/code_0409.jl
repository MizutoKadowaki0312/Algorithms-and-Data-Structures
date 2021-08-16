function func(i, w, a)
    # ベースケース
    if i == 0
        if w == 0
            return true
        else
            return false
        end
    end

    # a[i]を選ばない場合
    if func(i - 1, w, a)
        return true
    end

    # a[i]を選ぶ場合
    if func(i - 1, w - a[i], a)
        return true
    end

    return false
end

N = 4
W = 14
a = [3,2,6,5]

if func(N, W, a)
    println("Yes")
else
    println("No")
end