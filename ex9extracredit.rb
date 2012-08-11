str = "mrc"
p str.split("").each_with_index.map { |x, i| ({"m" => 109, "r" => 114, "c" => 99}[x]) * 10 ** (i+1..str.length-1).reduce(0) {|acc, j| acc + str[j].to_s.length }}.reduce { |acc, x| acc + x }

