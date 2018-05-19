#! /usr/bin/env ruby

'!'.upto('~') {|c|
    puts #{c} unless c =~ /\w/
}
