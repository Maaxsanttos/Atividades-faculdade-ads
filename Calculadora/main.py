# Variavel para armazenar os números digitados pelo usuário
n1 = float (input("Digite o primeiro número: "))
n2 = float (input("Digite o segundo número: "))

print ("Escolha a operação desejada:")
print ("1 - para adição")
print ("2 - para subtração")
print ("3 - para multiplicação")
print ("4 - para divisão")

# Variavel para armazenar a operação escolhida
operacao = input ("Digite o número da operação desejada: ")

if operacao == "1":
    resultado = n1 + n2
    print (f"O resultado da adição é: {resultado}")

elif operacao == "2":
    resultado = n1 - n2
    print (f"O resultado da subtração é: {resultado}")

elif operacao == "3":
    resultado = n1 * n2
    print (f"O resultado da multiplicação é: {resultado}")

elif operacao == "4":
    resultado = n1 / n2
    print (f"O resultado da divisão é: {resultado}")
