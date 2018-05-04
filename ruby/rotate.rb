#! /usr/bin/env ruby

def rotate interval
    while true
        "|/-\\".chars.each {|c| print "\r#{c}"; sleep interval}
    end      
end

rotate 0.1
