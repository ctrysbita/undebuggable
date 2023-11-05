workspace(name = "undebuggable")

load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

# GRPC

git_repository(
    name = "com_github_grpc_grpc",
    commit = "883e5f76976b86afee87415dc67bde58d9b295a4",
    remote = "https://github.com/grpc/grpc",
    shallow_since = "1698687234 -0700",
)

load("@com_github_grpc_grpc//bazel:grpc_deps.bzl", "grpc_deps")

grpc_deps()

load("@com_github_grpc_grpc//bazel:grpc_extra_deps.bzl", "grpc_extra_deps")

grpc_extra_deps()
