fn main() {
    recurse(0)
}

fn recurse(depth:i32) {
    println!("{}", depth);
    recurse(depth + 1);
}
