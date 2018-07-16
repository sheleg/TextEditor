#pragma once

template<typename ItemT>
struct Node
{
	ItemT data_;
	Node* left_;
	Node* right_;

	Node& operator = (const Node& node)
	{
		data_ = node.data_;
		left_ = node.left_;
		right_ = node.right_;
		return *this;
	}
};


template<typename ItemT>
class Tree
{
	Node<ItemT>* root_ = nullptr;

public:
	Tree(Node<ItemT>* root)
	: root_(root) {}

	void add(Node<ItemT>* node)
	{

	}
};