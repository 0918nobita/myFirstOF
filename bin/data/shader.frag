uniform vec2 u_resolution;
uniform vec2 u_mouse;

void main() {
    float y = u_resolution.y - gl_FragCoord.y;
    float d = distance(vec2(gl_FragCoord.x, y), u_mouse);
    vec2 st = gl_FragCoord.xy / u_resolution;

    float r = st.x;
    float g = st.y;

    if (d < 20.0) {
        float add = 1.0 - d / 20.0;
        r += add;
        g += add;
    }

    gl_FragColor = vec4(r, g, 1, 1);
}
