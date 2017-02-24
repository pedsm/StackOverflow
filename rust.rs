fn main() {
    recurse(0)
}

fn recurse(depth:i32) {
    println!("This is depth: {}", depth);
    recurse(depth + 1);
}
