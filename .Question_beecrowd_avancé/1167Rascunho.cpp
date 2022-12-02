vector<int>numeros;


contador = 0;
limite = numeros.size();

# valorCriança =  numeros[contador]  // repetição entre cada criança começando pela próxima.
# valorCriança[0 : 7]       // ele tem que repetir 7 vezes
#
# Quantidade de crianças : numeros.size() 
# contador[1:3]             // vai de 0 à 3+1 (n começa na primeira criança)
# [0 = primeira criança], [0 : 4 significa começar no 0 porém continuar até 3(numero criança)+1 (por causa do 0)]
# for(valorCriança = 7)     // repetição
# vetor[contador] = max[3]²  // ele tem que ir por casa existente
# contador + 1 por for       // contador aumenta a cada rep
# 
# if(contador == nomes.size()+1) // roda de 0 até size e no size+1 ele volta pro 0
#   contador = 0; 
# // contador começa em 0 até x (pulando o valor que passou o numero)
# // 
#  posição = contador;     // contador começa no 0 e vai até o numero X +1 (+1 pq ele vai contar a casa da criança q deu o valor)
