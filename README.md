# Blaze (formerly Trappist)

> [!NOTE]
> This project is still under development and may require a certain envirnoment to be compiled and run

Blaze is a UCI compatible chess engine written in C

## Build

```
make release
```

## Technical details

Blaze is inspired by the didactic engine QBBEngine by Fabio Gobbato

- Quad bitboards (Using 4 bitboards to represent the entire chess board)
- Using the [o^(o-2r)-trick](https://www.chessprogramming.org/Hyperbola_Quintessence) to generate sliding piece attacks
- Make/Unmake (Rather than Copy/Make)
- Around 25Mnps raw perft speed in release mode (Single threaded, No hashing, Bulk counting in the horizon nodes)

## License

Blaze is licensed under the MIT license. A copy of this license can be found in `LICENSE`
