#/bin/sh

FIFO_FILE_IN="./serial_in.fifo"
FIFO_FILE_OUT="./serial_out.fifo"

tail -f "$FIFO_FILE_OUT" &

while true; do
    read -r line
    printf "%s\n" "$line" > "$FIFO_FILE_IN"
done