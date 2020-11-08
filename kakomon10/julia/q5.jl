function main()
	N,A,B = parse.(Int,split(readline()))
	res=0
	for n = 1:N
		total=0
		for c in string(n)
			total+=parse.(Int,c)
		end

		if A<=total<=B
			res+=n
		end
	end
	println(res)
end

main()