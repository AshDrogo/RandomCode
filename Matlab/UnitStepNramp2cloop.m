t=0:0.001:10;
n1=[1];
d1=[1 0];
d2=[1 2*0.7*1];
d=conv(d1,d2);
[n3 d3]=cloop(n1,d);
c=step(n3,d3,t);
plot(t,c);
xlabel('Time');
ylabel('Amplitude');
title('Unit Step Response');