function main()
	S = chomp(readline())
	println(S[length(S)] == 's' ? string(S,"es") : string(S,"s"))
end

main()