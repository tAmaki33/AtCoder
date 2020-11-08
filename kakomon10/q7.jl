function main()
	N=parse.(Int, readline())
	str=""
	for x=1:N
		if x==1
			str=chomp(readline())
		else
			str = string(str," ",chomp(readline()))
		end
		
	end
	
	println(length(sort(unique(parse.(Int,split(str))))))
end

main()