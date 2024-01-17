# 单链表的构造方式

add_executable(test_linked_list test_linked_list.cc)

target_include_directories(test_linked_list PUBLIC
                           ${CMAKE_SOURCE_DIR}/include/)

function(do_test target arg result)
    add_test(NAME "Test_case: ${target} length: ${arg}" 
             COMMAND ${target} ${arg})
    set_tests_properties("Test_case: ${target} length: ${arg}"
                         PROPERTIES PASS_REGULAR_EXPRESSION ${result})
endfunction()

# 基本测试
foreach(i RANGE 3210 3220 1)
    do_test(test_linked_list ${i} "${i}")
endforeach()
# 错误位置测试
# 暂时不进行测试
# foreach(i RANGE -10 -2 1)
#     do_test(test_linked_list ${i} "bad_length")
# endforeach(i RANGE -10 -2 1)
