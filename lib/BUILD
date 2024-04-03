load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "create",
    srcs = ["create.cc"],
    hdrs = ["create.h"],
    deps = [":utils"],
    visibility = ["//main:__pkg__"],
)

cc_library(
    name = "read",
    srcs = ["read.cc"],
    hdrs = ["read.h"],
    deps = [":utils"],
    visibility = ["//main:__pkg__"],
)

cc_library(
    name = "update",
    srcs = ["update.cc"],
    hdrs = ["update.h"],
    deps = [":utils"],
    visibility = ["//main:__pkg__"],
)

cc_library(
    name = "delete",
    srcs = ["delete.cc"],
    hdrs = ["delete.h"],
    deps = [":utils"],
    visibility = ["//main:__pkg__"],
)

cc_library(
    name = "utils",
    srcs = ["utils.cc"],
    hdrs = ["utils.h"],
    visibility = ["//main:__pkg__"],
)