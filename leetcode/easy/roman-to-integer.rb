def roman_to_int(s)
  romanNumber = 0
  romans = {
    "I" => 1,
    "V" => 5,
    "X" => 10,
    "L" => 50,
    "C" => 100,
    "D" => 500,
    "M" => 1000,
  }

  for i in 0...s.length
    if i < s.length-1 &&
        romans[s[i]] < romans[s[i+1]]
      romanNumber -= romans[s[i]]
    else
      romanNumber += romans[s[i]]
    end
  end

  romanNumber
end

puts roman_to_int("MCMXCIV")
