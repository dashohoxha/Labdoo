
### Default settings for building the chroot.
target='lbd'
arch='i386'
suite='trusty'
apt_mirror='http://archive.ubuntu.com/ubuntu'

### Git branch that will be used.
git_branch='master'

### Domain of the website.
domain='www.labdoo-dev.org'

### Drupal 'admin' password.
admin_passwd='grassroots'

### Emails from the server are sent through the SMTP
### of a GMAIL account. Give the full email
### of the gmail account, and the password.
gmail_account='dev-user@labdoo.org'
gmail_passwd='grassroots'

### Mysql passwords. Leave it as 'random'
### to generate a new one randomly
#mysql_passwd_root='random'
#mysql_passwd_lbd='random'
mysql_passwd_root='grassroots'
mysql_passwd_lbd='grassroots'

### Install also extra things that are useful for development.
development='true'

### A reboot is needed after installation/configuration.
### If you want to do it automatically, set it to 'true'.
reboot='false'

### Start chroot service automatically on reboot.
start_on_boot='false'
