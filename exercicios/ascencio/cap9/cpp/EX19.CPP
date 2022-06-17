#include <string.h>
#include <stdio.h>
int main()
{ char frase[200], frase_nova[250], palavra_frase[20];
  int tam, i, cont, res;
  printf("\nDigite uma frase ");
  gets(frase);
  tam = strlen(frase);
  i=0;
  cont=0;
  strcpy(frase_nova,""); 
	for (i=0;i<=tam;i++)
		{ if ((frase[i] != ' ') && (frase[i] != '\0'))
			 { palavra_frase[cont]=frase[i];
				 cont++;
			 }
			else
			 { palavra_frase[cont] = '\0';
				 cont=0;
				 if (strcmp(palavra_frase,"JANEIRO")==0)
					{ strcat(frase_nova,"1");
						strcat(frase_nova," ");
					}
	 else
		{ if (strcmp(palavra_frase,"FEVEREIRO")==0)
			 { strcat(frase_nova,"2");
				 strcat(frase_nova," ");
			 }
			else
			 { if (strcmp(palavra_frase,"MARCO")==0)
					{ strcat(frase_nova,"3");
						strcat(frase_nova," ");
					}
				 else
					{ if (strcmp(palavra_frase,"ABRIL")==0)
						{ strcat(frase_nova,"4");
							strcat(frase_nova," ");
						}
					else
						{ if (strcmp(palavra_frase,"MAIO")==0)
							{ strcat(frase_nova,"5");
								strcat(frase_nova," ");
							}
							else
								{ if (strcmp(palavra_frase,"JUNHO")==0)
									{ strcat(frase_nova,"6");
										strcat(frase_nova," ");
									}
									else
									 { if (strcmp(palavra_frase,"JULHO")==0)
											{ strcat(frase_nova,"7");
												strcat(frase_nova," ");
											}
										else
											{ if (strcmp(palavra_frase,"AGOSTO")==0)
												{ strcat(frase_nova,"8");
													strcat(frase_nova," ");
												}
												else
												 { if (strcmp(palavra_frase,"SETEMBRO")==0)
														{ strcat(frase_nova,"9");
															strcat(frase_nova," ");
														}
													 else
														{ if (strcmp(palavra_frase,"OUTUBRO")==0)
															{ strcat(frase_nova,"10");
																strcat(frase_nova," ");
															}
															else
															 { if (strcmp(palavra_frase,"NOVEMBRO")==0)
																	{ strcat(frase_nova,"11");
																		strcat(frase_nova," ");
																	}
																 else
																	{ if (strcmp(palavra_frase,"DEZEMBRO")==0)
																		 { strcat(frase_nova,"12");
																			 strcat(frase_nova," ");
																		 }
																	else
																	 { strcat(frase_nova,palavra_frase);
																		 strcat(frase_nova," ");
																	 }
					}
						 }
					}
						 }
					}
			 }
					}
			 }
		}
			 }
		}
			 }
		} //fim for
	strcat(frase_nova,"\0");
	printf(frase_nova);
    getchar();
    return 0;
}
