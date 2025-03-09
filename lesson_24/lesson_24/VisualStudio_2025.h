#pragma once
#include <string>
#include <stack>
#include <unordered_map>
#include <unordered_set>

struct Node
{
	Node(int val) : data(val), next(nullptr) {}
	int data;
	Node* next;
};


class VisualStudio_2025
{
public:
	VisualStudio_2025()
	{
		pairsParenthesis =
		{
		{')', '('},
		{']', '['},
		{'}', '{'}
		};
	}

	bool parenthesisValidation(const std::string & parentheses)
	{
		std::stack<char> stack;

		for (char parenthesis : parentheses)
		{
			if (pairsParenthesis.count(parenthesis))
			{
				if (stack.empty() || stack.top() != pairsParenthesis[parenthesis])
				{
					return false;
				}
				stack.pop();
			}
			else if (parenthesis == '(' || parenthesis == '[' || parenthesis == '{')
			{
				stack.push(parenthesis);
			}
		}
		return stack.empty();
	}


	bool has_cycle(Node* head)
	{
		std::unordered_set<Node*> visited;

		Node* current = head;

		while (current)
		{
			if (visited.count(current))
			{
				return true;
			}
			visited.insert(current);
			current = current->next;
		}
		return false;
	}

private:
	std::unordered_map<char, char> pairsParenthesis;

};