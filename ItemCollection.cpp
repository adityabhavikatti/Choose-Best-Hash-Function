#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>
#include "ItemCollection.hpp"

using std::string;
using std::ifstream;
using std::cout;
using std::endl;

// function to return the hash value based on the first digit
unsigned int hashfct1(unsigned int barcode) {
  
  barcode = barcode/1000000;;

  unsigned int d;
  d = barcode % 5;
  return d;
}

// function to return the hash value based on the second digit
unsigned int hashfct2(unsigned int barcode) {
  barcode = (barcode / 100000) % 10;
  unsigned int d;
  d = barcode % 5;
  return d;
}

// function to return the hash value based on the third digit
unsigned int hashfct3(unsigned int barcode) {
  barcode = (barcode / 10000) % 10;
  unsigned int d;
  d = barcode % 5;
  return d;
}

// function to return the hash value based on the fourth digit
unsigned int hashfct4(unsigned int barcode) {
  barcode = (barcode / 1000) % 10;
  unsigned int d;
  d = barcode % 5;
  return d;
}

// function to return the hash value based on the fifth digit
unsigned int hashfct5(unsigned int barcode) {
  barcode = (barcode / 100) % 10;
  unsigned int d;
  d = barcode % 5;
  return d;
}

// function to return the hash value based on the fourth digit
unsigned int hashfct6(unsigned int barcode) {
  barcode = (barcode / 10) % 10;
  unsigned int d;
  d = barcode % 5;
  return d;
}

// function to return the hash value based on the fifth digit
unsigned int hashfct7(unsigned int barcode) {
  barcode = (barcode % 10);
  unsigned int d;
  d = barcode % 5;
  return d;
}


// Constructor for struct Item
Item::Item(string itemColor, string itemShape, string itemBrand,
		 unsigned int barcode, Item* next_):itemColor_(itemColor),itemShape_(itemShape), itemBrand_(itemBrand),
				       barcode_(barcode), next_(NULL)
{};

// Load information from a text file with the given filename
// THIS FUNCTION IS COMPLETE
void ItemCollection::readTextfile(string filename) {
  ifstream myfile(filename);

  if (myfile.is_open()) {
    cout << "Successfully opened file " << filename << endl;
    string itemColor;
    string itemShape;
    string itemBrand;
    unsigned int barcode;
    while (myfile >> itemColor >> itemShape >> itemBrand >> barcode) {
			if (itemColor.size() > 0)
      	addItem(itemColor, itemShape, itemBrand, barcode);
    }
    myfile.close();
  }
  else
    throw std::invalid_argument("Could not open file " + filename);
}

void ItemCollection::addItem(string itemColor, string itemShape, string itemBrand, unsigned int barcode) {
  // TO BE COMPLETED
  // function that adds the specified pair of glasses to main display (i.e., to all hash tables)
  int index1 = hashfct1(barcode);
  int index2 = hashfct2(barcode);
  int index3 = hashfct3(barcode);
  int index4 = hashfct4(barcode);
  int index5 = hashfct5(barcode);
  int index6 = hashfct6(barcode);
  int index7 = hashfct7(barcode);
  
  if (itemobj[index1]->itemColor_ == "")
  {
    itemobj[index1]->itemColor_ = itemColor;
    itemobj[index1]->itemShape_ = itemShape;
    itemobj[index1]->itemBrand_ = itemBrand;
    itemobj[index1]->barcode_ = barcode;
  }
  else
  {
    Item* ptr = itemobj[index1];
    Item* n = new Item;

    n->itemColor_ = itemColor;
    n->itemShape_ = itemShape;
    n->itemBrand_ = itemBrand;
    n->barcode_ = barcode;
    n-> next_ = NULL;
    while (ptr->next_ != NULL)
    {
      ptr = ptr->next_;
    }
    ptr->next_ = n;
  }

  if (itemobj[index2]->itemColor_ == "")
  {
    itemobj[index2]->itemColor_ = itemColor;
    itemobj[index2]->itemShape_ = itemShape;
    itemobj[index2]->itemBrand_ = itemBrand;
    itemobj[index2]->barcode_ = barcode;
  }
  else
  {
    Item* ptr = itemobj[index2];
    Item* n = new Item;

    n->itemColor_ = itemColor;
    n->itemShape_ = itemShape;
    n->itemBrand_ = itemBrand;
    n->barcode_ = barcode;
    n-> next_ = NULL;
    while (ptr->next_ != NULL)
    {
      ptr = ptr->next_;
    }
    ptr->next_ = n;
  }

  if (itemobj[index3]->itemColor_ == "")
  {
    itemobj[index3]->itemColor_ = itemColor;
    itemobj[index3]->itemShape_ = itemShape;
    itemobj[index3]->itemBrand_ = itemBrand;
    itemobj[index3]->barcode_ = barcode;
  }
  else
  {
    Item* ptr = itemobj[index3];
    Item* n = new Item;

    n->itemColor_ = itemColor;
    n->itemShape_ = itemShape;
    n->itemBrand_ = itemBrand;
    n->barcode_ = barcode;
    n-> next_ = NULL;
    while (ptr->next_ != NULL)
    {
      ptr = ptr->next_;
    }
    ptr->next_ = n;
  }

  if (itemobj[index4]->itemColor_ == "")
  {
    itemobj[index4]->itemColor_ = itemColor;
    itemobj[index4]->itemShape_ = itemShape;
    itemobj[index4]->itemBrand_ = itemBrand;
    itemobj[index4]->barcode_ = barcode;
  }
  else
  {
    Item* ptr = itemobj[index4];
    Item* n = new Item;

    n->itemColor_ = itemColor;
    n->itemShape_ = itemShape;
    n->itemBrand_ = itemBrand;
    n->barcode_ = barcode;
    n-> next_ = NULL;
    while (ptr->next_ != NULL)
    {
      ptr = ptr->next_;
    }
    ptr->next_ = n;
  }

  if (itemobj[index5]->itemColor_ == "")
  {
    itemobj[index5]->itemColor_ = itemColor;
    itemobj[index5]->itemShape_ = itemShape;
    itemobj[index5]->itemBrand_ = itemBrand;
    itemobj[index5]->barcode_ = barcode;
  }
  else
  {
    Item* ptr = itemobj[index5];
    Item* n = new Item;

    n->itemColor_ = itemColor;
    n->itemShape_ = itemShape;
    n->itemBrand_ = itemBrand;
    n->barcode_ = barcode;
    n-> next_ = NULL;
    while (ptr->next_ != NULL)
    {
      ptr = ptr->next_;
    }
    ptr->next_ = n;
  }

  if (itemobj[index6]->itemColor_ == "")
  {
    itemobj[index6]->itemColor_ = itemColor;
    itemobj[index6]->itemShape_ = itemShape;
    itemobj[index6]->itemBrand_ = itemBrand;
    itemobj[index6]->barcode_ = barcode;
  }
  else
  {
    Item* ptr = itemobj[index6];
    Item* n = new Item;

    n->itemColor_ = itemColor;
    n->itemShape_ = itemShape;
    n->itemBrand_ = itemBrand;
    n->barcode_ = barcode;
    n-> next_ = NULL;
    while (ptr->next_ != NULL)
    {
      ptr = ptr->next_;
    }
    ptr->next_ = n;
  }

  if (itemobj[index7]->itemColor_ == "")
  {
    itemobj[index7]->itemColor_ = itemColor;
    itemobj[index7]->itemShape_ = itemShape;
    itemobj[index7]->itemBrand_ = itemBrand;
    itemobj[index7]->barcode_ = barcode;
  }
  else
  {
    Item* ptr = itemobj[index7];
    Item* n = new Item;

    n->itemColor_ = itemColor;
    n->itemShape_ = itemShape;
    n->itemBrand_ = itemBrand;
    n->barcode_ = barcode;
    n-> next_ = NULL;
    while (ptr->next_ != NULL)
    {
      ptr = ptr->next_;
    }
    ptr->next_ = n;
  }
}

bool ItemCollection::removeItem(unsigned int barcode) {
  // TO BE COMPLETED
  // function that removes the pair of glasses specified by the barcode from the display
  // if pair is found, then it is removed and the function returns true
  // else returns false

  


    return true;
}

unsigned int ItemCollection::bestHashing() {
  // TO BE COMPLETED
  // function that decides the best has function, i.e. the ones among
  // fct1-fct7 that creates the most balanced hash table for the current
  // ItemCollection data member allItems

	// Hints:
	// Calculate the balance of each hashtable, one by one.

	 for (unsigned int i=0; i<10; ++i) {
   // cout << hT1.bucket_size(i); // Call bucket_size() to get the size of each bucket
    hT1_size = hT1.bucket_size(i);
  }
	 for (unsigned int i=0; i<10; ++i) {
   // cout << hT2.bucket_size(i); // Call bucket_size() to get the size of each bucket
    hT2_size = hT2.bucket_size(i);
  }

	 for (unsigned int i=0; i<10; ++i) {
   // cout << hT3.bucket_size(i); // Call bucket_size() to get the size of each bucket
   hT3_size = hT2.bucket_size(i);
  }

	 for (unsigned int i=0; i<10; ++i) {
   // cout << hT4.bucket_size(i); // Call bucket_size() to get the size of each bucket
   hT4_size = hT4.bucket_size(i);
  }

	 for (unsigned int i=0; i<10; ++i) {
   // cout << hT5.bucket_size(i); // Call bucket_size() to get the size of each bucket
   hT5_size = hT5.bucket_size(i);
  }

	 for (unsigned int i=0; i<10; ++i) {
   // cout << hT6.bucket_size(i); // Call bucket_size() to get the size of each bucket
   hT6_size = hT6.bucket_size(i);
  }

	 for (unsigned int i=0; i<10; ++i) {
   // cout << hT7.bucket_size(i); // Call bucket_size() to get the size of each bucket
   hT7_size = hT7.bucket_size(i);
  }


	// Then, calculate the lowest balance

    unsigned int balance[8];
    balance[0] = hT1_size;
    balance[1] = hT2_size;
    balance[2] = hT3_size;
    balance[3] = hT4_size;
    balance[4] = hT5_size;
    balance[5] = hT6_size;
    balance[6] = hT7_size;

    unsigned int min_loc, max_loc;
    min_loc = balance[0];
    for(int i=0; i<3; i++)
    {
      if(min_loc>balance[i]) 
         min_loc=balance[i];
    }
    
    return min_loc;
}

// ALREADY COMPLETED
size_t ItemCollection::size() {
    if ((hT1.size() != hT2.size()) || (hT1.size() != hT3.size()) || (hT1.size() != hT4.size()) || (hT1.size() != hT5.size())|| (hT1.size() != hT6.size()) || (hT1.size() != hT7.size()))
  	throw std::length_error("Hash table sizes are not the same");
    
	return hT1.size();
}
