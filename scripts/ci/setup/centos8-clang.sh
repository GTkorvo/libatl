SETUP_DIR="$(dirname "$(readlink -f "${BASH_SOURCE[0]}")")"
source "${SETUP_DIR}/centos8.sh"
dnf install -y clang
