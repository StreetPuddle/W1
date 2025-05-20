#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <stdlib.h>
#include <ctime>

//creates color based on randomly selected int values
//returns a mapping of int values to form color
ALLEGRO_COLOR makeColor();

//draws a randomly colored pixel on a portion of the screen
//@param color randomly generated color from makeColor() function
//@param SCREEN_W the screen's width, an int
//@param SCREEN_H the screen's height, an int
void draw_random_pixel(ALLEGRO_COLOR color, const int SCREEN_W, const int SCREEN_H);

//draws a randomly colored and sized hollow ellipse on a portion of the screen
void draw_random_ellipse(ALLEGRO_COLOR color, const int SCREEN_W, const int SCREEN_H);

//draws a randomly sized and color filled ellipse on a portion of the screen
void draw_random_filled_ellipse(ALLEGRO_COLOR color, const int SCREEN_W, const int SCREEN_H);

//draws a randomly colored and sized line on a portion of the screen
void draw_random_lines(ALLEGRO_COLOR color, const int SCREEN_W, const int SCREEN_H);

//draws a randomly colored and sized hollow rectangle on a portion of the screen
void draw_random_rectangles(ALLEGRO_COLOR color, const int SCREEN_W, const int SCREEN_H);

//draws a randomly sized and color filled rectangle on a portion of the screen
void draw_random_filled_rectangles(ALLEGRO_COLOR color, const int SCREEN_W, const int SCREEN_H);

//draws a randomly colored and sized hollow circle on a portion of the screen
void draw_random_circles(ALLEGRO_COLOR color, const int SCREEN_W, const int SCREEN_H);

//draws a randomly sized and color filled cicle on a portion of the screen
void draw_random_filled_circles(ALLEGRO_COLOR color, const int SCREEN_W, const int SCREEN_H);

//draws a randomly sized and color filled triangle on a portion of the screen
void draw_random_filled_triangles(ALLEGRO_COLOR color, const int SCREEN_W, const int SCREEN_H);

int main(int argc, char* argv[]) {
	int width = 800;
	int height = 600;
	srand(time(NULL));
	ALLEGRO_DISPLAY* display = NULL;

	if (!al_init()) {
		fprintf(stderr, "Failed to initialize allegro!\n");
		return -1;
	}

	display = al_create_display(width, height);
	if (!display) {
		fprintf(stderr, "Failed to create display!");
		return -1;
	}

	al_flip_display();
	al_rest(20.0);
	al_destroy_display(display);

	return 0;
}

ALLEGRO_COLOR makeColor() {
	int red = rand() % 255;
	int green = rand() % 255;
	int blue = rand() % 255;

	return (al_map_rgb(red, green, blue));
}

void draw_random_pixel(ALLEGRO_COLOR color, const int width, const int height) {

}
void draw_random_ellipse(ALLEGRO_COLOR color, const int width, const int height) {

}
void draw_random_filled_ellipse(ALLEGRO_COLOR color, const int width, const int height) {

}
void draw_random_lines(ALLEGRO_COLOR color, const int width, const int height) {

}
void draw_random_rectangles(ALLEGRO_COLOR color, const int width, const int height) {

}
void draw_random_filled_rectangles(ALLEGRO_COLOR color, const int width, const int height) {

}
void draw_random_circles(ALLEGRO_COLOR color, const int width, const int height) {

}
void draw_random_filled_circles(ALLEGRO_COLOR color, const int width, const int height) {

}
void draw_random_filled_triangles(ALLEGRO_COLOR color, const int width, const int height) {

}