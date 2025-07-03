func kthCharacter(k int) byte {
    word := "abbcbccdbccdcddebccdcddecddedeefbccdcddecddedeefcddedeefdeefeffgbccdcddecddedeefcddedeefdeefeffgcddedeefdeefeffgdeefeffgeffgfgghbccdcddecddedeefcddedeefdeefeffgcddedeefdeefeffgdeefeffgeffgfgghcddedeefdeefeffgdeefeffgeffgfgghdeefeffgeffgfggheffgfgghfgghghhibccdcddecddedeefcddedeefdeefeffgcddedeefdeefeffgdeefeffgeffgfgghcddedeefdeefeffgdeefeffgeffgfgghdeefeffgeffgfggheffgfgghfgghghhicddedeefdeefeffgdeefeffgeffgfgghdeefeffgeffgfggheffgfgghfgghghhideefeffgeffgfggheffgfgghfgghghhieffgfgghfgghghhifggh"
    
    for len(word) < k {
        temp := ""
        for i := 0; i < len(word); i++ {
            char := word[i]
            if char == 'z' {
                temp += "a"
            } else {
                temp += string(char + 1)
            }
        }
        word += temp
    }
    return word[k-1] // k is 1-indexed
}

//space complexity is O(n)
//time complexity is O(n)