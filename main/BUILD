# Build with bazel build //main:hello-world
load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "run_crud",
    srcs = ["main.cc"],
    deps = [
        "//lib:create",
        "//lib:read",
        "//lib:update",
        "//lib:delete",
        "//lib:utils",
    ],
)