// FILE I/O
// Demonstrates reading from and writing to files in Rust

use std::fs;
use std::fs::File;
use std::io::{self, BufRead, BufReader, Write};
use std::path::Path;

fn main() {
    let filename = "output.txt";
    
    // Write to file
    println!("Writing to file...");
    match write_to_file(filename) {
        Ok(_) => println!("File written successfully"),
        Err(e) => println!("Error: {}", e),
    }
    
    // Read entire file
    println!("\nReading entire file:");
    match fs::read_to_string(filename) {
        Ok(contents) => println!("{}", contents),
        Err(e) => println!("Error: {}", e),
    }
    
    // Read line by line
    println!("Reading line by line:");
    match read_lines(filename) {
        Ok(lines) => {
            for (i, line) in lines.enumerate() {
                match line {
                    Ok(text) => println!("Line {}: {}", i + 1, text),
                    Err(e) => println!("Error: {}", e),
                }
            }
        }
        Err(e) => println!("Error: {}", e),
    }
    
    // Append to file
    println!("\nAppending to file...");
    match append_to_file(filename, "Line 4: Appended line\n") {
        Ok(_) => println!("File appended successfully"),
        Err(e) => println!("Error: {}", e),
    }
    
    // File metadata
    println!("\nFile metadata:");
    match fs::metadata(filename) {
        Ok(metadata) => {
            println!("File size: {} bytes", metadata.len());
            println!("Is file: {}", metadata.is_file());
            println!("Is directory: {}", metadata.is_dir());
            println!("Permissions: {:?}", metadata.permissions());
        }
        Err(e) => println!("Error: {}", e),
    }
}

fn write_to_file(filename: &str) -> io::Result<()> {
    let mut file = File::create(filename)?;
    file.write_all(b"This is the first line.\n")?;
    file.write_all(b"Line 2: Number = 42\n")?;
    file.write_all(b"Line 3: String = Hello\n")?;
    Ok(())
}

fn append_to_file(filename: &str, content: &str) -> io::Result<()> {
    let mut file = fs::OpenOptions::new()
        .append(true)
        .open(filename)?;
    
    file.write_all(content.as_bytes())?;
    Ok(())
}

fn read_lines<P>(filename: P) -> io::Result<io::Lines<BufReader<File>>>
where
    P: AsRef<Path>,
{
    let file = File::open(filename)?;
    Ok(BufReader::new(file).lines())
}
