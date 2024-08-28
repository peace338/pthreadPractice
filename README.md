#GoogleTest Template
## How to build

```

cmake -Bbuild
cmake --build build

```

## How to Test

``` 
cmake -Bbuild -DRUN_TEST=ON
cmake --build build
./build/test/MyTest
```