import XCTest
import SwiftTreeSitter
import TreeSitterGitcommit

final class TreeSitterGitcommitTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_gitcommit())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading gitcommit grammar")
    }
}
