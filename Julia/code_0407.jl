N = 20

F = Float64[]

for i in 1:N
    if i == 1
        push!(F, 0)
    elseif i == 2
        push!(F, 1)
    else
        """
        F = Float64[] で配列のサイズを指定していないので，
        F[i] = F[i - 1] + F[i - 2] として 
        push!(F,F[i]) ← このときFはまだ(i-1)要素しかないので，i番目の要素を追加！と言われてもエラーになる．
        なので，結果を別の変数に入れてあげることにする．
        """
        result = F[i - 1] + F[i - 2]
        push!(F, result)
    end
end

for i in 1:N
    @show F[i]
end