#!/usr/bin/awk -f

BEGIN {
    
    width = 80;   
    height = 24;  
    xmin = -3.14;
    xmax = 3.14;  
    ymin = -1;    
    ymax = 1;     

   
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++) {
            plot[i, j] = " ";
        }
    }

    # Dibujar los ejes
    x_axis = int((0 - xmin) / (xmax - xmin) * width);
    y_axis = int((0 - ymin) / (ymax - ymin) * height);

    for (i = 1; i <= width; i++) {
        plot[y_axis, i] = "-";
    }
    for (i = 1; i <= height; i++) {
        plot[i, x_axis] = "|";
    }
    plot[y_axis, x_axis] = "+";

   
    for (i = 1; i <= width; i++) {
        x = xmin + (i - 1) * (xmax - xmin) / (width - 1);
        y = sin(x);
        j = int((y - ymin) / (ymax - ymin) * height);
        if (j >= 1 && j <= height) {
            plot[j, i] = "*";
        }
    }

   
    for (i = 1; i <= height; i++) {
        for (j = 1; j <= width; j++) {
            printf "%s", plot[i, j];
        }
        printf "\n";
    }
}
