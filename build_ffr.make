api = 2
core = 7.x

; Core
projects[drupal][type] = core
projects[drupal][version] = "7.16"

; Install profile
projects[codename-ff][type] = "profile"
projects[codename-ff][download][type] = "git"
projects[codename-ff][download][url] = "git@github.com:esben-reload/codename-ff.git"
projects[codename-ff][download][branch] = "develop"
