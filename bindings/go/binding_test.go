package tree_sitter_proto_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_proto "github.com/coder3101/tree-sitter-proto/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_proto.Language())
	if language == nil {
		t.Errorf("Error loading Proto grammar")
	}
}
