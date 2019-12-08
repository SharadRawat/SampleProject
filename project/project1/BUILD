load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_test")

cc_binary(
    name = "hello_world",
    srcs = ["src/hello_world.cpp"], 
    visibility = ["//visibility:public"],
)

cc_test(
    name ="unit_tests",
    srcs = ["test/unit_tests.cpp"],
    deps = [
        "@googletest//:gtest",
        "@googletest//:gtest_main",
        ":hello_world"],
)