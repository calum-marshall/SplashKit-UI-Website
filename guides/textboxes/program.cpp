#include "splashkit.h"
#include "window_user_input.h"

int main()
{
    open_window("Example Textbox Program", 400, 200);
    load_font("Calibri", "calibri");

    input_area textbox_area = new_input_area(20, 20, 300, 40);
    input_area textbox_area_2 = new_input_area(20, 80, 300, 40);
    input_font textbox_font = new_input_font("Calibri", 30, COLOR_BLACK);
    input_border textbox_border = new_input_border(COLOR_BLACK, 5, COLOR_CYAN);

    textbox_text textbox_attributes = new_textbox_text(2, "Enter a number", textbox_font, true, CENTER_ALIGNED);
    textbox number_textbox = new_textbox("number_textbox", textbox_area, textbox_attributes, textbox_border);

    textbox_text textbox_attributes_2 = new_textbox_text("Enter first name", textbox_font);
    textbox normal_textbox = new_textbox("normal_textbox", textbox_area_2, textbox_attributes_2, textbox_border);

    while (!quit_requested())
    {
    process_events();
    clear_screen(COLOR_WHITE);
    draw_textbox(number_textbox);
    draw_textbox(normal_textbox);
    update_textbox(number_textbox);
    update_textbox(normal_textbox);
    refresh_screen();
    }

    return 0;
}
