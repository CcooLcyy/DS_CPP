add_executable(test_linked_list test_linked_list.cc)

function(do_test target arg result)
    add_test(NAME "Test_case: ${target} length: ${arg}" 
             COMMAND ${target} ${arg})
    set_tests_properties("Test_case: ${target} length: ${arg}"
                         PROPERTIES PASS_REGULAR_EXPRESSION ${result})
endfunction()

do_test(test_linked_list 0 "0")
do_test(test_linked_list 10 "10")
do_test(test_linked_list -1 "bad_length")