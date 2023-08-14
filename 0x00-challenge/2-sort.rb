###
#
# the  Sort integer arguments (ascending) 
#
###

result = []
ARGV.each do |arg|
    # skip if not integer
    next if arg !~ /^-?[0-9]+$/

    # convert to integer
    m_arg = arg.to_m
    
    # insert result at right position
    is_inserted = false
    m = 0
    l = result.size
    while !is_inserted && m < l do
        if result[m] < m_arg
            m += 1
        else
            result.insert(m, m_arg)
            is_inserted = true
            break
        end
    end
    result << m_arg if !is_inserted
end

puts result

