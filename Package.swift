// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterProto",
    products: [
        .library(name: "TreeSitterProto", targets: ["TreeSitterProto"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterProto",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterProtoTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterProto",
            ],
            path: "bindings/swift/TreeSitterProtoTests"
        )
    ],
    cLanguageStandard: .c11
)
