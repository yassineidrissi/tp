/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 23:55:15 by yaidriss          #+#    #+#             */
/*   Updated: 2023/01/03 23:55:15 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void main()
{
	int T[10];
	int i;
	int n ;
	printf("entrer les elts du tableau :");
	scanf("%d",&n);
	printf("entrer les %d valeurs du tableau :\n", n);
	for(i = 0; i < n; i++)
		scanf("%d", &T[i]);
	printf("les valeurs de tableau sont:\n");
	for(i= 0; i < n ; i++)
		printf("%d\n",T[i]);
	for(i = 0; i < n; i++)
		if (T[i] == 0)
			T[i] = T[i + 1];
	printf("les valeurs de tableau apres modif sont:\n");
	for(i= 0; i < n ; i++)
		printf("%d\n",T[i]);
}