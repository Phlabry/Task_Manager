/*****************************************************************//**
 * @file   taskCollection.h
 * @brief  Declared the class taskCollection and its methods.
 * 
 * @author Phlabry
 * @date   March 2025
 * 
 * Creates a vector containing the tasks. Enables the user to sort in
 * various ways such as with priority or nearest deadline.
 *********************************************************************/

#pragma once
#ifndef TASKCOLLECTION
#define TASKCOLLECTION
#include <vector>
#include <string>
#include "Task.h"

/**
 * @todo make a saveForLater function. seperate vector that keeps track of items. 
 */

class taskCollection {
private:
	/// Vector that will include all of the user's tasks.
	std::vector<Task> taskVector;
public:
	/**
	 * Default constructor. Does not have a function.
	 */
	taskCollection();
	/**
	 * @param task
	 * 
	 * Adds a task specified by the user.
	 */
	void addTask(const Task& task);
	/**
	 * @param title 
	 * Removes a task specified by the user.
	 * 
	 * Search happens using the title of the task.
	 */
	void removeTask(const std::string title);
	/**
	 * @param index
	 * @return The task on a specific index provided by the user.
	 * 
	 * Return a task on a specific index.
	 */
	Task getTask(int index);
	/**
	 * Shows every task that user has added.
	 */
	void displayCollection();
};
#endif
