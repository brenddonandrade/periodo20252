#!/bin/bash

# Configurações da VPN
VPN_SERVER="200.159.241.9"
VPN_PORT="10443"
VPN_USER="stdnthpc-brenddon.erick.oliveira"
VPN_PASSWORD="2PSBd5lu"

# Caminho para o cliente VPN (usando a versão 64bit)
VPN_CLI="$HOME/forticlientsslvpn/64bit/forticlientsslvpn_cli"

# Verifica se o cliente VPN existe
if [ ! -f "$VPN_CLI" ]; then
    echo "Erro: Cliente VPN não encontrado em $VPN_CLI"
    echo "Verifique se o FortiClient SSL VPN está instalado corretamente."
    exit 1
fi

# Função para conectar ao VPN
connect_vpn() {
    echo "Conectando ao VPN $VPN_SERVER:$VPN_PORT como $VPN_USER..."
    echo "Por favor, aguarde..."

    # Executa o cliente VPN com aceitação do certificado não confiável
    expect -c "
        spawn \"$VPN_CLI\" --server \"$VPN_SERVER:$VPN_PORT\" --vpnuser \"$VPN_USER\" --keepalive
        expect \"Password for VPN:\"
        send \"$VPN_PASSWORD\r\"
        expect \"Would you like to connect to this server? (Y/N)\"
        send \"Y\r\"
        interact
    "
}

# Verifica se o expect está instalado
if ! command -v expect &> /dev/null; then
    echo "O pacote 'expect' não está instalado."
    echo "Instale-o com: sudo apt-get install expect"
    exit 1
fi

# Chama a função de conexão
connect_vpn

# Verifica se a conexão foi bem-sucedida
if [ $? -eq 0 ]; then
    echo "Conexão VPN estabelecida com sucesso!"
else
    echo "Erro ao conectar ao VPN. Verifique suas credenciais e conexão de rede."
fi
