#include <stdbool.h>

#ifndef SHELL_COMMAND_H
#define SHELL_COMMAND_H
/**
 * An enum indicating the type of the command
 */
enum CommandType {
    CD,
    ECHO,
    PWD,
    COMMENT,
    EXPRESSION,
    PROGRAM,
    EXIT,
    HISTORY,
    EXPORT,
    PRINTENV
};
/**
 * A struct containing the information of the
 * shell command.
 */
struct Command {
    char *command;
    int argc;
    char **argv;
    bool isBackground;
    enum CommandType type;
    int error_code;
};
#endif //SHELL_COMMAND_H
