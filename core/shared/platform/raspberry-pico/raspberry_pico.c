#include <platform_api_vmcore.h>
#include <platform_internal.h>

#ifdef __cplusplus
extern "C" {
#endif

int bh_platform_init(void)
{
    return 0;
}

void bh_platform_destroy(void)
{
}

void *os_malloc(unsigned size)
{
    return malloc(size);
}

void *os_realloc(void *ptr, unsigned size)
{
    return realloc(ptr, size);
}

void os_free(void *ptr)
{
    return free(ptr);
}

int os_printf(const char *format, ...)
{
    int ret = 0;
    va_list ap;

    va_start(ap, format);
    ret += vprintf(format, ap);
    va_end(ap);

    return ret;
}

int os_vprintf(const char *format, va_list ap)
{
    return vprintf(format, ap);
}

uint64 os_time_get_boot_microsecond(void)
{
    return time_us_64();
}

korp_tid os_self_thread(void)
{
    return 0;
}

uint8 *os_thread_get_stack_boundary(void)
{
    return NULL;
}

void os_thread_jit_write_protect_np(bool enabled)
{
}

int os_mutex_init(korp_mutex *mutex)
{
    return 0;
}

int os_mutex_destroy(korp_mutex *mutex)
{
    return 0;
}

int os_mutex_lock(korp_mutex *mutex)
{
    return 0;
}

int os_mutex_unlock(korp_mutex *mutex)
{
    return 0;
}

void *os_mmap(void *hint, size_t size, int prot, int flags)
{
    return NULL;
}

void os_munmap(void *addr, size_t size)
{
}

int os_mprotect(void *addr, size_t size, int prot)
{
    return 0;
}

void os_dcache_flush(void)
{
}

void os_icache_flush(void *start, size_t len)
{
}

#ifdef __cplusplus
}
#endif

