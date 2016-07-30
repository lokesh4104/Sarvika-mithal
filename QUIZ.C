# include<stdio.h>
# include<conio.h>

  void help()
  {
  printf("\t\t\t\tRULES\n");
  printf("\tYou will be asked ten general knowledge questions\n");
  printf("\tRight answer is to be chosen among the four options provided\n");
  printf("\tMarking Scheme:+4 for correct answer and -2 for wrong answer\n");
  printf("\tMaximum marks are 40\n");
  printf("\tyour score will be calculated and displayed at the end\n");
  printf("\t\t\tBEST OF LUCK!!!\n");
  }
    void main()
  {
  int a,b,c,d,e=0;
  char name[20];
  clrscr();
  printf("\t\t\tWELCOME TO QUIZAHOLIC\n");
  printf("\t\t\t\tCreated by Shravika Mittal\n");
  printf("-----------------------------------------------------------------------\n");
  mainmenu:
  printf("MAIN MENU\n");
  printf("1.Play\n");
  printf("2.Rules\n");
  printf("3.Quit\n");
  printf("choose the option\n");
  scanf("%d",&a);
  if(a==2)
  {
   help();
 goto  mainmenu;
   }
  else if(a==3)
  {
  printf("Are you sure you want to quit\n");
  printf("1.Yes\n");
  printf("2.No\n");
  printf("Choose an option");
  scanf("%d",&b);
  if(b==1)
  {
  printf("Bye.Do visit next time for a mind boggling experience\n");
  }
  else if(b==2)
  {
  goto mainmenu;

  }
  }
  else if(a==1)
  {
  printf("\t\t\t\tLET US BEGIN\n");
  printf("Enter Your Name\n");
  scanf("%s",&name);
  printf("Question 1:");
  scanf("%d",&c);
  switch(c)
  {
  case 1:
  printf("Who is the prime minister of France?\n");
  printf("1.Gustave Eiffel\t\t2.Francois Hollande\t\t\n3.Nicolas Sarkozy\t\t4.Jules Verne\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==2)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  printf("Question 2:");
  scanf("%d",&c);
  switch(c)
  {
  case 2:
  printf("What is the capital of Sikkim?\n");
  printf("1.Tripura\t\t2.Aizwal\t\t\n3.Gangtok\t\t4.Arunachal Pradesh\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==3)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  printf("Question 3:");
  scanf("%d",&c);
  switch(c)
  {
  case 3:
  printf("Which is the longest river in the world?\n");
  printf("1.Amazon\t\t2.Nile\t\t\n3.Seine\t\t4.Ganga\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==2)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  printf("Question 4:");
  scanf("%d",&c);
  switch(c)
  {
  case 4:
  printf("Which is the lightest element?\n");
  printf("1.Helium\t\t2.Neon\t\t\n3.Lithium\t\t4.Hydrogen\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==4)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  printf("Question 5:");
  scanf("%d",&c);
  switch(c)
  {
  case 5:
  printf("Who is the father of geometry?\n");
  printf("1.Euclid\t\t2.Aristotle\t\t\n3.Pythagoras\t\t4.Kepler\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==1)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  printf("Question 6:");
  scanf("%d",&c);
  switch(c)
  {
  case 6:
  printf("The Indian to beat computers in mathematical wizrdry was?\n");
  printf("1.Ramanujan\t\t2.Aryabhatta\t\t\n3.Shakunthala Devi\t\t4.Raja Ramanna\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==3)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  printf("Question 7:");
  scanf("%d",&c);
  switch(c)
  {
  case 7:
  printf("Who is the author of Harry Potter?\n");
  printf("1.Jules Verne\t\t2.J K Rowling\t\t\n3.Rick Riordan\t\t4.Enid Blyton\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==2)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  printf("Question 8:");
  scanf("%d",&c);
  switch(c)
  {
  case 8:
  printf("Who invented the radioactive element radon?\n");
  printf("1.Madame Curie\t\t2.Albert Einstein\t\t\n3.Isaac Newton\t\t4.None of these\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==1)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  printf("Question 9:");
  scanf("%d",&c);
  switch(c)
  {
  case 9:
  printf("Taj Mahal is located on which river?\n");
  printf("1.Ganga\t\t2.Brahmaputra\t\t\n3.Godavri\t\t4.Yamuna\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==4)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  printf("Question 10:");
  scanf("%d",&c);
  switch(c)
  {
  case 10:
  printf("Who is the greek god of water?\n");
  printf("1.Zeus\t\t2.Hades\t\t\n3.Poseidon\t\t4.Athena\n");
  printf("Enter your option\n");
  scanf("%d",&d);
  if(d==3)
  {
  printf("Correct Answer\n");
  e=e+4;
  }
  else
  {
  printf("Wrong Answer\n");
  e=e-2;
  }
  break;
  default:
  printf("Wrong Input");
  break;
  }
  }

  printf("Your total score is : %d\n",e);
  if(e>=30&&e<=40)
  {
  printf("YOU ARE GENIUS GRADE-A\n");
  }
  else if(e>=20&&e<30)
  {
   printf("YOU CAN DO BETTER GRADE-B\n");
   }
   else if(e>=0&&e<20)
   {
   printf("YOU NEED TO WORK HARD GRADE-C\n");
   }
   printf("THANKS FOR PLAYING\n");
  getch();
  }



