#include <pebble.h>
	
Window *my_window;
TextLayer *text_layer;
GBitmap *gbit;

void handle_init(void) 
{
	  my_window = window_create();

	  text_layer = text_layer_create(GRect(0, 0, 144, 20));
	
	   //ResHandle rh = resource_get_handle(RESOURCE_ID_pika);
	   gbit = gbitmap_create_with_resource(1234);
}

void handle_deinit(void)
{
	  text_layer_destroy(text_layer);
	  window_destroy(my_window);
	   gbitmap_destroy(gbit);
}

int main(void)
{
	  handle_init();
	  app_event_loop();
	  handle_deinit();
}
