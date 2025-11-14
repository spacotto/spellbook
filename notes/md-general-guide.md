# Markdown Guide
What is **Markdown**? Markdown is a lightweight markup language that turns plain text into formatted text (like HTML). It’s widely used for documentation (README.md), notes and wikis, static site content, comments on GitHub, Reddit, etc.

> [!TIP]
> `.md` = Markdown file extension

## Headings
### Heading 1
**Syntax:** `# HEADING`
**E.g.:**
# HEADING

### Heading 2
**Syntax:** `## HEADING`
**E.g.:**
## HEADING

### Heading 3
**Syntax:** `### HEADING`
**E.g.:**
### HEADING

### Heading 4
**Syntax:** `#### HEADING`
**E.g.:**
#### HEADING

### Heading 5
**Syntax:** `##### HEADING`
**E.g.:**
##### HEADING

### Heading 6
**Syntax:** `###### HEADING`
**E.g.:**
###### HEADING

## **Bold**

| Purpose              | Markdown                 | Renders As      |
| -------------------- | ------------------------ | --------------- |
| ****      |      | Headings        |
| **Bold**             | `**bold**` or `__bold__` | **bold**        |
| **Italic**           | `*italic*` or `_italic_` | *italic*        |
| **Bold + Italic**    | `***text***`             | ***text***      |
| **Strikethrough**    | `~~text~~`               | ~~text~~        |
| **Inline code**      | `` `code` ``             | `code`          |
| **Block code**       | ` `lang … ` `            | code block      |
| **Blockquote**       | `> quote`                | quoted text     |
| **List (unordered)** | `- item` or `* item`     | • item          |
| **List (ordered)**   | `1. item`                | 1. item         |
| **Nested lists**     | indent by 2+ spaces      | sub-list        |
| **Horizontal line**  | `---` or `***`           | ─────────       |
| **Link**             | `[text](url)`            | [text](url)     |
| **Image**            | `![alt](url)`            | 🖼️              |
| **Table**            | see this table           | formatted table |

## GitHub Flavoured Markdown (GFM)
GFM are GitHub-specific syntax (technically part of GitHub Docs Markdown extensions).
They are not standard Markdown — meaning they won’t render properly outside GitHub (e.g., in VS Code preview, Reddit, or generic Markdown parsers).

### 📌 Admonitions / Callouts (GitHub Docs only)
> [!NOTE]
> This is a note.

> [!TIP]
> Helpful suggestion.

> [!IMPORTANT]
> Must-read info.

> [!WARNING]
> Be cautious.

> [!CAUTION]
> Danger ahead.

### 📌 Task Lists
- [x] Done
- [ ] Not done
