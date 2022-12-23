package main

import "fmt"

type Stack []int

func (s *Stack) Push(val int) {
	*s = append(*s, val)
}

func (s *Stack) Pop() int {
	if s.IsEmpty() {
		fmt.Println("Cannot pop, stack is empty.")
		return -1
	}
	index := len(*s) - 1
	element := (*s)[index]
	*s = (*s)[:index]
	return element
}

func (s *Stack) IsEmpty() bool {
	return len(*s) <= 0
}

func (s *Stack) Print() {
	for _, element := range *s {
		fmt.Println(element)
	}
}

func main() {
	s := Stack{}
	s.Push(3)
	s.Push(4)
	s.Push(5)
	s.Push(6)
	s.Print()
	fmt.Println(s.Pop())
	fmt.Println(s.Pop())
	fmt.Println(s.Pop())
	fmt.Println(s.Pop())
	fmt.Println(s.Pop())

}
