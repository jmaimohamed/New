#include <SDL/SDL.h>
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
int main ()
{
//background;
SDL_Event event;
SDL_Surface *screen=NULL,*screen1=NULL,*screen2=NULL,*screen3=NULL,*screen4=NULL,*image=NULL,*image2=NULL,*image3=NULL,*image4=NULL,*image10=NULL,*image5=NULL,*image6=NULL,*image7=NULL,*image8=NULL,*image9=NULL;
SDL_Init(SDL_INIT_VIDEO);
SDL_Rect positionecran;
SDL_Rect positionecran2;
SDL_Rect positionecran3;
SDL_Rect positionecran4;
SDL_Rect positionecran5;
SDL_Rect positionecran6;
SDL_Rect positionecran7;
SDL_Rect positionecran10;
SDL_Rect Bp;
SDL_Rect Bo;
SDL_Rect Bq;
Bp.x=550;
Bp.y=180;
Bp.w=105;
Bp.h=55;
Bo.x=550;
Bo.y=280;
Bo.w=105;
Bo.h=55;
Bq.x=550;
Bq.y=380;
Bq.w=191;
Bq.h=55;
//hello
int continuer=1;
if(SDL_Init(SDL_INIT_VIDEO)!=0)
{
printf("Unuable to initialize SDL: %s \n",SDL_GetError());
return 1;}
///screen = SDL_SetVideoMode( SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_BPP, SDL_SWSURFACE  | SDL_FULLSCREEN );
screen = SDL_SetVideoMode( 1260,700,32,  SDL_HWSURFACE | SDL_RESIZABLE );



screen4= SDL_SetVideoMode( 1260,700,32,  SDL_HWSURFACE | SDL_RESIZABLE);
image =IMG_Load("time.jpg");
image2 =IMG_Load("play.png");
image3 =IMG_Load("options.png");
image4 =IMG_Load("QUIT.png");
image5 =IMG_Load("full.png");
image6 =IMG_Load("nor.png");
image7 =IMG_Load("retour.png");
image8=IMG_Load("fullscreen2.jpg");
image9=IMG_Load("final.png");
image10 =IMG_Load("deux.jpg");
if(image==NULL)
{
printf("Unuable to load bitmap:%s \n",SDL_GetError());
return 1;
}

positionecran.x=0;
positionecran.y=0;
SDL_BlitSurface(image,NULL,screen,&positionecran);
SDL_Flip(screen);
positionecran2.x=550;
positionecran2.y=180;
SDL_BlitSurface(image2,NULL,screen,&positionecran2);
SDL_Flip(screen);
positionecran3.x=550;
positionecran3.y=280;
SDL_BlitSurface(image3,NULL,screen,&positionecran3);
SDL_Flip(screen);
positionecran4.x=550;
positionecran4.y=380;
SDL_BlitSurface(image4,NULL,screen,&positionecran4);
SDL_Flip(screen);

//music;
Mix_Music *music;
Mix_Chunk *son;
if(Mix_OpenAudio(44100,MIX_DEFAULT_FORMAT,2,1024)==-1)
{
printf("%s",Mix_GetError());
}
music=Mix_LoadMUS("boucle.mp3");
son=Mix_LoadWAV("clickk.wav");
Mix_PlayMusic(music,-1);
while(continuer)
{
while(SDL_PollEvent(&event))
{
switch(event.type)
{
case SDL_QUIT:
continuer=0;
break;
           case SDL_MOUSEMOTION:
              if(((event.motion.x>=550)&&(event.motion.x<=655))&&((event.motion.y>=180)&&(event.motion.y<=235))||                   ((event.motion.x>=550)&&(event.motion.x<=655))&&((event.motion.y>=280)&&(event.motion.y<=335))||((event.motion.x>=550)&&(event.motion.x<=741))&&((event.motion.y>=380)&&(event.motion.y<=435)))
{Mix_PlayChannel(-1,son,0);

}

break;

case SDL_MOUSEBUTTONDOWN:
{if(((event.motion.x>=550)&&(event.motion.x<=741))&&((event.motion.y>=380)&&(event.motion.y<=435)))
{if(event.button.button=SDL_BUTTON_LEFT)
{
continuer=0;
}
}
if(((event.motion.x>=550)&&(event.motion.x<=655))&&((event.motion.y>=180)&&(event.motion.y<=235)))
{if(event.button.button=SDL_BUTTON_LEFT)
{
Mix_PlayChannel(-1,son,0);

positionecran.x=0;
positionecran.y=0;
SDL_BlitSurface(image,NULL,screen,&positionecran);
SDL_Flip(screen);
positionecran2.x=550;
positionecran2.y=180;
SDL_BlitSurface(image2,NULL,screen,&positionecran2);
SDL_Flip(screen);
positionecran3.x=550;
positionecran3.y=280;
SDL_BlitSurface(image3,NULL,screen,&positionecran3);
SDL_Flip(screen);
positionecran4.x=550;
positionecran4.y=380;
SDL_BlitSurface(image4,NULL,screen,&positionecran4);
SDL_Flip(screen);
Mix_PauseMusic();
}
}
//second image


if(((event.motion.x>=550)&&(event.motion.x<=655))&&((event.motion.y>=280)&&(event.motion.y<=335)))
{if(event.button.button=SDL_BUTTON_LEFT)
{Mix_PlayMusic(music,-1);
screen1= SDL_SetVideoMode(1900,1260,32, SDL_HWSURFACE | SDL_RESIZABLE);

positionecran10.x=0;
positionecran10.y=0;
SDL_BlitSurface(image10,NULL,screen1,&positionecran10);
SDL_Flip(screen1);
positionecran7.x=550;
positionecran7.y=180;
SDL_BlitSurface(image7,NULL,screen1,&positionecran7);
SDL_Flip(screen1);
positionecran5.x=550;
positionecran5.y=280;
SDL_BlitSurface(image5,NULL,screen1,&positionecran5);
SDL_Flip(screen1);
positionecran4.x=550;
positionecran4.y=380;
SDL_BlitSurface(image4,NULL,screen1,&positionecran4);
SDL_Flip(screen1);
Mix_PlayChannel(-1,son,0);
}
}
}


break;
case SDL_KEYDOWN :
 {
            switch (event.key.keysym.sym)
            {
                case SDLK_c: 
                    
                   
            
          {                
                        
Mix_PlayMusic(music,-1);
Mix_PlayChannel(-1,son,0);

positionecran10.x=0;
positionecran10.y=0;
SDL_BlitSurface(image10,NULL,screen4,&positionecran10);
SDL_Flip(screen4);
positionecran7.x=550;
positionecran7.y=180;
SDL_BlitSurface(image7,NULL,screen4,&positionecran7);
SDL_Flip(screen4);
positionecran5.x=550;
positionecran5.y=280;
SDL_BlitSurface(image5,NULL,screen4,&positionecran5);
SDL_Flip(screen4);
positionecran4.x=550;
positionecran4.y=380;
SDL_BlitSurface(image4,NULL,screen4,&positionecran4);
SDL_Flip(screen4);
}
break;  
case SDLK_q:
{
continuer=0;
}
break;
case SDLK_a:
{
screen2= SDL_SetVideoMode( 1260,700,32, SDL_HWSURFACE | SDL_RESIZABLE );
positionecran.x=0;
positionecran.y=0;
SDL_BlitSurface(image8,NULL,screen2,&positionecran);
SDL_Flip(screen2);
positionecran2.x=550;
positionecran2.y=180;
SDL_BlitSurface(image2,NULL,screen2,&positionecran2);
SDL_Flip(screen2);
positionecran3.x=550;
positionecran3.y=280;
SDL_BlitSurface(image3,NULL,screen2,&positionecran3);
SDL_Flip(screen2);
positionecran4.x=550;
positionecran4.y=380;
SDL_BlitSurface(image4,NULL,screen2,&positionecran4);
SDL_Flip(screen2);
}
break;
int MAX=60;
int m=60;
case SDLK_UP:
Mix_VolumeMusic(120);
break;
case SDLK_p:
Mix_VolumeMusic(60);
break;



case SDLK_u:
positionecran2.x=550;
positionecran2.y=180;
SDL_BlitSurface(image9,NULL,screen,&positionecran2);
SDL_Flip(screen);

break;


case SDLK_w: 
                                                                                                            /*screen = SDL_SetVideoMode( 1260,700,32,  SDL_HWSURFACE | SDL_RESIZABLE);
                                                                                                               screen1= SDL_SetVideoMode( 1900,1260,32, SDL_HWSURFACE | SDL_RESIZABLE);
                                                                                                                screen3= SDL_SetVideoMode( 1900,1260,32, SDL_HWSURFACE | SDL_RESIZABLE);
                                                                                                               screen4= SDL_SetVideoMode( 1260,700,32,  SDL_SWSURFACE | SDL_RESIZABLE);*/
                   
            
          {                
                        
Mix_PlayMusic(music,-1);
Mix_PlayChannel(-1,son,0);
screen3= SDL_SetVideoMode( 1900,1260,32, SDL_SWSURFACE | SDL_RESIZABLE);
positionecran.x=0;
positionecran.y=0;
SDL_BlitSurface(image,NULL,screen3,&positionecran);
SDL_Flip(screen3);
positionecran2.x=550;
positionecran2.y=180;
SDL_BlitSurface(image2,NULL,screen3,&positionecran2);
SDL_Flip(screen3);
positionecran3.x=550;
positionecran3.y=280;
SDL_BlitSurface(image3,NULL,screen3,&positionecran3);
SDL_Flip(screen3);
positionecran4.x=550;
positionecran4.y=380;
SDL_BlitSurface(image4,NULL,screen3,&positionecran4);
SDL_Flip(screen3);
}
break;                      
}}
}}
}
return 0 ; 
}



