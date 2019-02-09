#include <uv.h>
int main() {
  uv_run(uv_default_loop(), UV_RUN_DEFAULT);
  return 0;
}
