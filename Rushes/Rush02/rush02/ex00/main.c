
 // Parse dictionary function

 t_dict *parse_dict(char *filename)
{
    int fd;
    char buffer[1024];
    ssize_t bytes_read;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (NULL);



 //Initialize empty dictionary structure (array of structs or a hash table??)

 //While reading file, trim spaces from start and end of line
 //if line empty, continue to next
 //split into two parts, left part number (key), right part word (value)
 //Validate number part (must contain only digits) and convert to integer using atoi? (maybe not needed)
 //Validate the word part (must not be empty), remove leading or trailing spaces
 //Finally, store (key, value) part in the dict structure or hash table
 //if Dictionary is missing entries needed, print dict error
 
 //close file and return to dict structure

}

 //input validation
 int    is_valid_number(char *str)
 {
    int i = 0;
    if (!str || str[0] == '\0')  // Empty string check
        return (0);

    while (str[i])
    {
        if ()  // Ensure only digits
            return (0);
        i++;
    }
    return (1);


 //arg check

 //if arg is 1 or greater than 3 error
 // if argc is 2, set file to numbers.dict
// if argc is 3, set dict file to argv1 and input number to argv2

//if valid number check

//set dict

//set result = convert number to words

 }

int main(int argc, char **argv)
{
    //declare dict file
    //declare dict struct
    char *number;
    char *result;

    //Validate arguments count
    if (argc < 2 || argc > 3)
    {
        printf("Error\n");
        return (1);
    }

    //Assign dictionary and number based on arguments

    //Validate if input is a positive number
  
    //Parse the dictionary


    // Convert number to words using dictionary


    // Print the result
    

    // Free allocated memory
  

    return (0);
}




//NUMBER TO WORD conversion

//if number exist as a direct key check

//if number is more or equal than billion
//make recursive call for each
//if number 1 million, same
//if more than 1000,
///if more than 100,
//if more than 20
//if less than 20...
//return formatted result string


//UTILITY functions

//trimming spaces
//freeing dictionary
