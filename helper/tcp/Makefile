all: tcp_client.c tcp_server.c pcap.c 
	gcc -g -Wall -o tcp_client tcp_client.c  
	gcc -g -Wall -o tcp_server tcp_server.c  
	gcc -g -Wall -o pcap pcap.c -lpcap

clean:  
	rm -rf *.o tcp_client tcp_server pcap *~ *swp
