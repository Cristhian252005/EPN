'''
    Solicitar al usuario que ingrese su dirección email. Imprimir un mensaje indicando si la 
    dirección es válida o no, valiéndose de una función para decidirlo. Una dirección se 
    considerará válida si contiene el símbolo "@".
'''



def correo():
    while True:
        correo = input("\t\t Ingrese la dirección de su correo electrónico: ")
        if '@' in correo:
            print(" Su correo es válido")
            break
        else:
            print(" Su correo no es válido")
            True
    

''' 
    Cambio de prueba
'''
       
correo()