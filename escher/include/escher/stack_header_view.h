#ifndef ESCHER_STACK_HEADER_VIEW_H
#define ESCHER_STACK_HEADER_VIEW_H

#include <escher/bordered.h>
#include <escher/view.h>

namespace Escher {

class ViewController;

class StackHeaderView : public View, public Bordered {
 public:
  StackHeaderView(ViewController *controller = nullptr,
                  KDColor textColor = KDColorBlack,
                  KDColor backgroundColor = KDColorBlack,
                  KDColor separatorColor = KDColorBlack);
  void drawRect(KDContext *ctx, KDRect rect) const override;

 protected:
#if ESCHER_VIEW_LOGGING
  const char *className() const override;
  void logAttributes(std::ostream &os) const override;
#endif
 private:
  constexpr static KDFont::Size k_font = KDFont::Size::Small;

  KDColor m_textColor;
  KDColor m_backgroundColor;
  KDColor m_separatorColor;
  ViewController *m_controller;
};

}  // namespace Escher
#endif
