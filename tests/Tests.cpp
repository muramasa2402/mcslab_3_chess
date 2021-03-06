#include "Tests.hpp"
#include "ChessBoard.hpp"
#include <iostream>

using namespace std;

void test_general() {
    cout << "===========================" << endl;
    cout << "Testing the Chess Engine" << endl;
    cout << "===========================" << endl;
    cout << endl;

    ChessBoard cb;
    cout << endl;
    cb.submitMove("D7", "D6");
    cout << endl;
    cb.submitMove("D4", "H6");
    cout << endl;
    cb.submitMove("D2", "D4");
    cout << endl;
    cb.submitMove("F8", "B4");
    cout << endl;

    cout << "===========================" << endl;
    cout << "Alekhine vs. Vasic (1931)" << endl;
    cout << "===========================" << endl;
    cout << endl;
    cb.resetBoard();
    cout << endl;
    cb.submitMove("E2", "E4");
    cb.submitMove("E7", "E6");
    cout << endl;
    cb.submitMove("D2", "D4");
    cb.submitMove("D7", "D5");
    cout << endl;
    cb.submitMove("B1", "C3");
    cb.submitMove("F8", "B4");
    cout << endl;
    cb.submitMove("F1", "D3");
    cb.submitMove("B4", "C3");
    cout << endl;
    cb.submitMove("B2", "C3");
    cb.submitMove("H7", "H6");
    cout << endl;
    cb.submitMove("C1", "A3");
    cb.submitMove("B8", "D7");
    cout << endl;
    cb.submitMove("D1", "E2");
    cb.submitMove("D5", "E4");
    cout << endl;
    cb.submitMove("D3", "E4");
    cb.submitMove("G8", "F6");
    cout << endl;
    cb.submitMove("E4", "D3");
    cb.submitMove("B7", "B6");
    cout << endl;
    cb.submitMove("E2", "E6");
    cb.submitMove("F7", "E6");
    cout << endl;
    cb.submitMove("D3", "G6");
    cout << endl;
}

void test_castling() {

    ChessBoard cb;
    cb.submitMove("E2", "E3");
    cb.submitMove("E7", "E6");
    cb.submitMove("F1", "D3");
    cb.submitMove("F8", "D6");
    cb.submitMove("G1", "F3");
    cb.submitMove("G8", "F6");
    cb.submitMove("E1", "G1");
    cb.submitMove("E8", "G8");
    cb.displayBoard();

    cb.resetBoard();

    cb.submitMove("E2", "E3");
    cb.submitMove("E7", "E6");
    cb.submitMove("D2", "D3");
    cb.submitMove("D7", "D6");
    cb.submitMove("B1", "C3");
    cb.submitMove("B8", "C6");
    cb.submitMove("D1", "E2");
    cb.submitMove("D8", "E7");
    cb.submitMove("C1", "D2");
    cb.submitMove("C8", "D7");
    cb.submitMove("E1", "C1");
    cb.submitMove("E8", "C8");
    cb.displayBoard();
}

void test_enpassant() {
    ChessBoard cb;
    cb.submitMove("E2", "E4");
    cb.submitMove("D7", "D5");
    cb.submitMove("E4", "D5");
    cb.submitMove("C7", "C5");
    cb.submitMove("H2", "H3");
    cb.submitMove("H7", "H6");
    cb.submitMove("D5", "C6");
    cb.displayBoard();

    cb.resetBoard();

    cb.submitMove("D2", "D4");
    cb.submitMove("E7", "E5");
    cb.submitMove("F2", "F4");
    cb.submitMove("E5", "D4");
    cb.submitMove("C2", "C4");
    cb.submitMove("H7", "H6");
    cb.submitMove("H2", "H3");
    cb.submitMove("D4", "C3");
    cb.displayBoard();
}

void test_promotion() {
    ChessBoard cb;
    cb.submitMove("E2", "E4");
    cb.submitMove("D7", "D5");
    cb.submitMove("E4", "D5");
    cb.submitMove("G8", "F6");
    cb.submitMove("F1", "B5");
    cb.submitMove("C7", "C6");
    cb.submitMove("D5", "C6");
    cb.submitMove("D8", "B6");
    cb.submitMove("C6", "B7");
    cb.submitMove("B6", "B5");
    cb.submitMove("B7", "C8");
    cb.displayBoard();

    cb.resetBoard();

    cb.submitMove("D2", "D4");
    cb.submitMove("E7", "E5");
    cb.submitMove("F2", "F4");
    cb.submitMove("E5", "D4");
    cb.submitMove("G1", "F3");
    cb.submitMove("F8", "B4");
    cb.submitMove("C2", "C3");
    cb.submitMove("D4", "C3");
    cb.submitMove("D1", "B3");
    cb.submitMove("C3", "B2");
    cb.submitMove("B3", "B4");
    cb.submitMove("B2", "C1");
    cb.displayBoard();
}


