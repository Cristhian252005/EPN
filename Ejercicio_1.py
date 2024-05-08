

def correo():
    while True:
        correo = input("\t\t Ingrese la dirección de su correo electrónico: ")
        if '@' in correo:
            print(" Su correo es válido")
            break
        else:
            print(" Su correo no es válido")
            True
    
       
correo()