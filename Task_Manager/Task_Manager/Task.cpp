/*****************************************************************//**
 * @file   Task.cpp
 * @header Task.h
 * @brief  Implements the methods in the Task.h header file.
 * 
 * @author Phlabry
 * @date   March 2025
 * 
 * Implements all the methods from the header file Task.h
 *********************************************************************/

#include "Task.h"
#include <string>
#include <iostream>

/**
 * @see Task::Task(const std::string& title, const std::string& deadline, int priority)
 */
Task::Task(const std::string& title, const std::string& deadline, int priority) 
	: title(title), deadline(deadline), priority(priority) {}

/**
 * @see Task::getTitle()
 */
std::string Task::getTitle() const {
	return this->title;
}

/**
 * @see Task::getDeadline()
 */
std::string Task::getDeadline() const {
    return deadline;
}

/**
 * @see Task::getPriority()
 */
int Task::getPriority() const {
    return priority;
}

/**
 * @see Task::setTitle(const std::string& title)
 */
void Task::setTitle(const std::string& title) {
    this->title = title;
}

/**
 * @see Task::setDeadline(const std::string& deadline)
 */
void Task::setDeadline(const std::string& deadline) {
    this->deadline = deadline;
}

/**
 * @see Task::setPriority(int priority)
 */
void Task::setPriority(int priority) {
    this->priority = priority;
}

/**
* @see std::string getInfo()
*/

void Task::getInfo() const {
    std::cout << "Title: " << this->title << " Deadline: " << this->deadline << " Priority: " << this->priority << std::endl;
}





