#include "text.h"
#include "SDL3_ttf/SDL_ttf.h"
#include <stdexcept>

Text::Text(SDL_Renderer *renderer, TTF_Font *font)
    : m_renderer(renderer), m_font(font), m_texture(nullptr),
      m_color{255, 255, 255, 255}, m_width(0), m_height(0) {
  if (!m_renderer || !m_font) {
    throw std::runtime_error("Invalid renderer or font");
  }
}