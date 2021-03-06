/*
 * We make the version string static, and return a pointer to it, rather
 * than exporting the version string directly.  On at least some UNIXes,
 * if you import data from a shared library into an program, the data is
 * bound into the program binary, so if the string in the version of the
 * library with which the program was linked isn't the same as the
 * string in the version of the library with which the program is being
 * run, various undesirable things may happen (warnings, the string
 * being the one from the version of the library with which the program
 * was linked, or even weirder things, such as the string being the one
 * from the library but being truncated).
 */
static const char pcap_version_string[] = "libpcap version 1.8.1";
