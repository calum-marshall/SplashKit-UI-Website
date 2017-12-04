#include "splashkit.h"
#include "window_user_input.h"

int main()
{
    open_window("Checkbox Example", 600, 230);
    load_font("Calibri", "calibri");

    input_font program_font = new_input_font("Calibri", 30, COLOR_BLACK);

    input_area checkbox_1_area = new_input_area(40, 90, 15, 15);
    input_area checkbox_2_area = new_input_area(40, 120, 15, 15);
    input_area checkbox_3_area = new_input_area(40, 150, 15, 15);
    input_area checkbox_4_area = new_input_area(40, 180, 15, 15);

    checkbox checkbox_1 = new_checkbox("checkbox_1", "Red", checkbox_1_area, program_font);
    checkbox checkbox_2 = new_checkbox("checkbox_2", "Blue", checkbox_2_area, program_font);
    checkbox checkbox_3 = new_checkbox("checkbox_3", "Green", checkbox_3_area, program_font);
    checkbox checkbox_4 = new_checkbox("checkbox_4", "Yellow", checkbox_4_area, program_font);

    while (!quit_requested())
    {
        process_events();
        clear_screen(COLOR_WHITE);
        if (checkbox_1.checked)
        {
            draw_text("Which colours do you like?", COLOR_RED, "Calibri", 45, 20, 20);
        }
        else
        {
            draw_text("Which colours do you like?", COLOR_BLACK, "Calibri", 45, 20, 20);
        }
        draw_checkbox(checkbox_1);
        update_checkbox(checkbox_1);
        draw_checkbox(checkbox_2);
        update_checkbox(checkbox_2);
        draw_checkbox(checkbox_3);
        update_checkbox(checkbox_3);
        draw_checkbox(checkbox_4);
        update_checkbox(checkbox_4);
        refresh_screen();
    }

    return 0;
}