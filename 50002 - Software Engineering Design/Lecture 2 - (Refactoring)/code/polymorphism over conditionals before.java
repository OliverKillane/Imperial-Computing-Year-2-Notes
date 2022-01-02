class MyClass {
    ...
    public void workOnObject(MyObject obj) {
        if (obj.property()) {
            obj.doThis();
        } else {
            obj.doThat();
        }
    }
    ...
}

class MyObject {
    ...
}