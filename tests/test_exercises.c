#include "../UnitTestLibrary/munit/munit.h"
#include <stdio.h>
#include <string.h>

// Include the code you want to test
#include "../Chapter1/Section1.5/Exercise1_10.c"

static MunitResult test_exercise1_10(const MunitParameter params[], void* data) {
    // Simulated input string (includes tab, backslash, backspace)
    const char *input = "a\tb\\c\b\n";

    // Redirect stdin from memory using fmemopen
    FILE *input_stream = fmemopen((void *)input, strlen(input), "r");
    if (!input_stream) return MUNIT_FAIL;

    // Save original stdin, redirect to our input
    FILE *original_stdin = stdin;
    stdin = input_stream;

    // Redirect stdout to memory
    char output_buffer[128] = {0};
    FILE *output_stream = fmemopen(output_buffer, sizeof(output_buffer), "w");
    if (!output_stream) return MUNIT_FAIL;

    FILE *original_stdout = stdout;
    stdout = output_stream;

    // Call the function (should read from our fake stdin, write to fake stdout)
    exercise1_10_function();

    // Restore streams
    fclose(input_stream);
    fflush(output_stream);
    fclose(output_stream);
    stdin = original_stdin;
    stdout = original_stdout;

    // Now test what was printed
    // Expected: 'a\\tb\\\\c\\b\n' (i.e. tab => \t, backslash => \\, backspace => \b)
    const char *expected = "a\\tb\\\\c\\b\n";
    munit_assert_string_equal(output_buffer, expected);

    return MUNIT_OK;
}

// Register test
static MunitTest tests[] = {
    { "/exercise1_10", test_exercise1_10, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL },
    { NULL, NULL, NULL, NULL, MUNIT_TEST_OPTION_NONE, NULL }
};

// Define test suite
static const MunitSuite suite = {
    "/chapter1", tests, NULL, 1, MUNIT_SUITE_OPTION_NONE
};

int main(int argc, char* argv[]) {
    return munit_suite_main(&suite, NULL, argc, argv);
}
