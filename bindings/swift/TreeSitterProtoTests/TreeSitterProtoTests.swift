import XCTest
import SwiftTreeSitter
import TreeSitterProto

final class TreeSitterProtoTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_proto())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Proto grammar")
    }
}
