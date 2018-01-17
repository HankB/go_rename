package main

import (
	"fmt"
	"os"
)

func main() {
	err := os.Rename("a", "b")
	fmt.Println(err)
}
