fn some_calc(some_items : Vec<i32>) -> (i32, i32) {
    // two separate properties
    let mut a : i32 = 0;
    let mut b : i32 = 0;
    
    for item in some_items {
        a += a_calc(item);
    }

    for item in some_items {
        b += b_calc(item);
    }

    (a,b)
}