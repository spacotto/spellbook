# Markdown Guide
What is **Markdown**? Markdown is a lightweight markup language that turns plain text into formatted text (like HTML). It’s widely used for documentation (README.md), notes and wikis, static site content, comments on GitHub, Reddit, etc.

> [!TIP]
> `.md` = Markdown file extension

## 📌 Headings
### Heading 1
**Syntax:** `# H1`

**E.g.:**
# H1

### Heading 2
**Syntax:** `## H2`

**E.g.:**
## H2

### Heading 3
**Syntax:** `### H3`

**E.g.:**
### H3

### Heading 4
**Syntax:** `#### H4`

**E.g.:**
#### H4

### Heading 5
**Syntax:** `##### H5`

**E.g.:**
##### H5

### Heading 6
**Syntax:** `###### H6`

**E.g.:**
###### H6

## 📌**Bold**
**Syntax:** `**bold**` or `__bold__`

**E.g.:**
**bold**

## 📌**Italic**
**Syntax:** `*italic*` or `_italic_`

**E.g.:**
*italic*

## 📌**Bold + Italic**
**Syntax:** `***text***`

**E.g.:**
***text*** 

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

## 📌Task Lists (GFM)
- [x] Done
- [ ] Not done

> [!NOTE]
> GFM are GitHub-specific syntax (technically part of GitHub Docs Markdown extensions). They are not standard Markdown — meaning they won’t render properly outside GitHub (e.g., in VS Code preview, Reddit, or generic Markdown parsers).

## 📌Admonitions / Callouts (GFM)
> [!NOTE]
> This is a note.

> [!TIP]
> This is a tip.

> [!IMPORTANT]
> This is important information.

> [!WARNING]
> Be cautious.

> [!CAUTION]
> Danger ahead.
