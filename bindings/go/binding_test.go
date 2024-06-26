package tree_sitter_gitcommit_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-gitcommit"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_gitcommit.Language())
	if language == nil {
		t.Errorf("Error loading Gitcommit grammar")
	}
}
