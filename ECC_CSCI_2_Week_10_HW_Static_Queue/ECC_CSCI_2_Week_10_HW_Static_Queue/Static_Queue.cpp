/*
 Program Name: Static_Queue.cpp
 Programmer: Moris Gomez
 Date: Tuesday 04/18/2024
 Version Control: 9.0
 About: Week 10, CSCI 2, HW.
 Description:
 Write a program that gets a sentence (string)
 from a user and puts it into a queue of characters.
 The program should then dequeue each character,
 convert it to uppercase and store the result as a
 sentence (string). Print the result of this process.
*/

#include <iostream>
#include <string>
using namespace std;

//create class StringQueue:
class StringQueue
{
private:
    char *qArray; //holds the address of the array //used to access it via pointer.
    long int qSize; //holds size of the array //how many elements or indexes should it hold?
    long int front; //holds the index of the front value in array.
    long int rear; //holds the index of the rear value in array.
    long int numItems; //holds the number values? # of indexes with an actual value.
    
public:
//FUNCTION 1. constructor:
    StringQueue(long int size)
    {
        qArray = new char[size];
        front = -1;
        rear = -1;
        numItems = 0;
        qSize = size;
    } //end constructor.
    
//FUNCTION 2. enqueue():
    void enqueue(char ch)
    {
        if(isFull()) //if array is full, no space to insert a value at rear.
        {
            cout << "QUEUE IS FULL, NO SPACE TO ADD NEW VALUES!" << endl;
        }
        else //if not full, space to insert new value at rear.
        {
            rear = (rear + 1) % qSize;
            qArray[rear] = ch;
            numItems = numItems + 1;
        }
    } //end enqueue() function.

//FUNCTION 3. dequeue():
    void dequeue(char &ch)
    {
        if(isEmpty()) //if array empty, nothing to remove.
        {
            cout << "QUEUE IS EMPTY, NOTHING TO REMOVE!" << endl;
        }
        else //if array has some values, return num from front which is removed.
        {
            //special case. one element in array:
            if(front == rear)
            {
                ch = qArray[front];
                front = -1;
                rear = -1;
                numItems = 0;
            }
            else //remove value stored in front element:
            {
                ch = qArray[front];
                front = (front + 1) % qSize;
                numItems = numItems - 1;
            } //end inner else.
        } //end outer else.
    } //end dequeue() function.

//FUNCTION 4. isEmpty():
    bool isEmpty() const
    {
        if(numItems == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    } //end isEmpty() function.

//FUNCTION 5. isFull():
    bool isFull() const
    {
        if(numItems < qSize)
        {
            return false;
        }
        else
        {
            return true;
        }
    } //end isFull() function.
    
//FUNCTION 6. clear():
    void clear()
    {
        front = qSize - 1;
        rear = qSize -1;
        numItems = 0;
    } //end clear() function.

//FUNCTION 7. display():
    void display()
    {
        if(numItems == 0)
        {
            cout << "The Queue is empty!" << endl;
        }
        else
        {
            cout << "------queue info so far:------" << endl;
            cout << "size of array: " << qSize <<endl;
            cout << "num of items: " << numItems << endl;
            cout << "front: " << front << endl;
            cout << "rear: " << rear << endl;
            
            for(int i = 0; i < qSize; i++)
            {
                cout << "index " << i << " has value of: " << qArray[i] << endl;
            } //end for loop.
            cout << "------------------------------" << endl;
        } //end else.
    } //end display() function.

//FUNCTION 7. upperCase():
    void upperCase()
    {
        //step 1. create temp empty array to store upper case letters:
        char tempArray[qSize];
        //step 2. loop through queue and push to tempArray:
        for(int i = 0; i < qSize; i++)
        {
            if(qArray[i] == 'a')
            {
                tempArray[i] = 'A';
            }
            else if(qArray[i] == 'b')
            {
                tempArray[i] = 'B';
            }
            else if(qArray[i] == 'c')
            {
                tempArray[i] = 'C';
            }
            else if(qArray[i] == 'd')
            {
                tempArray[i] = 'D';
            }
            else if(qArray[i] == 'e')
            {
                tempArray[i] = 'E';
            }
            else if(qArray[i] == 'f')
            {
                tempArray[i] = 'F';
            }
            else if(qArray[i] == 'g')
            {
                tempArray[i] = 'G';
            }
            else if(qArray[i] == 'h')
            {
                tempArray[i] = 'H';
            }
            else if(qArray[i] == 'i')
            {
                tempArray[i] = 'I';
            }
            else if(qArray[i] == 'j')
            {
                tempArray[i] = 'J';
            }
            else if(qArray[i] == 'k')
            {
                tempArray[i] = 'K';
            }
            else if(qArray[i] == 'l')
            {
                tempArray[i] = 'L';
            }
            else if(qArray[i] == 'm')
            {
                tempArray[i] = 'M';
            }
            else if(qArray[i] == 'n')
            {
                tempArray[i] = 'N';
            }
            else if(qArray[i] == 'o')
            {
                tempArray[i] = 'O';
            }
            else if(qArray[i] == 'p')
            {
                tempArray[i] = 'P';
            }
            else if(qArray[i] == 'q')
            {
                tempArray[i] = 'Q';
            }
            else if(qArray[i] == 'r')
            {
                tempArray[i] = 'R';
            }
            else if(qArray[i] == 's')
            {
                tempArray[i] = 'S';
            }
            else if(qArray[i] == 't')
            {
                tempArray[i] = 'T';
            }
            else if(qArray[i] == 'u')
            {
                tempArray[i] = 'U';
            }
            else if(qArray[i] == 'v')
            {
                tempArray[i] = 'V';
            }
            else if(qArray[i] == 'w')
            {
                tempArray[i] = 'W';
            }
            else if(qArray[i] == 'x')
            {
                tempArray[i] = 'X';
            }
            else if(qArray[i] == 'y')
            {
                tempArray[i] = 'Y';
            }
            else if(qArray[i] == 'z')
            {
                tempArray[i] = 'Z';
            }
            else if(qArray[i] == ' ')
            {
                tempArray[i] = ' ';
            }
            else
            {
                tempArray[i] = qArray[i];
            }
        } //end for loop.
        cout << "your sentence all uppercase is: " << tempArray << endl;
    } //end upperCase() function.
}; //close IntQueue class.

//driver main for StringQueue class:
int main()
{
    //1. user enters string.
    string sOne;
    cout << "Enter sentence: ";
    getline(cin, sOne);
    
    //2. store size of string in variable.
    long int sizeStringOne = sOne.size();

    //3. create an empty queue for string.
    StringQueue qOne(sizeStringOne);
    
    //4. enqueue string characters(including spaces) to corresponding queue.
    for (int i = 0; i < sizeStringOne; i++)
    {
        qOne.enqueue(sOne[i]);
    }
    
    //5. upperCase algorithm displays all caps string from within class.
    qOne.upperCase();
    
    return 0;
} //end main function.

/*
 CASE STUDIES:
 1. input: "Moris Gomez was here!" = PASSED.
 2. input: "i Love c++." = PASSED.
 3. input: "hi my name is Ashley." = PASSED.
 4. input: "moris gomez WAS here!" = PASSED.
 5. input: "i do NOT like JAVA?!" = PASSED.
*/
