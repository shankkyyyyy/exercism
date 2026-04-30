#!/usr/bin/env bash

main() {
    local input="$1"
    local reversed=""
    local len=${#input}

    # Loop backwards from the end of the string
    for (( i=$len-1; i>=0; i-- )); do
        # Extract 1 character at index i: ${string:offset:length}
        reversed+="${input:$i:1}"
    done

    echo "$reversed"
}

main "$@"
