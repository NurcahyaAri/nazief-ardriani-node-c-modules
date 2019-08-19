{
  "targets": [{
    "include_dirs" : [
      "src",
      "<!(node -e \"require('nan')\")"
    ],
    "target_name" : "addon",
    "sources": [
      "src/main.cpp",
    ]
  }]
}