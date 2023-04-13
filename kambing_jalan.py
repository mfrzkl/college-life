import tkinter as tk

# variable declare
root = tk.Tk()
gvar = tk.StringVar()
input = tk.StringVar()
timesin = tk.IntVar()

# shifting function from input
def shift():

    # get values from each variable before shifting
    cahche = input.get()
    temp = cahche
    shifter = input.get()
    delay = timesin.get()

    # the shifter
    shifter = shifter[1:] + shifter[0]

    ''' 
    set input to shifter
    if input not set to shifter after shifting, 
    it would be shift the raw input again, not the shifted input
    '''
    input.set(shifter)

    # set the gvar to the shifter
    gvar.set(shifter)

    # continous repeadetly function
    root.after(delay, shift)

def button_disabler():
    tombol.config(state=DISABLED)

def disabler():
    timesin.set(0)
    input.set(temp)
    runningText.config(textvariable=temp)

# input frame
input_frame = tk.Frame(root)
input_frame.pack(padx=10, pady=10, fill="x", expand=True)

# input word
labl = tk.Label(input_frame, text="insert words")
labl.pack()
runningText = tk.Entry(input_frame, text="Masukkan kata", textvariable=input)
runningText.pack(padx=10,pady=10)

# input delay
labl = tk.Label(input_frame, text="delay/word (def:120)")
labl.pack()
times = tk.Entry(input_frame, textvariable=timesin)
times.pack(padx=10,pady=10)

# button with command shift()
tombol = tk.Button(input_frame, text="generate", state=None, command=lambda: ([shift()]))
tombol.pack(padx=10, fill="x", expand=True)

tombol_s = tk.Button(input_frame, text="stop", bg='red', fg='white', command=lambda: ([disabler()]))
tombol_s.pack(padx=10, pady=5, fill="x", expand=True)

# result frame
res_frame = tk.Frame(root)
res_frame.pack(padx=10, pady=10, expand=True)

# result
labl = tk.Label(input_frame, text='result :')
labl.pack()
labl = tk.Label(res_frame, fg='white', bg='black', textvariable=gvar, height=2)
labl.pack()

root.mainloop()
