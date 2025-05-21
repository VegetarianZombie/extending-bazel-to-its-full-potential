load("@rules_jvm_external//:defs.bzl", "artifact")
#load("//macros:junit5.bzl", "java_junit5_test")
load("@contrib_rules_jvm//java:defs.bzl", "JUNIT5_DEPS", "java_junit5_test")   
#java_junit5_test(                                    
#    name = "messenger-test",
#    srcs = [
#        "MessengerTest.java"
#    ],
#    test_package = "com.example.messenger",
#    deps = [
#        "//src/main/java/com/example/messenger:messenger-lib"
#    ],
#)

java_junit5_test(
    name = "messenger-test",
    srcs = [
        "MessengerTest.java"
    ],
    test_class = "com.example.messenger.MessengerTest",
    deps = [
        "//src/main/java/com/example/messenger:messenger-lib",
        artifact("org.junit.jupiter:junit-jupiter-api"),
        artifact("org.junit.jupiter:junit-jupiter-engine"),
        artifact("org.junit.platform:junit-platform-launcher"),
        artifact("org.junit.platform:junit-platform-reporting")
    ],
)

#java_test_suite(                                    
#    name = "messenger-test",
#    srcs = [
#        "MessengerTest.java"
#    ],
#    size = "small",
#    runner = "junit5",
#    runtime_deps = JUNIT5_DEPS,
#    package = "com.example.messenger",
#    deps = [
#        "//src/main/java/com/example/messenger:messenger-lib",
#       artifact("org.junit.jupiter:junit-jupiter-api"),
#    ],
#)