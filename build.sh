javac ./java/com/gozone/jni/TestHello.java
javah -jni -classpath ./java -d ./jni com.gozone.jni.TestHello
g++ -shared -fPIC -I /usr/lib/jvm/java-6-sun/include -I /usr/lib/jvm/java-6-sun/include/linux -o ./lib/libTestHello.so ./jni/jni_TestHelloImpl.cpp
java -Djava.library.path=./lib -classpath ./java com.gozone.jni.TestHello
