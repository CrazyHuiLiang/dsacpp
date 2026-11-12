foreach(project IN ITEMS BitMap BitMap_hopcroft Bitmap_set_only vector)
    add_subdirectory(${project})
endforeach()
