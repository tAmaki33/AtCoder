function main()
	S=chomp(reverse(readline()))
	T=["dream","dreamer","erase","eraser"]

	for i =1:length(T)
		T[i]=reverse(T[i])
	end

	can=true
	x=1
	while(x<length(S))
		can2=false
		for t in T
			if occursin.(S,t)
				S=replace(S,t=>"")
				can2=true
				x+=length(t)
				println(S)
			end
		end
		if !can2
			can=false
			break
		end
	end
	println(can ? "YES" : "NO")
end

main()