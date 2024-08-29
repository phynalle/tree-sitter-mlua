package tree_sitter_mlua_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-mlua"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_mlua.Language())
	if language == nil {
		t.Errorf("Error loading Mlua grammar")
	}
}
