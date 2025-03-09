#pragma once

#include <vector>
#include <string>


std::vector<std::string> arr1 =
{
	"apple banana cherry grape orange",
	"dog cat bird fish rabbit",
	"sun moon stars sky clouds",
	"table chair lamp couch shelf",
	"book pen paper pencil eraser",
	"apple banana apple grape pear",
	"dog dog cat cat bird bird",
	"sun moon sun stars moon",
	"table chair table lamp chair",
	"book book pen paper paper",
};


std::vector<std::string> arr2 =
{
        "apple banana apple grape pear",
        "dog cat dog cat bird",
        "sun moon sun moon",
        "table chair table lamp chair shelf",
        "book pen paper pencil eraser book",
        "hello world hello world hello",
        "apple apple apple",
        "good morning good evening good night",
        "red blue green red yellow blue",
        "fast slow fast quick slow quick",
};

std::vector<std::string> parentheses =
{
	"{[()()]{}{}}",//OK
	"{[(()])}", //NOT OK
	"(([[{}]]))",//OK
	"(([[{})]]))",//NOT OK
	"[({}){[()()]()}]",//OK
	"[({)}{[(])}]",//NOT OK
	"{[({[]})]}",//OK
	"{[({[)]})]}",//NOT OK
	"(({}))[]{}",//OK
	"(({})[]{]",//NOT OK
};