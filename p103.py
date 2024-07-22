def fun():
    local_variable=0
    is_local="local_variable" in locals()
    print(is_local)
fun()