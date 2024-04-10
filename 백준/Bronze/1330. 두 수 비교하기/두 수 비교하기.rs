use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Failed to read line");
    
    let mut numbers = input.trim().split_whitespace().map(|x| x.parse::<i32>().unwrap());
    
    // A와 B 비교하기
    match (numbers.next(), numbers.next()) {
        (Some(a), Some(b)) => {
            if a > b {
                println!(">");
            } else if a < b {
                println!("<");
            } else {
                println!("==");
            }
        },
        _ => println!("Input error"),
    }
}