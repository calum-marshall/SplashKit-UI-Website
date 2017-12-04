#include "splashkit.h"
#include "window_user_input.h"
#include <vector>

int main()
{
    open_window("Radio Buttons Example", 600, 200);
    load_font("Calibri", "calibri");

    input_font program_font = new_input_font("Calibri", 30, COLOR_BLACK);

    input_circle_area radio_1_area = new_input_circle_area(40, 80, 8);
    input_circle_area radio_2_area = new_input_circle_area(40, 110, 8);
    input_circle_area radio_3_area = new_input_circle_area(40, 140, 8);
    input_circle_area radio_4_area = new_input_circle_area(40, 170, 8);

    vector<radio> radio_buttons_to_add;

    radio radio_1 = new_radio("radio_1", "AFL", radio_1_area, program_font);
    radio_buttons_to_add.push_back(radio_1);
    radio radio_2 = new_radio("radio_2", "Cricket", radio_2_area, program_font);
    radio_buttons_to_add.push_back(radio_2);
    radio radio_3 = new_radio("radio_3", "Soccer", radio_3_area, program_font);
    radio_buttons_to_add.push_back(radio_3);
    radio radio_4 = new_radio("radio_4", "Tennis", radio_4_area, program_font);
    radio_buttons_to_add.push_back(radio_4);

    radio_group radio_group_1 = new_radio_group("radio_group_1", radio_buttons_to_add);

    while (!quit_requested())
    {
        process_events();
        clear_screen(COLOR_WHITE);
        draw_text("Which is your most favourite sport?", COLOR_BLACK, "Calibri", 35, 20, 20);
        draw_radio_group(radio_group_1);
        update_radio_group(radio_group_1);
        refresh_screen();
    }

    return 0;
}