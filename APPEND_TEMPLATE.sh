#!/bin/bash

# Check if a target file was provided
if [ -z "$1" ]; then
  echo "Usage: $0 path/to/your/file.md"
  exit 1
fi

cat <<EOF >> "$1"

# 📘 Topic: [Insert Topic Name Here]

## ✅ Progress
- [ ] Overview Complete
- [ ] Practiced Code
- [ ] Documented Notes

## 📌 Subtopics
- [ ] 
- [ ] 
- [ ] 

## 🗒️ Notes
- 
EOF

echo "Template appended to $1"
