/*****************************************************************//**
 * @file   taskCollection.cpp
 * @header tastCollection.h
 * @brief  Implements the methods in the taskCollection.h header file
 * 
 * @author Phlabry
 * @date   March 2025
 * 
 * Implements all the methods from the header file TaskCollection.h
 *********************************************************************/

#include "taskCollection.h"
#include <string>
#include <iostream>

/**
 * @see taskCollection::taskCollection()
 */
taskCollection::taskCollection() {}

/**
 * @see taskCollection::addTask(const Task& task)
 */
void taskCollection::addTask(const Task& task) {
	taskVector.push_back(task);
}

/**
 * @see taskCollection::removeTask(const std::string title)
 */

void taskCollection::removeTask(const std::string title) {
	taskVector.erase(
		std::remove_if(taskVector.begin(), taskVector.end(),
			[&title](const Task& t) {return t.getTitle() == title; }),
		taskVector.end()
	);
}

/**
 * @see taskCollection::getTask(int index)
 */

Task taskCollection::getTask(int index) {
	if (index >= 0 && index < taskVector.size()) {
		return taskVector[index];
	}
	else {
		perror("Out of bounds index!");
		exit(EXIT_FAILURE);
	}
}

/**
 * @see taskCollection::displayCollection()
 */
void taskCollection::displayCollection(){
	for (const Task& task : taskVector) {
		task.getInfo();
	}
}

/**
 * @see taskCollection::sortCollection()
 */

void taskCollection::sortCollection() {
	/**
	 * @todo IMPLEMENT THIS. SOMEONE HELP
	 * 
	 */
}





