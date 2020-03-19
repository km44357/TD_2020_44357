# TD_2020_44357
clc
close
clear



A = 1;
f = 5;
th = 3*pi;

t0 = 0;
tk = 7;
dts = 1/500;


t = t0:dts:tk;
%t = linspace(0,7,120);


%s = @(t) A*sin(2*pi*f.*t + th);

s = A*sin(2*pi*f.*t + th);


p1 = plot(t,s);
p1.LineStyle = 'None';
p1.Marker = '.';
p1

%fp1 = fplot(@(t) s(t));
%fp1.LineStyle = 'None';
%fp1.Marker = '.';
%fp1

