#include "ft_printf.h"
#include <stdio.h>

int	main()
{
	ft_printf("|%-*.199s%--122.d%0158.87%%-108s|\n" ,-34,":-’D!",800222161,NULL);
	printf("-----------------------------------------------------------------------\n");
	printf("|%-*.199s%--122.d%0158.87%%-108s|\n" ,-34,":-’D!",800222161,NULL);

	ft_printf("%0082.u%-7.57u\n" ,4183054859u,4100129571u);
	printf("%0082.u%-7.57u\n" ,4183054859u,4100129571u);
	
	ft_printf("%0*.%%-*.50s%--105.137d||%038.158%||%-45.83%|\n" ,-166,-154,"j`YV3W(-|K’\trQ#k/\tfm,nK",961916674);
	printf("%0*.%%-*.50s%--105.137d||%038.158%||%-45.83%|\n" ,-166,-154,"j`YV3W(-|K’\trQ#k/\tfm,nK",961916674);
	printf("+++++++++++++++++++++++++++++++++++++++++++\n");
	ft_printf("%-70.30u%134c%068.u%--*.84s%--172.52u\n" ,4110224048u,-90,239189602u,164,"`b[^h~\f>vE@c\fN",4236150522u);
	printf("%-70.30u%134c%068.u%--*.84s%--172.52u\n" ,4110224048u,-90,239189602u,164,"`b[^h~\f>vE@c\fN",4236150522u);
	printf("+++++++++++++++++++++++++++++++++++++++++++\n");
	ft_printf("%5%\n");
	printf("%5%\n");
	printf("++++++++++++++++++++++++++++++\n");
	ft_printf("|%-5%|\n");
	printf("|%-5%|\n");
	printf("++++++++++++++++\n");
	ft_printf("|%05%|\n");
	printf("|%05%|\n");
	printf("+++++++++++++++++\n");
	ft_printf("|%-05%|\n");
	printf("|%-05%|\n");
	printf("+++++++++++++++\n");
	ft_printf("|%.03s|\n", NULL);
	printf("|%.03s|\n", NULL);
	printf("+++++++++++++\n");
	ft_printf("|%3.1s|\n", NULL);
	printf("|%3.1s|\n", NULL);
	ft_printf("|%9.1s|\n", NULL);
	printf("|%9.1s|\n", NULL);
	printf("++++++++\n");
	ft_printf("|%-3.1s|\n", NULL);
	printf("|%-3.1s|\n", NULL);
	printf("++++++++++\n");
	ft_printf("|%-9.1s|\n", NULL);
	printf("|%-9.1s|\n", NULL);
	printf("++++++++++\n");
	ft_printf("|%05u|\n", 43);
	printf("|%05u|\n", 43);
	printf("+++++++++++\n");
	ft_printf("|%03u|\n", 0);
	printf("|%03u|\n", 0);
	printf("+++++++++++++++\n");
	ft_printf("|%p|\n", NULL);
	printf("|%p|\n", NULL);
	printf("++++++++++++++++\n");
	ft_printf("p3 |%.4s|\n", NULL);
	printf("p3 |%.4s|\n", NULL);
	printf("++++++++++++++++\n");
	ft_printf("|%010%|\n");
	printf("|%010%|\n");
	printf("++++++++++++\n");
	ft_printf("|%p\n|\n", NULL);
	printf("|%p\n|\n", NULL);
	printf("++++++++++++++\n");
	ft_printf("|%15p|\n", NULL);
	printf("|%15p|\n", NULL);
	printf("++++++++++++\n");
	ft_printf("|%-15p|\n", NULL);
	printf("|%-15p|\n", NULL);
	printf("++++++++++++++++\n");
	ft_printf("|%50.2s|\n", NULL);
	printf("|%50.2s|\n", NULL);
	printf("+++++++++++++++++\n");
	ft_printf("percent 1 |%012%|\n");
	printf("percent 1 |%012%|\n");
	printf("++++++++++++++++++\n");
	ft_printf("percent 2 |%12%|\n");
	printf("percent 2 |%12%|\n");
	printf("++++++++++++++++\n");
	ft_printf("percent 3 |%-12%|\n");
	printf("percent 3 |%-12%|\n");
	printf("+++++++++++\n");
	ft_printf("|%020u|\n", 1024u);
	printf("|%020u|\n", 1024u);
	printf("+++++++++++++++\n");
	ft_printf("|%020u|\n", -1024u);
	printf("|%020u|\n", -1024u);
	printf("+++++++++++++\n");
	ft_printf("|%-152.144u%00127.133X%-15.195x%-*.137%%-80.162u|\n" ,2450279521u,2436610582u,160136988u,31,524138014u);
	printf("|%-152.144u%00127.133X%-15.195x%-*.137%%-80.162u|\n" ,2450279521u,2436610582u,160136988u,31,524138014u);
	printf("+++++++++++++++++++++++++++\n");
	ft_printf("|%-90.*%%-*.169s%-129.46d%-26.100X%-57.36u|\n" ,178,-108,"N(Z",-1790829278,1376263938u,1964629019u);
	printf("|%-90.*%%-*.169s%-129.46d%-26.100X%-57.36u|\n" ,178,-108,"N(Z",-1790829278,1376263938u,1964629019u);
	printf("++++++++++++++++++++++\n");
	ft_printf("|%-58.50i%0141.*%%-13.25X%-36p%--82.48x|\n" ,-325554652,-122,636795324u,(void*)17352689100821810594lu,2670537659u);
	printf("|%-58.50i%0141.*%%-13.25X%-36p%--82.48x|\n" ,-325554652,-122,636795324u,(void*)17352689100821810594lu,2670537659u);
	printf("+++++++++++++++++++++++\n");
	ft_printf("|%-*.199s%--122.d%0158.87%%-108s|\n" ,-34,":-'D!",800222161,NULL);
	printf("|%-*.199s%--122.d%0158.87%%-108s|\n" ,-34,":-'D!",800222161,NULL);
	printf("++++++++++++++++++++++++++++++++\n");
	ft_printf("|%--99.174%%-152p%---41.22i|\n" ,(void*)13623062879853167239lu,-83457563);
	printf("|%--99.174%%-152p%---41.22i|\n" ,(void*)13623062879853167239lu,-83457563);
	printf("++++++++++++++++++++++++++\n");
	ft_printf("|%0174.69u%007.*x%-118.66%%--14.110x%0148.149x|\n" ,916986526u,-73,3901041477u,1211769323u,1839880205u);
	printf("|%0174.69u%007.*x%-118.66%%--14.110x%0148.149x|\n" ,916986526u,-73,3901041477u,1211769323u,1839880205u);
	printf("+++++++++++++++++++++++++++++\n");
	ft_printf("|%-113p%--84.119i%--148.*%|\n" ,(void*)5823493674460226049lu,-1063903126,-3);
	printf("|%-113p%--84.119i%--148.*%|\n" ,(void*)5823493674460226049lu,-1063903126,-3);
	printf("+++++++++++++++++++++++++++++++\n");
	ft_printf("|%0198.9X%---187.*s%--*.103%%-92.43x|\n" ,3371063919u,-131,"",51,4096758508u);
	printf("|%0198.9X%---187.*s%--*.103%%-92.43x|\n" ,3371063919u,-131,"",51,4096758508u);
	printf("++++++++++++++++++++++++++++\n");
	ft_printf("|%00129.*X%00*.32i%-121c%-167.53%|\n" ,113,3120340762u,-88,-387655089,-12);
	printf("|%00129.*X%00*.32i%-121c%-167.53%|\n" ,113,3120340762u,-88,-387655089,-12);
	printf("++++++++++++++++++++++++++++\n");
	ft_printf("|%0*.%%-*.50s%--105.137d%038.158%%-45.83%|\n" ,-166,-154,"j`YV3W(-|K'\trQ#k/\tfm,nK",961916674);
	printf("|%0*.%%-*.50s%--105.137d%038.158%%-45.83%|\n" ,-166,-154,"j`YV3W(-|K'\trQ#k/\tfm,nK",961916674);
	printf("++++++++++++++++++++++++++++++\n");
	ft_printf("|%-71.32i%0194.117u%--167.124i%-48.77%%-124c|\n" ,1314144866,611009845u,1486475242,68);
	printf("|%-71.32i%0194.117u%--167.124i%-48.77%%-124c|\n" ,1314144866,611009845u,1486475242,68);
	printf("+++++++++++++++++++++++++++++\n");
	ft_printf("|%*c%--182.%%1c%055.7u|\n" ,-129,-45,48,987889311u);
	printf("|%*c%--182.%%1c%055.7u|\n" ,-129,-45,48,987889311u);
	printf("+++++++++++++++++++++++++++++\n");
	ft_printf("|%-144.75d%--78.X%-190p%00041.*x%-23.70%|\n" ,-265040099,1164608268u,(void*)17615309680892657552lu,106,3685356723u);
	printf("|%-144.75d%--78.X%-190p%00041.*x%-23.70%|\n" ,-265040099,1164608268u,(void*)17615309680892657552lu,106,3685356723u);
	printf("+++++++++++++++++++++++++++++++\n");
	ft_printf("|%-44.191X%-36.29%%41p%-138c%00052.150X|\n" ,1190215424u,(void*)3018354647187363245lu,46,1472975837u);
	printf("|%-44.191X%-36.29%%41p%-138c%00052.150X|\n" ,1190215424u,(void*)3018354647187363245lu,46,1472975837u);
	printf("++++++++++++++++++++++++++++++\n");
	ft_printf("|%-166.189X%-26.100%|\n" ,207473590u);
	printf("|%-166.189X%-26.100%|\n" ,207473590u);
	printf("+++++++++++++++++++++\n");
	ft_printf("|%--72.*s%-108p%-*.66%%-162.27d%--126.190d|\n" ,137,"Gagp,t>sholGoP@h9#T#PjVsCF+Fx",(void*)604898635787958238lu,27,1458757178,209663612);
	printf("|%--72.*s%-108p%-*.66%%-162.27d%--126.190d|\n" ,137,"Gagp,t>sholGoP@h9#T#PjVsCF+Fx",(void*)604898635787958238lu,27,1458757178,209663612);
	printf("++++++++++++++++++++++++++++\n");
	ft_printf("|%-197p%03.35d%-101.10%|\n" ,(void*)16358200459980665292lu,1110276224);
	printf("|%-197p%03.35d%-101.10%|\n" ,(void*)16358200459980665292lu,1110276224);
	printf("+++++++++++++++++++++++++++\n");
	ft_printf("|%00144.60X%--160.157%|\n" ,132210504u);
	printf("|%00144.60X%--160.157%|\n" ,132210504u);
	printf("++++++++++++++++++\n");
	ft_printf("|%0135.*%%--39c%095.16i%0120.39x%8.33s|\n" ,-193,15,143560664,578664161u,"V0_(");
	printf("|%0135.*%%--39c%095.16i%0120.39x%8.33s|\n" ,-193,15,143560664,578664161u,"V0_(");
	printf("++++++++++++++++++++++++\n");
	ft_printf("|%-138.17%%--*p%-14p%---167p%--47.91u|\n" ,-13,(void*)10740891812216954868lu,(void*)2144050129394666231lu,(void*)11614427029332157430lu,2673098069u);
	printf("|%-138.17%%--*p%-14p%---167p%--47.91u|\n" ,-13,(void*)10740891812216954868lu,(void*)2144050129394666231lu,(void*)11614427029332157430lu,2673098069u);
	printf("++++++++++++++++++++\n");
	ft_printf("|%-190.90x%-117.173%|\n" ,2497145861u);
	printf("|%-190.90x%-117.173%|\n" ,2497145861u);
	printf("++++++++++++++++++++\n");
	ft_printf("|%00183.%%-44.48d|\n" ,2066635919);
	printf("|%00183.%%-44.48d|\n" ,2066635919);
	printf("+++++++++++++++++++++++\n");
	ft_printf("|%*p%-114.86%%-27.22d|\n" ,-112,(void*)10233099178825149944lu,500193481);
	printf("|%*p%-114.86%%-27.22d|\n" ,-112,(void*)10233099178825149944lu,500193481);
	printf("+++++++++++++++++++++++\n");
	ft_printf("|%-164.*%%-108c%-157p%--14p|\n" ,91,-9,(void*)8907860934591409401lu,(void*)15408969479809857993lu);
	printf("|%-164.*%%-108c%-157p%--14p|\n" ,91,-9,(void*)8907860934591409401lu,(void*)15408969479809857993lu);
	printf("++++++++++++++++++++++++++++\n");
	ft_printf("|%087.123i%0184.88i%--19.87%%000176.145x%-22.154X|\n" ,-75280076,1694678287,555307608u,934788370u);
	printf("|%087.123i%0184.88i%--19.87%%000176.145x%-22.154X|\n" ,-75280076,1694678287,555307608u,934788370u);
	printf("++++++++++++++++++++++++++\n");
	ft_printf("|%--195.79s%*c%0181u%-7.140d%074.146i|\n" ,"Lyaw_K!$){V8",-42,38,1322833922u,236864735,680817438);
	printf("|%--195.79s%*c%0181u%-7.140d%074.146i|\n" ,"Lyaw_K!$){V8",-42,38,1322833922u,236864735,680817438);
	printf("++++++++++++++++++++++++++++\n");
	ft_printf("|%-170.%%-*.182%%--130.136u%--35p|\n" ,133,2033636620u,(void*)9790833151496085968lu);
	printf("|%-170.%%-*.182%%--130.136u%--35p|\n" ,133,2033636620u,(void*)9790833151496085968lu);
	printf("+++++++++++++++++++++++++++\n");
	ft_printf("|%--99.174%%-152p%---41.22i|\n" ,(void*)13623062879853167239lu,-83457563);
	printf("|%--99.174%%-152p%---41.22i|\n" ,(void*)13623062879853167239lu,-83457563);
	printf("+++++++++++++++++++++++++++++\n");
}
