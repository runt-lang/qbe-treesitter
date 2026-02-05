# tree-sitter-qbe

Tree-sitter grammar for [QBE](https://c9x.me/compile/) IL.

## Building

```bash
npm install
npm run build
```

## Testing

```bash
npm run test
tree-sitter parse test/test.ssa
```

## File types

- `.ssa` - QBE SSA files
- `.qbe` - QBE IL files

## Syntax coverage

- Type definitions (`type :name = { ... }`)
- Data definitions (`data $name = { ... }`)
- Function definitions with parameters
- Block labels (`@label`)
- Phi nodes
- All arithmetic, comparison, and conversion instructions
- Memory operations (load/store/alloc/blit)
- Control flow (jmp/jnz/ret/hlt)
- Function calls with variadic support
- Linkage directives (export, thread, section)
