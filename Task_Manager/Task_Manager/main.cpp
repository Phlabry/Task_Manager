#include <iostream>
#include "taskCollection.h"

int main() {
    std::cout << "Task Manager Running..." << std::endl;

    // Example usage
    taskCollection collection;
    collection.addTask(Task("Finish project", "2025-03-15", 2));
    collection.addTask(Task("Buy groceries", "2025-03-13", 1));
    collection.displayCollection();

    return 0; // Indicating successful execution
}
