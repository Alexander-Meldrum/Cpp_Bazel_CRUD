# Cpp_Bazel_CRUD
CRUD functions (Create, Read, Update, Delete)

Build command:
bazel build //main:run_crud

Run command:
bazel-bin/main/run_crud


---------------------------------

## Notes
- This is a simple CRUD template for C++ in Bazel build environment.
- Create, Read, Update, Delete are divided into separate Bazel c++ libraries.
- Will throw exceptions if file already exists or cannot be deleted etc.


## Possible Future Work
- Implement CRUD towards a database (SQL)