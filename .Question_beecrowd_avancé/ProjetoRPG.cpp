#include <bits/stdc++.h>

using namespace std;
 
    int escolhaDoJogador() // Função de escolhas
    {
        int esc;
        cout << "escolha o caminho : " << endl;

        cin >> esc;

        return esc;
    }
// --------V100%----------V40%----------X30%------- 

    int combate(int PlayerHP, int PlayerArmor, int PlayerDamage, int EnemyHP, int EnemyDamage, int PlayerHpLimit, int playerRenegerationLimit) // Função de combate
    {
        int esc;
        if(PlayerHP > 0 and EnemyHP > 0)
        {
            esc = escolhaDoJogador();

            if(esc == 1) // dano do jogador
                EnemyHP -= 30;

            if(esc == 2) // regeneração
            // playerRenerationLimit = 30 (Quantidade de vida que ele pode recuperar)
            // PlayerRegenerationUses = 2 (Quantidade de vezes que ele pode usar a habilidade)

                if(PlayerHp+playerRenegerationLimit > PlayerHplimit) // Pra não quebrar o limite
                    PlayerHp = PlayerHpLimit;
                else
                    PlayerHP += playerRenegerationLimit;

            if(esc == 3)
            if(PlayerInventoryPotion > 0) // poção
            {
            // PlayerPotionUses = 2 (Quantidade de poções no inventário)

               if(escolhaDoJogador() == 3 and PlayerHp >= PlayerHpLimit) // limite de poção e limite de vida de poção
                cout << "você está com a vida cheia" << endl; 
            }
            


        }
        else
        {
            if(PlayerHP == 0) // tela de morte 
                return PlayerHp
            else
                cout << "O inimigo foi morto" << endl;
                
        }
    }

int main()
{
    PlayerHpLimit = 200;

    fodase = escolhaDoJogador(); 

    combate(PlayerVida, PlayerDano, PlayerLimite, inimigoVida, InimigoDano) // possiveis valores pro combate (adicionar limites)

}