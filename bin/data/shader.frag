uniform vec2 u_resolution;
uniform vec2 u_mouse;

void main() {
    float y = u_resolution.y - gl_FragCoord.y,
          d = distance(vec2(gl_FragCoord.x, y), u_mouse);
    vec2 n = gl_FragCoord.xy / u_resolution;

    float r = n.x,
          g = n.y;

    if (d < 20.0) {
        float add = 1.0 - d / 20.0;
        r += add;
        g += add;
    }

    gl_FragColor = vec4(r, g, 1, 1);
}
