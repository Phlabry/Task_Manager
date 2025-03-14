/*****************************************************************//**
 * @file   sortingModes.h
 * @brief  Creates an enumaration for sorting methods of the tasks
 * 
 * @author Phlabry
 * @date   March 2025
 * 
 * Reason I made this is because in my previous projects I often ran 
 * into circular dependency issues when using enumaration for these
 * kinds of functions. The way to deal with that I found is to create 
 * a seperate header file for the enumaration.
 *********************************************************************/

#pragma once
#ifndef SORTINGMODES
#define SORTINGMODES

enum class sortingModes {
    EARLIEST_DEADLINE = 0,
    LATEST_DEADLINE = 1,
    HIGHEST_PRIORITY = 2,
    LOWEST_PRIORITY = 3,
    ALPHABETICAL_ASCENDING = 4,
    ALPHABETICAL_DESCENDING = 5,
    STATUS = 6,
    DATE_ADDED = 7,
};

#endif
