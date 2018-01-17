# go_rename

Explore go renaming behavior with hard links.

## Procedure

`rm a b`

`touch a`

`ln a b`

`go run rename.go`      # no error reported

`ls -l a b`

`mv a b`                # "mv: 'a' and 'b' are the same file"

`ls -l a b`         

`rm b`

`touch b`

`go run rename.go`

`ls -l a b`             # file "a" overwritten by "b"


