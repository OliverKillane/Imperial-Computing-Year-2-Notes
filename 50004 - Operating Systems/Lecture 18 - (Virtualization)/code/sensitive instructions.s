cli ; Clear Interrupt Flag (maskable interrupts are ignores - e.g timer)
sti ; Set Interrupt Flag (enables interrupts after next instruction)

;When recived, the VMM uses a trap:
;VM #3:
;1. cli
; - [trap, cli in user mode!] VMM stops delivering interrupts to VM #3
; - VMM remembers IF (interrupt flag) state
; - VM#3 continues
;2. interrupts disabled
;3. ...