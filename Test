#include <pebble.h>

Window *window;
TextLayer *text_layer;
static TextLayer *title_text_layer;

void handle_init(void) {
	// Create a window and text layer
	
	
    // Get the bounds of the window for sizing the text layer
    

    // Create and Add to layer hierarchy:
	for(int i = 0; i < 50; i++)
	{
	window = window_create();	
	Layer *window_layer = window_get_root_layer(window);	
	GRect bounds = layer_get_bounds(window_layer);	
    title_text_layer = text_layer_create(GRect(i, i, bounds.size.w, i));
    text_layer_set_text(title_text_layer, "soulja boy tell em");
    layer_add_child(window_layer, text_layer_get_layer(title_text_layer));
	window_stack_push(window, true);	
	
	}
	window_destroy(window);
}

void handle_deinit(void) {
	// Destroy the text layer
	text_layer_destroy(text_layer);
	
	// Destroy the window
	window_destroy(window);
}

int main(void) {
	handle_init();
	app_event_loop();
	handle_deinit();
}
