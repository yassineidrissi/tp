/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaidriss <yaidriss@student1337.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:50:06 by yaidriss          #+#    #+#             */
/*   Updated: 2023/01/03 17:50:06 by yaidriss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void main()
{
	int T[10];
	int s;
	int i;
	int n ;
	s = 0;
	printf("entrer les elts du tableau :");
	scanf("%d",&n);
	printf("entrer les %d valeurs du tableau :\n", n);
	for(i = 0; i < n; i++)
		scanf("%d", &T[i]);
	printf("les valeurs de tableau sont:\n");
	for(i= 0; i < n ; i++)
		printf("%d\n",T[i]);
	for(i = 0; i < n; i++)
		s += T[i];
	printf("la somme de toutes les valeurs est: %d", s);
}