s = "mrc"
puts "String: #{s}"
puts "Ints:  " + s.split("").reduce("") {|a,x|a+" "+x[0].to_s}
puts "Num:    " + s.split("").each_with_index.map{|x,i|x[0]*10**(i+1..s.length-1).reduce(0){|a,j|a+s[j].to_s.length}}.reduce{|a,x|a+x}.to_s

