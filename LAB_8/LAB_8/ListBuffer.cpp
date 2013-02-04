/*
* File: ListBuffer.cpp
* --------------------
* This file implements the EditorBuffer class using a linked
* list to represent the buffer.
*/
#include <iostream>
#include "buffer.h"
using namespace std;
/*
* Implementation notes: EditorBuffer constructor
* ----------------------------------------------
* This function initializes an empty editor buffer represented as a
* linked list. In this representation (which is described in more detail
* in the bufferpriv.h file), the empty buffer contains a dummy cell whose
* ch field is never used. The constructor must therefore allocate this
* dummy cell and set the internal pointers correctly.
*/
EditorBuffer::EditorBuffer() {
<<<<<<< HEAD
	start = cursor = new Cell;
	start->link = nullptr;
=======
start = cursor = new Cell;
start->link = nullptr;
>>>>>>> incliude problem
}
/*
* Implementation notes: EditorBuffer destructor
* ---------------------------------------------
* The destructor must delete every cell in the buffer. Note that the loop
* structure is not exactly the standard for loop pattern for processing
* every cell within a linked list. The complication that forces this
* change is that the body of the loop can't free the current cell and
* later have the for loop use the link field of that cell to move to
* the next one. To avoid this problem, this implementation copies the
* link pointer before calling delete.
*/
EditorBuffer::~EditorBuffer() {
<<<<<<< HEAD
	Cell *cp = start;
	while (cp != nullptr) {
		Cell *next = cp->link;
		delete cp;
		cp = next;
	}
=======
Cell *cp = start;
while (cp != nullptr) {
Cell *next = cp->link;
delete cp;
cp = next;
}
>>>>>>> incliude problem
}
/*
* Implementation notes: moveCursor methods
* ----------------------------------------
* The four methods that move the cursor have different time complexities
* because the structure of a linked list is asymmetrical with respect to
* moving backward and forward. The moveCursorForward and moveCursorToStart
* methods operate in constant time. By contrast, the moveCursorBackward
* and moveCursorToEnd methods each require a loop that runs in linear time.
*/
void EditorBuffer::moveCursorForward() {
}
void EditorBuffer::moveCursorBackward() {
}
void EditorBuffer::moveCursorToStart() {
}
void EditorBuffer::moveCursorToEnd() {
}
/*
* Implementation notes: insertCharacter
* -------------------------------------
* The steps required to insert a new character are:
*
* 1. Allocate a new cell and put the new character in it.
* 2. Copy the pointer indicating the rest of the list into the link.
* 3. Update the link in the current cell to point to the new one.
* 4. Move the cursor forward over the inserted character.
*/
void EditorBuffer::insertCharacter(char ch) {
}
/*
* Implementation notes: deleteCharacter
* -------------------------------------
* The steps necessary to delete a character are:
*
* 1. Remove the current cell by pointing to its successor.
* 2. Free the cell to reclaim the memory.
*/
void EditorBuffer::deleteCharacter() {
}
/*
* Implementation notes: showContents
* ----------------------------------
* The first for loop uses the standard linked-list pattern to loop through
* the cells in the linked list. The second loop marks the cursor position.
*/
void EditorBuffer::showContents() {
}