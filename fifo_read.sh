#/bin/sh

FIFO_FILE_IN="./serial_in.fifo"
FIFO_FILE_OUT="./serial_out.fifo"

killall tail -9;
tail -f "$FIFO_FILE_OUT" &

while true; do
    read -r -e line
    printf "%s\n" "$line" > "$FIFO_FILE_IN"
done