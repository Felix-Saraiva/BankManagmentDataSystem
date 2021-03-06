#pragma once
#include "Client.h"
#include <iostream>

using namespace std;

class ClientTree
{
public:
	Client* root;

	ClientTree();
	Client* Find(Client* key);
	Client* Find(int key);
	Client* FindMin(Client* root);
	struct Client* DeleteAccount(struct Client* root, int AccountNumber);
	struct Client* Getsuccessor(Client* root, int AccountNumber);
	void DisplayInOrder(Client* localRoot);
	void InsertAccount(int AccountNumber, int Amount);
	bool Search(Client* root, int AccountNumber);
	int FindHeight(struct Client* root);
	bool IsBst(Client* root, int minValue, int maxValue);
private:
};

