import os

if __name__ == "__main__":
    os.system("pio pkg exec -p \"platformio/tool-esptoolpy\" -- "
            "esptool.py "
            "--chip esp32 merge_bin -o flash.bin "
            "--fill-flash-size 4MB "
            "0x1000 .pio/build/qemu/bootloader.bin "
            "0x8000 .pio/build/qemu/partitions.bin "
            "0x10000 .pio/build/qemu/firmware.bin "
            )

    os.system(
        "qemu-system-xtensa -nographic -no-reboot "
        "-machine esp32 "
        "-drive file=flash.bin,if=mtd,format=raw "
    )