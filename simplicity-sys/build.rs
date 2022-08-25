extern crate cc;

use std::path::Path;

fn main() {
    let simplicity_path = Path::new("depend/simplicity");
    let files: Vec<_> = vec![
        "bitstream.c",
        "dag.c",
        "deserialize.c",
        "eval.c",
        "frame.c",
        "jets.c",
        "jets-secp256k1.c",
        "rsort.c",
        "sha256.c",
        "type.c",
        "typeInference.c",
        "primitive/elements/env.c",
        "primitive/elements/exec.c",
        "primitive/elements/jets.c",
        "primitive/elements/primitive.c",
    ]
    .into_iter()
    .map(|x| simplicity_path.join(x))
    .collect();
    let test_files: Vec<_> = vec![
        // "test.c",
        "hashBlock.c",
        "schnorr0.c",
        "schnorr6.c",
        "primitive/elements/checkSigHashAllTx1.c",
    ]
    .into_iter()
    .map(|x| simplicity_path.join(x))
    .collect();
    let include = simplicity_path.join("include");

    cc::Build::new()
        .files(files)
        .files(test_files)
        .include(include)
        .compile("simplicity");
}