class MyClass {
    ...
    public void workOnObject(MyObject obj) {
        obj.do();
    }
    ...
}

interface MyObject {
    void do();
}

class MyObjProp implements MyObject {
    void do() {
        //doThis
    }
}

class MyObjNoProp implements MyObject {
    void do() {
        //doThat
    }
}