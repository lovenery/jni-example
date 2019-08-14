# JNI Example

```bash
cd src/

# Test your C file
gcc calc.c
./a.out
rm a.out

# Compile java
javac com/example/test/Tester.java

# Get header file
javah com.example.test.Tester # OR: javah -jni com.example.test.Tester

# Compile shared library
# /usr/lib/jvm/java-8-oracle/include/jni.h, /usr/lib/jvm/java-8-oracle/include/jni_md.h
gcc -fpic -shared -o libcalc.so -DJNI_ENABLED calc.c -I/usr/lib/jvm/java-8-oracle/include -I/usr/lib/jvm/java-8-oracle/include/linux

# List the functions of shared libray
nm -D libcalc.so

# Run
java -Djava.library.path=. com.example.test.Tester

# Clean
rm com/example/test/Tester.class com_example_test_Tester.h libcalc.so
```
