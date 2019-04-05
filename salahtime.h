#define CALENDAR_SIZE 2562
#define TIME_STR_SIZE 6

void
usage(void);

void
time_converter(const char input_time_string[TIME_STR_SIZE], int add_sub_min);

void
display_calendar(const char calendar_array[CALENDAR_SIZE][TIME_STR_SIZE],
    int add_sub_min);
