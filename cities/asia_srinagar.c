/*
 * Islamic prayer time for Asia/Srinagar
 *   I used https://www.salahtimes.com/india/srinagar
 *   to get data & then formatted it using standard
 *   tools like sed, cut & awk.
 *   asia_srinagar.c also differs with europe_copenhagen
 *   in that the former uses 12hr-time, while latter
 *   uses 24hr-time, mainly because thats the data I got
 *   and also because thats the prevalent system in Srinagar.
 *   I couldn't add am/pm to time, as that reports error.
 *
 * The Timezone Database (tz or zonebase).
 * https://www.iana.org/time-zones
 *
 */

/*
 * The first element in the array contains the numbers of strings in the array.
 * So "01-01" is the first string, "07:02", is the second and so on.
 * The second element in the array contains the number of characters in each
 * string, i.e. the dates and times.
 *
 * For each day there are 7 strings of each 6 characters (including the nul
 * terminator). That's 7 strings * 366 days = 2562. 366 days due to the
 * possibility of a leap day in February.
 */
#define CALENDAR_SIZE 2562
#define TIME_STR_SIZE 6

const char asia_srinagar[CALENDAR_SIZE][TIME_STR_SIZE] = {
    "01-01", "07:02", "05:32", "03:14", "12:34", "07:37", "06:07",
    "01-02", "07:02", "05:33", "03:15", "12:35", "07:37", "06:07",
    "01-03", "07:03", "05:34", "03:16", "12:35", "07:37", "06:08",
    "01-04", "07:04", "05:35", "03:16", "12:36", "07:37", "06:08",
    "01-05", "07:05", "05:36", "03:17", "12:36", "07:37", "06:08",
    "01-06", "07:05", "05:36", "03:18", "12:37", "07:37", "06:08",
    "01-07", "07:06", "05:37", "03:19", "12:37", "07:37", "06:08",
    "01-08", "07:07", "05:38", "03:19", "12:38", "07:37", "06:08",
    "01-09", "07:08", "05:39", "03:20", "12:38", "07:37", "06:08",
    "01-10", "07:08", "05:40", "03:21", "12:38", "07:37", "06:08",
    "01-11", "07:09", "05:41", "03:22", "12:39", "07:37", "06:09",
    "01-12", "07:10", "05:42", "03:23", "12:39", "07:37", "06:08",
    "01-13", "07:11", "05:43", "03:24", "12:40", "07:37", "06:08",
    "01-14", "07:12", "05:44", "03:24", "12:40", "07:37", "06:08",
    "01-15", "07:12", "05:45", "03:25", "12:40", "07:36", "06:08",
    "01-16", "07:13", "05:45", "03:26", "12:41", "07:36", "06:08",
    "01-17", "07:14", "05:46", "03:27", "12:41", "07:36", "06:08",
    "01-18", "07:15", "05:47", "03:28", "12:41", "07:35", "06:08",
    "01-19", "07:16", "05:48", "03:29", "12:42", "07:35", "06:08",
    "01-20", "07:17", "05:49", "03:29", "12:42", "07:35", "06:07",
    "01-21", "07:17", "05:50", "03:30", "12:42", "07:34", "06:07",
    "01-22", "07:18", "05:51", "03:31", "12:42", "07:34", "06:07",
    "01-23", "07:19", "05:52", "03:32", "12:43", "07:33", "06:07",
    "01-24", "07:20", "05:53", "03:33", "12:43", "07:33", "06:06",
    "01-25", "07:21", "05:54", "03:34", "12:43", "07:32", "06:06",
    "01-26", "07:22", "05:55", "03:35", "12:43", "07:32", "06:05",
    "01-27", "07:23", "05:56", "03:35", "12:44", "07:31", "06:05",
    "01-28", "07:23", "05:57", "03:36", "12:44", "07:31", "06:04",
    "01-29", "07:24", "05:58", "03:37", "12:44", "07:30", "06:04",
    "01-30", "07:25", "05:59", "03:38", "12:44", "07:29", "06:03",
    "01-31", "07:26", "06:00", "03:39", "12:44", "07:29", "06:03",
    "02-01", "07:27", "06:01", "03:40", "12:44", "07:28", "06:02",
    "02-02", "07:28", "06:02", "03:40", "12:45", "07:27", "06:02",
    "02-03", "07:29", "06:03", "03:41", "12:45", "07:27", "06:01",
    "02-04", "07:29", "06:04", "03:42", "12:45", "07:26", "06:01",
    "02-05", "07:30", "06:05", "03:43", "12:45", "07:25", "06:00",
    "02-06", "07:31", "06:06", "03:44", "12:45", "07:24", "05:59",
    "02-07", "07:32", "06:07", "03:44", "12:45", "07:23", "05:58",
    "02-08", "07:33", "06:08", "03:45", "12:45", "07:22", "05:58",
    "02-09", "07:34", "06:09", "03:46", "12:45", "07:22", "05:57",
    "02-10", "07:34", "06:10", "03:47", "12:45", "07:21", "05:56",
    "02-11", "07:35", "06:11", "03:47", "12:45", "07:20", "05:55",
    "02-12", "07:36", "06:12", "03:48", "12:45", "07:19", "05:54",
    "02-13", "07:37", "06:13", "03:49", "12:45", "07:18", "05:54",
    "02-14", "07:38", "06:14", "03:49", "12:45", "07:17", "05:53",
    "02-15", "07:39", "06:15", "03:50", "12:45", "07:16", "05:52",
    "02-16", "07:39", "06:16", "03:51", "12:45", "07:15", "05:51",
    "02-17", "07:40", "06:16", "03:51", "12:45", "07:14", "05:50",
    "02-18", "07:41", "06:17", "03:52", "12:45", "07:13", "05:49",
    "02-19", "07:42", "06:18", "03:53", "12:45", "07:12", "05:48",
    "02-20", "07:43", "06:19", "03:53", "12:45", "07:10", "05:47",
    "02-21", "07:44", "06:20", "03:54", "12:44", "07:09", "05:46",
    "02-22", "07:44", "06:21", "03:54", "12:44", "07:08", "05:45",
    "02-23", "07:45", "06:22", "03:55", "12:44", "07:07", "05:44",
    "02-24", "07:46", "06:23", "03:56", "12:44", "07:06", "05:42",
    "02-25", "07:47", "06:24", "03:56", "12:44", "07:05", "05:41",
    "02-26", "07:48", "06:24", "03:57", "12:44", "07:03", "05:40",
    "02-27", "07:49", "06:25", "03:57", "12:44", "07:02", "05:39",
    "02-28", "07:49", "06:26", "03:58", "12:43", "07:01", "05:38",
    "03-01", "07:50", "06:27", "03:58", "12:43", "07:00", "05:37",
    "03-02", "07:51", "06:28", "03:59", "12:43", "06:59", "05:35",
    "03-03", "07:52", "06:29", "03:59", "12:43", "06:57", "05:34",
    "03-04", "07:53", "06:30", "04:00", "12:43", "06:56", "05:33",
    "03-05", "07:53", "06:30", "04:00", "12:42", "06:55", "05:32",
    "03-06", "07:54", "06:31", "04:01", "12:42", "06:53", "05:30",
    "03-07", "07:55", "06:32", "04:01", "12:42", "06:52", "05:29",
    "03-08", "07:56", "06:33", "04:01", "12:42", "06:51", "05:28",
    "03-09", "07:57", "06:34", "04:02", "12:41", "06:50", "05:27",
    "03-10", "07:58", "06:35", "04:02", "12:41", "06:48", "05:25",
    "03-11", "07:58", "06:35", "04:03", "12:41", "06:47", "05:24",
    "03-12", "07:59", "06:36", "04:03", "12:41", "06:46", "05:22",
    "03-13", "08:00", "06:37", "04:03", "12:40", "06:44", "05:21",
    "03-14", "08:01", "06:38", "04:04", "12:40", "06:43", "05:20",
    "03-15", "08:02", "06:39", "04:04", "12:40", "06:42", "05:18",
    "03-16", "08:03", "06:39", "04:04", "12:39", "06:40", "05:17",
    "03-17", "08:03", "06:40", "04:05", "12:39", "06:39", "05:16",
    "03-18", "08:04", "06:41", "04:05", "12:39", "06:37", "05:14",
    "03-19", "08:05", "06:42", "04:05", "12:39", "06:36", "05:13",
    "03-20", "08:06", "06:42", "04:05", "12:38", "06:35", "05:11",
    "03-21", "08:07", "06:43", "04:06", "12:38", "06:33", "05:10",
    "03-22", "08:08", "06:44", "04:06", "12:38", "06:32", "05:08",
    "03-23", "08:09", "06:45", "04:06", "12:37", "06:31", "05:07",
    "03-24", "08:09", "06:45", "04:06", "12:37", "06:29", "05:05",
    "03-25", "08:10", "06:46", "04:07", "12:37", "06:28", "05:04",
    "03-26", "08:11", "06:47", "04:07", "12:37", "06:27", "05:02",
    "03-27", "08:12", "06:48", "04:07", "12:36", "06:25", "05:01",
    "03-28", "08:13", "06:49", "04:07", "12:36", "06:24", "04:59",
    "03-29", "08:14", "06:49", "04:07", "12:36", "06:22", "04:58",
    "03-30", "08:15", "06:50", "04:08", "12:35", "06:21", "04:56",
    "03-31", "08:16", "06:51", "04:08", "12:35", "06:20", "04:55",
    "04-01", "08:17", "06:52", "04:08", "12:35", "06:18", "04:53",
    "04-02", "08:18", "06:52", "04:08", "12:34", "06:17", "04:52",
    "04-03", "08:19", "06:53", "04:08", "12:34", "06:16", "04:50",
    "04-04", "08:19", "06:54", "04:08", "12:34", "06:14", "04:49",
    "04-05", "08:20", "06:55", "04:09", "12:34", "06:13", "04:47",
    "04-06", "08:21", "06:55", "04:09", "12:33", "06:12", "04:46",
    "04-07", "08:22", "06:56", "04:09", "12:33", "06:10", "04:44",
    "04-08", "08:23", "06:57", "04:09", "12:33", "06:09", "04:43",
    "04-09", "08:24", "06:58", "04:09", "12:32", "06:08", "04:41",
    "04-10", "08:25", "06:58", "04:09", "12:32", "06:06", "04:40",
    "04-11", "08:26", "06:59", "04:09", "12:32", "06:05", "04:38",
    "04-12", "08:27", "07:00", "04:09", "12:32", "06:04", "04:37",
    "04-13", "08:28", "07:01", "04:09", "12:31", "06:03", "04:35",
    "04-14", "08:29", "07:01", "04:10", "12:31", "06:01", "04:34",
    "04-15", "08:30", "07:02", "04:10", "12:31", "06:00", "04:32",
    "04-16", "08:31", "07:03", "04:10", "12:31", "05:59", "04:31",
    "04-17", "08:32", "07:04", "04:10", "12:30", "05:58", "04:29",
    "04-18", "08:33", "07:05", "04:10", "12:30", "05:56", "04:28",
    "04-19", "08:34", "07:05", "04:10", "12:30", "05:55", "04:26",
    "04-20", "08:35", "07:06", "04:10", "12:30", "05:54", "04:25",
    "04-21", "08:36", "07:07", "04:10", "12:30", "05:53", "04:23",
    "04-22", "08:37", "07:08", "04:10", "12:29", "05:52", "04:22",
    "04-23", "08:39", "07:08", "04:10", "12:29", "05:50", "04:20",
    "04-24", "08:40", "07:09", "04:10", "12:29", "05:49", "04:19",
    "04-25", "08:41", "07:10", "04:10", "12:29", "05:48", "04:18",
    "04-26", "08:42", "07:11", "04:10", "12:29", "05:47", "04:16",
    "04-27", "08:42", "07:12", "04:10", "12:28", "05:46", "04:15",
    "04-28", "08:43", "07:12", "04:10", "12:28", "05:45", "04:14",
    "04-29", "08:43", "07:13", "04:11", "12:28", "05:44", "04:14",
    "04-30", "08:44", "07:14", "04:11", "12:28", "05:43", "04:13",
    "05-01", "08:44", "07:15", "04:11", "12:28", "05:42", "04:12",
    "05-02", "08:45", "07:15", "04:11", "12:28", "05:41", "04:11",
    "05-03", "08:45", "07:16", "04:11", "12:28", "05:40", "04:11",
    "05-04", "08:46", "07:17", "04:11", "12:28", "05:39", "04:10",
    "05-05", "08:46", "07:18", "04:11", "12:28", "05:38", "04:09",
    "05-06", "08:47", "07:19", "04:11", "12:27", "05:37", "04:08",
    "05-07", "08:47", "07:19", "04:11", "12:27", "05:36", "04:08",
    "05-08", "08:48", "07:20", "04:11", "12:27", "05:35", "04:07",
    "05-09", "08:49", "07:21", "04:11", "12:27", "05:34", "04:06",
    "05-10", "08:49", "07:22", "04:11", "12:27", "05:33", "04:06",
    "05-11", "08:50", "07:22", "04:11", "12:27", "05:32", "04:05",
    "05-12", "08:50", "07:23", "04:11", "12:27", "05:32", "04:05",
    "05-13", "08:51", "07:24", "04:12", "12:27", "05:31", "04:04",
    "05-14", "08:51", "07:25", "04:12", "12:27", "05:30", "04:04",
    "05-15", "08:52", "07:25", "04:12", "12:27", "05:29", "04:03",
    "05-16", "08:52", "07:26", "04:12", "12:27", "05:29", "04:03",
    "05-17", "08:53", "07:27", "04:12", "12:27", "05:28", "04:02",
    "05-18", "08:53", "07:28", "04:12", "12:27", "05:27", "04:02",
    "05-19", "08:54", "07:28", "04:12", "12:27", "05:27", "04:01",
    "05-20", "08:54", "07:29", "04:12", "12:27", "05:26", "04:01",
    "05-21", "08:55", "07:30", "04:12", "12:27", "05:25", "04:00",
    "05-22", "08:55", "07:31", "04:13", "12:28", "05:25", "04:00",
    "05-23", "08:56", "07:31", "04:13", "12:28", "05:24", "04:00",
    "05-24", "08:57", "07:32", "04:13", "12:28", "05:24", "03:59",
    "05-25", "08:57", "07:33", "04:13", "12:28", "05:23", "03:59",
    "05-26", "08:58", "07:33", "04:13", "12:28", "05:23", "03:59",
    "05-27", "08:58", "07:34", "04:13", "12:28", "05:22", "03:58",
    "05-28", "08:59", "07:35", "04:13", "12:28", "05:22", "03:58",
    "05-29", "08:59", "07:35", "04:14", "12:28", "05:21", "03:58",
    "05-30", "09:00", "07:36", "04:14", "12:28", "05:21", "03:58",
    "05-31", "09:00", "07:37", "04:14", "12:29", "05:21", "03:57",
    "06-01", "09:00", "07:37", "04:14", "12:29", "05:20", "03:57",
    "06-02", "09:01", "07:38", "04:14", "12:29", "05:20", "03:57",
    "06-03", "09:01", "07:38", "04:14", "12:29", "05:20", "03:57",
    "06-04", "09:02", "07:39", "04:15", "12:29", "05:20", "03:57",
    "06-05", "09:02", "07:39", "04:15", "12:29", "05:19", "03:57",
    "06-06", "09:03", "07:40", "04:15", "12:30", "05:19", "03:57",
    "06-07", "09:03", "07:40", "04:15", "12:30", "05:19", "03:56",
    "06-08", "09:04", "07:41", "04:15", "12:30", "05:19", "03:56",
    "06-09", "09:04", "07:41", "04:16", "12:30", "05:19", "03:56",
    "06-10", "09:04", "07:42", "04:16", "12:30", "05:19", "03:56",
    "06-11", "09:05", "07:42", "04:16", "12:31", "05:19", "03:56",
    "06-12", "09:05", "07:43", "04:16", "12:31", "05:19", "03:57",
    "06-13", "09:05", "07:43", "04:16", "12:31", "05:19", "03:57",
    "06-14", "09:06", "07:44", "04:17", "12:31", "05:19", "03:57",
    "06-15", "09:06", "07:44", "04:17", "12:31", "05:19", "03:57",
    "06-16", "09:06", "07:44", "04:17", "12:32", "05:19", "03:57",
    "06-17", "09:07", "07:45", "04:17", "12:32", "05:19", "03:57",
    "06-18", "09:07", "07:45", "04:17", "12:32", "05:19", "03:57",
    "06-19", "09:07", "07:45", "04:18", "12:32", "05:19", "03:57",
    "06-20", "09:07", "07:45", "04:18", "12:32", "05:20", "03:58",
    "06-21", "09:08", "07:46", "04:18", "12:33", "05:20", "03:58",
    "06-22", "09:08", "07:46", "04:18", "12:33", "05:20", "03:58",
    "06-23", "09:08", "07:46", "04:19", "12:33", "05:20", "03:58",
    "06-24", "09:08", "07:46", "04:19", "12:33", "05:21", "03:58",
    "06-25", "09:08", "07:46", "04:19", "12:34", "05:21", "03:59",
    "06-26", "09:08", "07:46", "04:19", "12:34", "05:21", "03:59",
    "06-27", "09:09", "07:46", "04:19", "12:34", "05:21", "03:59",
    "06-28", "09:09", "07:46", "04:20", "12:34", "05:22", "04:00",
    "06-29", "09:09", "07:46", "04:20", "12:34", "05:22", "04:00",
    "06-30", "09:09", "07:46", "04:20", "12:35", "05:23", "04:00",
    "07-01", "09:09", "07:46", "04:20", "12:35", "05:23", "04:01",
    "07-02", "09:09", "07:46", "04:20", "12:35", "05:23", "04:01",
    "07-03", "09:09", "07:46", "04:21", "12:35", "05:24", "04:01",
    "07-04", "09:09", "07:46", "04:21", "12:35", "05:24", "04:02",
    "07-05", "09:09", "07:46", "04:21", "12:35", "05:25", "04:02",
    "07-06", "09:09", "07:46", "04:21", "12:36", "05:25", "04:03",
    "07-07", "09:08", "07:46", "04:21", "12:36", "05:26", "04:03",
    "07-08", "09:08", "07:45", "04:21", "12:36", "05:26", "04:03",
    "07-09", "09:08", "07:45", "04:21", "12:36", "05:27", "04:04",
    "07-10", "09:08", "07:45", "04:22", "12:36", "05:27", "04:04",
    "07-11", "09:08", "07:45", "04:22", "12:36", "05:28", "04:05",
    "07-12", "09:08", "07:44", "04:22", "12:37", "05:29", "04:05",
    "07-13", "09:07", "07:44", "04:22", "12:37", "05:29", "04:06",
    "07-14", "09:07", "07:43", "04:22", "12:37", "05:30", "04:06",
    "07-15", "09:07", "07:43", "04:22", "12:37", "05:30", "04:07",
    "07-16", "09:07", "07:43", "04:22", "12:37", "05:31", "04:07",
    "07-17", "09:06", "07:42", "04:22", "12:37", "05:32", "04:07",
    "07-18", "09:06", "07:42", "04:22", "12:37", "05:32", "04:08",
    "07-19", "09:06", "07:41", "04:22", "12:37", "05:33", "04:08",
    "07-20", "09:05", "07:40", "04:22", "12:37", "05:34", "04:09",
    "07-21", "09:05", "07:40", "04:22", "12:37", "05:34", "04:09",
    "07-22", "09:04", "07:39", "04:22", "12:37", "05:35", "04:10",
    "07-23", "09:04", "07:39", "04:22", "12:37", "05:36", "04:10",
    "07-24", "09:04", "07:38", "04:22", "12:37", "05:36", "04:11",
    "07-25", "09:03", "07:37", "04:22", "12:37", "05:37", "04:11",
    "07-26", "09:03", "07:37", "04:22", "12:37", "05:38", "04:12",
    "07-27", "09:02", "07:36", "04:22", "12:37", "05:38", "04:12",
    "07-28", "09:01", "07:35", "04:22", "12:37", "05:39", "04:13",
    "07-29", "09:01", "07:34", "04:22", "12:37", "05:40", "04:13",
    "07-30", "09:00", "07:34", "04:22", "12:37", "05:41", "04:14",
    "07-31", "09:00", "07:33", "04:21", "12:37", "05:41", "04:14",
    "08-01", "08:59", "07:32", "04:21", "12:37", "05:42", "04:15",
    "08-02", "08:58", "07:31", "04:21", "12:37", "05:43", "04:15",
    "08-03", "08:58", "07:30", "04:21", "12:37", "05:43", "04:16",
    "08-04", "08:57", "07:29", "04:21", "12:37", "05:44", "04:16",
    "08-05", "08:56", "07:28", "04:21", "12:37", "05:45", "04:17",
    "08-06", "08:56", "07:27", "04:20", "12:37", "05:46", "04:17",
    "08-07", "08:55", "07:26", "04:20", "12:37", "05:46", "04:18",
    "08-08", "08:54", "07:25", "04:20", "12:36", "05:47", "04:18",
    "08-09", "08:53", "07:24", "04:19", "12:36", "05:48", "04:19",
    "08-10", "08:53", "07:23", "04:19", "12:36", "05:49", "04:19",
    "08-11", "08:52", "07:22", "04:19", "12:36", "05:49", "04:20",
    "08-12", "08:51", "07:21", "04:18", "12:36", "05:50", "04:20",
    "08-13", "08:50", "07:20", "04:18", "12:36", "05:51", "04:21",
    "08-14", "08:49", "07:19", "04:18", "12:36", "05:51", "04:21",
    "08-15", "08:49", "07:18", "04:17", "12:35", "05:52", "04:22",
    "08-16", "08:48", "07:17", "04:17", "12:35", "05:53", "04:22",
    "08-17", "08:46", "07:16", "04:16", "12:35", "05:54", "04:23",
    "08-18", "08:45", "07:15", "04:16", "12:35", "05:54", "04:24",
    "08-19", "08:43", "07:13", "04:15", "12:34", "05:55", "04:25",
    "08-20", "08:42", "07:12", "04:15", "12:34", "05:56", "04:26",
    "08-21", "08:40", "07:11", "04:14", "12:34", "05:57", "04:27",
    "08-22", "08:39", "07:10", "04:14", "12:34", "05:57", "04:28",
    "08-23", "08:37", "07:08", "04:13", "12:33", "05:58", "04:29",
    "08-24", "08:36", "07:07", "04:13", "12:33", "05:59", "04:30",
    "08-25", "08:34", "07:06", "04:12", "12:33", "05:59", "04:31",
    "08-26", "08:33", "07:05", "04:12", "12:33", "06:00", "04:32",
    "08-27", "08:31", "07:03", "04:11", "12:32", "06:01", "04:33",
    "08-28", "08:30", "07:02", "04:11", "12:32", "06:01", "04:34",
    "08-29", "08:28", "07:01", "04:10", "12:32", "06:02", "04:35",
    "08-30", "08:27", "07:00", "04:09", "12:31", "06:03", "04:36",
    "08-31", "08:25", "06:58", "04:09", "12:31", "06:04", "04:36",
    "09-01", "08:24", "06:57", "04:08", "12:31", "06:04", "04:37",
    "09-02", "08:22", "06:56", "04:07", "12:31", "06:05", "04:38",
    "09-03", "08:21", "06:54", "04:07", "12:30", "06:06", "04:39",
    "09-04", "08:19", "06:53", "04:06", "12:30", "06:06", "04:40",
    "09-05", "08:17", "06:51", "04:05", "12:30", "06:07", "04:41",
    "09-06", "08:16", "06:50", "04:04", "12:29", "06:08", "04:42",
    "09-07", "08:14", "06:49", "04:04", "12:29", "06:08", "04:43",
    "09-08", "08:13", "06:47", "04:03", "12:29", "06:09", "04:44",
    "09-09", "08:11", "06:46", "04:02", "12:28", "06:10", "04:44",
    "09-10", "08:10", "06:45", "04:01", "12:28", "06:10", "04:45",
    "09-11", "08:08", "06:43", "04:00", "12:27", "06:11", "04:46",
    "09-12", "08:07", "06:42", "04:00", "12:27", "06:12", "04:47",
    "09-13", "08:05", "06:40", "03:59", "12:27", "06:13", "04:48",
    "09-14", "08:04", "06:39", "03:58", "12:26", "06:13", "04:49",
    "09-15", "08:02", "06:38", "03:57", "12:26", "06:14", "04:49",
    "09-16", "08:00", "06:36", "03:56", "12:26", "06:15", "04:50",
    "09-17", "07:59", "06:35", "03:55", "12:25", "06:15", "04:51",
    "09-18", "07:57", "06:33", "03:55", "12:25", "06:16", "04:52",
    "09-19", "07:56", "06:32", "03:54", "12:25", "06:17", "04:53",
    "09-20", "07:54", "06:31", "03:53", "12:24", "06:17", "04:54",
    "09-21", "07:53", "06:29", "03:52", "12:24", "06:18", "04:54",
    "09-22", "07:51", "06:28", "03:51", "12:24", "06:19", "04:55",
    "09-23", "07:50", "06:26", "03:50", "12:23", "06:20", "04:56",
    "09-24", "07:48", "06:25", "03:49", "12:23", "06:20", "04:57",
    "09-25", "07:47", "06:24", "03:48", "12:22", "06:21", "04:57",
    "09-26", "07:45", "06:22", "03:47", "12:22", "06:22", "04:58",
    "09-27", "07:44", "06:21", "03:46", "12:22", "06:22", "04:59",
    "09-28", "07:43", "06:19", "03:45", "12:21", "06:23", "05:00",
    "09-29", "07:41", "06:18", "03:45", "12:21", "06:24", "05:01",
    "09-30", "07:40", "06:17", "03:44", "12:21", "06:24", "05:01",
    "10-01", "07:38", "06:15", "03:43", "12:20", "06:25", "05:02",
    "10-02", "07:37", "06:14", "03:42", "12:20", "06:26", "05:03",
    "10-03", "07:36", "06:12", "03:41", "12:20", "06:27", "05:04",
    "10-04", "07:34", "06:11", "03:40", "12:20", "06:27", "05:04",
    "10-05", "07:33", "06:10", "03:39", "12:19", "06:28", "05:05",
    "10-06", "07:32", "06:08", "03:38", "12:19", "06:29", "05:06",
    "10-07", "07:30", "06:07", "03:37", "12:19", "06:30", "05:07",
    "10-08", "07:29", "06:06", "03:36", "12:18", "06:30", "05:07",
    "10-09", "07:28", "06:04", "03:35", "12:18", "06:31", "05:08",
    "10-10", "07:26", "06:03", "03:34", "12:18", "06:32", "05:09",
    "10-11", "07:25", "06:02", "03:33", "12:18", "06:33", "05:10",
    "10-12", "07:24", "06:01", "03:32", "12:17", "06:34", "05:10",
    "10-13", "07:23", "05:59", "03:31", "12:17", "06:34", "05:11",
    "10-14", "07:21", "05:58", "03:30", "12:17", "06:35", "05:12",
    "10-15", "07:20", "05:57", "03:30", "12:17", "06:36", "05:13",
    "10-16", "07:19", "05:56", "03:29", "12:16", "06:37", "05:13",
    "10-17", "07:18", "05:54", "03:28", "12:16", "06:37", "05:14",
    "10-18", "07:17", "05:53", "03:27", "12:16", "06:38", "05:15",
    "10-19", "07:15", "05:52", "03:26", "12:16", "06:39", "05:16",
    "10-20", "07:14", "05:51", "03:25", "12:16", "06:40", "05:16",
    "10-21", "07:13", "05:50", "03:24", "12:15", "06:41", "05:17",
    "10-22", "07:12", "05:48", "03:23", "12:15", "06:42", "05:18",
    "10-23", "07:11", "05:47", "03:22", "12:15", "06:42", "05:19",
    "10-24", "07:10", "05:46", "03:22", "12:15", "06:43", "05:19",
    "10-25", "07:09", "05:45", "03:21", "12:15", "06:44", "05:20",
    "10-26", "07:08", "05:44", "03:20", "12:15", "06:45", "05:21",
    "10-27", "07:07", "05:43", "03:19", "12:15", "06:46", "05:22",
    "10-28", "07:06", "05:42", "03:18", "12:15", "06:47", "05:23",
    "10-29", "07:05", "05:41", "03:18", "12:15", "06:48", "05:23",
    "10-30", "07:04", "05:40", "03:17", "12:14", "06:49", "05:24",
    "10-31", "07:04", "05:39", "03:16", "12:14", "06:49", "05:25",
    "11-01", "07:03", "05:38", "03:15", "12:14", "06:50", "05:26",
    "11-02", "07:02", "05:37", "03:15", "12:14", "06:51", "05:26",
    "11-03", "07:01", "05:36", "03:14", "12:14", "06:52", "05:27",
    "11-04", "07:00", "05:35", "03:13", "12:14", "06:53", "05:28",
    "11-05", "07:00", "05:34", "03:12", "12:14", "06:54", "05:29",
    "11-06", "06:59", "05:34", "03:12", "12:14", "06:55", "05:30",
    "11-07", "06:58", "05:33", "03:11", "12:15", "06:56", "05:30",
    "11-08", "06:58", "05:32", "03:11", "12:15", "06:57", "05:31",
    "11-09", "06:57", "05:31", "03:10", "12:15", "06:58", "05:32",
    "11-10", "06:56", "05:30", "03:09", "12:15", "06:59", "05:33",
    "11-11", "06:56", "05:30", "03:09", "12:15", "07:00", "05:34",
    "11-12", "06:55", "05:29", "03:08", "12:15", "07:01", "05:34",
    "11-13", "06:55", "05:28", "03:08", "12:15", "07:01", "05:35",
    "11-14", "06:54", "05:28", "03:07", "12:15", "07:02", "05:36",
    "11-15", "06:54", "05:27", "03:07", "12:15", "07:03", "05:37",
    "11-16", "06:53", "05:27", "03:06", "12:16", "07:04", "05:38",
    "11-17", "06:53", "05:26", "03:06", "12:16", "07:05", "05:38",
    "11-18", "06:52", "05:25", "03:06", "12:16", "07:06", "05:39",
    "11-19", "06:52", "05:25", "03:05", "12:16", "07:07", "05:40",
    "11-20", "06:52", "05:24", "03:05", "12:16", "07:08", "05:41",
    "11-21", "06:51", "05:24", "03:04", "12:17", "07:09", "05:42",
    "11-22", "06:51", "05:24", "03:04", "12:17", "07:10", "05:43",
    "11-23", "06:51", "05:23", "03:04", "12:17", "07:11", "05:43",
    "11-24", "06:51", "05:23", "03:04", "12:18", "07:12", "05:44",
    "11-25", "06:50", "05:23", "03:03", "12:18", "07:13", "05:45",
    "11-26", "06:50", "05:22", "03:03", "12:18", "07:14", "05:46",
    "11-27", "06:50", "05:22", "03:03", "12:18", "07:15", "05:46",
    "11-28", "06:50", "05:22", "03:03", "12:19", "07:15", "05:47",
    "11-29", "06:50", "05:22", "03:03", "12:19", "07:16", "05:48",
    "11-30", "06:50", "05:21", "03:03", "12:19", "07:17", "05:49",
    "12-01", "06:50", "05:21", "03:03", "12:20", "07:18", "05:50",
    "12-02", "06:50", "05:21", "03:03", "12:20", "07:19", "05:50",
    "12-03", "06:50", "05:21", "03:03", "12:21", "07:20", "05:51",
    "12-04", "06:50", "05:21", "03:03", "12:21", "07:21", "05:52",
    "12-05", "06:50", "05:21", "03:03", "12:21", "07:22", "05:53",
    "12-06", "06:50", "05:21", "03:03", "12:22", "07:22", "05:53",
    "12-07", "06:50", "05:21", "03:03", "12:22", "07:23", "05:54",
    "12-08", "06:51", "05:21", "03:03", "12:23", "07:24", "05:55",
    "12-09", "06:51", "05:21", "03:03", "12:23", "07:25", "05:55",
    "12-10", "06:51", "05:22", "03:03", "12:24", "07:25", "05:56",
    "12-11", "06:51", "05:22", "03:04", "12:24", "07:26", "05:57",
    "12-12", "06:52", "05:22", "03:04", "12:25", "07:27", "05:57",
    "12-13", "06:52", "05:22", "03:04", "12:25", "07:28", "05:58",
    "12-14", "06:52", "05:23", "03:05", "12:25", "07:28", "05:59",
    "12-15", "06:52", "05:23", "03:05", "12:26", "07:29", "05:59",
    "12-16", "06:53", "05:23", "03:05", "12:26", "07:30", "06:00",
    "12-17", "06:53", "05:24", "03:06", "12:27", "07:30", "06:01",
    "12-18", "06:54", "05:24", "03:06", "12:27", "07:31", "06:01",
    "12-19", "06:54", "05:24", "03:06", "12:28", "07:31", "06:02",
    "12-20", "06:55", "05:25", "03:07", "12:28", "07:32", "06:02",
    "12-21", "06:55", "05:25", "03:07", "12:29", "07:32", "06:03",
    "12-22", "06:56", "05:26", "03:08", "12:29", "07:33", "06:03",
    "12-23", "06:56", "05:26", "03:08", "12:30", "07:33", "06:04",
    "12-24", "06:57", "05:27", "03:09", "12:30", "07:34", "06:04",
    "12-25", "06:57", "05:28", "03:10", "12:31", "07:34", "06:05",
    "12-26", "06:58", "05:28", "03:10", "12:31", "07:35", "06:05",
    "12-27", "06:58", "05:29", "03:11", "12:32", "07:35", "06:05",
    "12-28", "06:59", "05:29", "03:11", "12:32", "07:35", "06:06",
    "12-29", "07:00", "05:30", "03:12", "12:33", "07:36", "06:06",
    "12-30", "07:00", "05:31", "03:13", "12:33", "07:36", "06:07",
    "12-31", "07:01", "05:32", "03:13", "12:34", "07:36", "06:07"
};
