/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   explication rush.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcarvalh <gcarvalh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:55:00 by rununes-          #+#    #+#             */
/*   Updated: 2024/07/15 15:08:34 by gcarvalh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c); //we call the ft_putchar function which is in our current directory
// This function takes four arguments:
//len (the length of the line),
//begin_char (the character to display at the start of the line),
//midel_char (the character to display between the start and end of the line),
//and end_char (the character to display at the end of the line)
void	ft_print(int len, char begin_char, char midel_char, char end_char)
//It displays a line composed of the specified characters,
//using the begin_char, midel_char, and end_char values
//according to the position in the line.
	int	letter_counter;// we instantiate the entire variable 

	letter_counter = 1; //we give the value of 1 to the variable
	while (letter_counter <= len) // makes a loop to repeat the operations will be inside as long as the length of the line (received as a parameter) is greater than letter_counter
	{
		if (letter_counter == 1)//If letter_counter is equal to 1, it displays begin_char
			ft_putchar(begin_char);// then we display the first character
		else if (letter_counter == len)//If letter_counter is equal to len, it displays end_char.
			ft_putchar(end_char);// then we display the last character
		else
			ft_putchar(midel_char);//Otherwise, it displays midel_char.
		letter_counter++;//then it displays the intermediate character
	}git@vogsphere.42luxembourg.lu:vogsphere/intra-uuid-8a6eccc6-979b-4536-85e4-fa0e9a04c93c-5819576-gcarvalhacters
	ft_putchar('\n');//At the end, it adds a newline ('\n').
}

file://This function takes



 two arguments:
//x (the width of the rectangle) and y (the height of the rectangle)
//It displays a rectangle (or a grid)
//composed of specific characters
//(in this case, the characters ‘A’, ‘B’, and ‘C’).
void	rush(int x, int y) 'A', 'B', and 'C'.
				ft_print(x, 'A', 'B', 'C');//It uses the ft_print function to display each line of the rectangle.
			else if (line_counter == y) 
				ft_print(x, 'A', 'B', 'C');//It uses the ft_print function to display each line of the rectangle.

			else									//Intermediate lines are displayed with the characters 'B' and a space (' ').
				ft_print(x, 'B', ' ', 'B');//It uses the ft_print function to display each line of the rectangle.
			line_counter++;
		}
	}
}
