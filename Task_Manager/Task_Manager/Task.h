/*****************************************************************//**
 * @file   Task.h
 * @brief  A declaration for the task class.
 * 
 * @author Phlabry
 * @date   March 2025
 * 
 * The task class contains details about a task such as title, deadline and priority.
 * It provides methods for managing these tasks.
 *********************************************************************/

#pragma once
#ifndef TASK
#define TASK
#include "string"

class Task {
private:
	/// title The name of the task.
	std::string title;
	/// deadline The deadline of the task.
	std::string deadline;
	/// priority The priority level of the task (1-3 : Low/Medium/High).
	int priority;
public:
	/**
	 * @param title The name of the task.
	 * @param deadline The deadline of the task.
	 * @param priority The priority level of the task (1-3 : Low/Medium/High).
	 */
	Task(const std::string& title, const std::string& deadline, int priority);

	/**
	 * @return The task title.
	 */
	std::string getTitle() const;

	/**
	 * @return The task deadline.
	 */
	std::string getDeadline() const;

	/**
	 * @return The task priority level.
	 */
	int getPriority() const;

	/**
	 * @param title Set the task title.
	 */
	void setTitle(const std::string& title);

	/**
	 * @param deadline Set the task deadline.
	 */
	void setDeadline(const std::string& deadline);

	/**
	 * @param priority Set the task priority level.
	 */
	void setPriority(int priority);

	/**
	 * Displays all the data about a task in a way that it is easy to read
	 */
	void getInfo() const;
};

#endif


