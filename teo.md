CIDR - Classless Inter-Domain Routing

net.id : host.id
net.id*1 : 000.. - mask
capacity = 2**(32-n) - 2
net.id - subnet - : host.id
0000 - :: (only once)
x.x.x.0 - net adress
x.x.x.1 - router
x.x.x.254 - last
x.x.x.255 - bcast
0b - bin, 0o - octo, 0x - hex

-----
OSI
7. Practical (Telnet, FTP) - Appl
6. Interpret (HTML, AVI) - -||-
5. Seans (TCP, RTP, RPC) - -||-
4. Transport (SSL, TLS, UDP)
3. NET (IP, ARP, ICMP)
2. Channel (Ethernet, 802.11)
1. Physical (DSL, 802.11)

Application
Transport
NET
NET access

-----
IPV4: x*8.x*8.x*8.x*8
IPV6: 256 (xxxx:xxxx:xxxx:xxxx xxxx:xxxx:xxxx:xxxx)
Class:
  Class A: 1.0.0.0 - 126.255.255.255 (255.0.0.0) x16mln (7/24) 126net
  Class B: 128.0.0.0 - 191.255.255.255 (255.255.0.0) x65534 (14/16) 16384net
  Class C: 192.0.0.0 - 223.255.255.255 (255.255.255.0) x254 (21/8) 2.97.152net
  Class D: multicast - 224 - 239
  Class E: 240 - 247
