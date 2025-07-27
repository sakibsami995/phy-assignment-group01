int main() {
    double m, theta, d, lambda;
    
    get_input_and_calculate(&m, &theta, &d, &lambda);
    
    determine_and_print_color(lambda);
    
    return 0;
}