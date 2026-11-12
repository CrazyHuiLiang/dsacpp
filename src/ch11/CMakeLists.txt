foreach(project IN ITEMS string_pm_bf1 string_pm_bf2 string_pm_bm_bc string_pm_bm_bc+gs string_pm_kmp string_pm_kmp_improved string_pm_kr)
    add_subdirectory(${project})
endforeach()
