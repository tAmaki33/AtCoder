function main()
	a,b= parse.(Int, split(readline()))
	println(a * b % 2 == 0 ? "Even" : "Odd")
end

main()