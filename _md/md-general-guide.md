# Markdown Guide
What is **Markdown**? Markdown is a lightweight markup language that turns plain text into formatted text (like HTML). It’s widely used for documentation (README.md), notes and wikis, static site content, comments on GitHub, Reddit, etc.

> [!TIP]
> `.md` = Markdown file extension

> [!IMPORTANT]
> GFM are GitHub-specific syntax (technically part of GitHub Docs Markdown extensions). They are not standard Markdown — meaning they won’t render properly outside GitHub (e.g., in VS Code preview, Reddit, or generic Markdown parsers).

## Headings
### Heading 1
**Syntax:** `# H1`

### Heading 2
**Syntax:** `## H2`

### Heading 3
**Syntax:** `### H3`

### Heading 4
**Syntax:** `#### H4`

### Heading 5
**Syntax:** `##### H5`

### Heading 6
**Syntax:** `###### H6`

## Text Format
### Bold
**Syntax:** `**bold**` or `__bold__`
**Example:** **bold**

### Italic
**Syntax:** `*italic*` or `_italic_`
**Example:** *italic*

### Bold + Italic
**Syntax:** `***text***`
**Example:** ***text*** 
### (Admonition/Callout)
> [!CAUTION]
> Be careful!

### Strikethrough
**Syntax:** `~~text~~`
**Example:** ~~text~~

## Code Blocks
### Inline code
**Syntax:** `` `code` ``
**Example** `code`

### Block code
**Syntax:** `` ```code``` ``
**Example:**
```
code
block
```
## Blockquotes
### Simple Blockquote
**Syntax:** `> quote`
**Example:**
>quote

### Caution (GFM Admonition/Callout)
> [!CAUTION]
> Be careful!

### Warning (GFM Admonition/Callout)
> [!WARNING]
> This is a warning.

### Note (GFM Admonition/Callout)
> [!NOTE]
> This is a note.

### Tip (GFM Admonition/Callout)
> [!TIP]
> This is a tip.

### Important (GFM Admonition/Callout)
> [!IMPORTANT]
> This is important information.

## Lists
### List (unordered)
**Syntax:** ``- item` or `* item``
**Example:**
- item
- item
- item

### List (ordered)
**Syntax:** `1. item`
**Example:**
1. item
2. item
3. item

### Nested lists
**Syntax:** 
```
- text
  - text
    -text
```
**Example:**
- text
  - text
    - text

### Task Lists (GFM)
**Syntax:** 
```
- [x] Done
- [ ] Not done
```
**Example:**
- [x] Done
- [ ] Not done

## Dividers
### Horizontal line
**Syntax:** ``---` or `***``
**Example:**

---
***

## Links
### Text link
**Syntax:** `[text](url)`
**Example:**
[text](url)

### Image
**Syntax:** `![alt](url)`
**Example:**
🖼️

## Tables
### Table
**Syntax:** 
```
| TEXT | TEXT | TEXT |
| :--- | :--- | :--- |
| text | text | text |
| text | text | text |
| text | text | text |
```

**Example:**
| TEXT | TEXT | TEXT |
| :--- | :--- | :--- |
| text | text | text |
| text | text | text |
| text | text | text |
