/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   ft_isascii.c									   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: lykostan <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/01/19 16:34:26 by lykostan		  #+#	#+#			 */
/*   Updated: 2023/01/19 16:34:28 by lykostan		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
