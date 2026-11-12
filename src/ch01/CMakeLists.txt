foreach(project IN ITEMS countOnes daxue factorial fibonacci gcd greatest_slice hanoi lcs majority maxRect median1 median2 power prime shiftK simu sum)
    add_subdirectory(${project})
endforeach()
