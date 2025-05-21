load("@rules_jvm_external//:defs.bzl", "artifact")
load("@contrib_rules_jvm//java:defs.bzl", "JUNIT5_DEPS", "java_junit5_test")   

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