function main()
	N = parse.(Int,readline())
	cnt=0
	for a = 1:N-1
		cnt+= div(N-1,a)
	end
	println(cnt)
end

main()