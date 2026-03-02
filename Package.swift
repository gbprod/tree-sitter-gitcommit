// swift-tools-version:5.3

import Foundation
import PackageDescription

var sources = ["src/parser.c"]
if FileManager.default.fileExists(atPath: "src/scanner.c") {
    sources.append("src/scanner.c")
}

let package = Package(
    name: "TreeSitterGitcommit",
    products: [
        .library(name: "TreeSitterGitcommit", targets: ["TreeSitterGitcommit"]),
    ],
    dependencies: [
        .package(name: "SwiftTreeSitter", url: "https://github.com/tree-sitter/swift-tree-sitter", from: "0.9.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterGitcommit",
            dependencies: [],
            path: ".",
            sources: sources,
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterGitcommitTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterGitcommit",
            ],
            path: "bindings/swift/TreeSitterGitcommitTests"
        )
    ],
    cLanguageStandard: .c11
)
