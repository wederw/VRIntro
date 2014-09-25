#pragma once

#include "IFrameSupplier.h"
#include "LeapListener.h"
#include "Leap.h"

class APIFrameSupplier : public virtual IFrameSupplier {
public:
  APIFrameSupplier();
  ~APIFrameSupplier();
  virtual void PopulateInteractionLayer(InteractionLayer& target, const Matrix4x4f& worldTransform) const override;
  virtual void PopulatePassthroughLayer(PassthroughLayer& target, int i) const override;
  virtual bool IsDragonfly() const override;

  virtual void Lock() override {}
  virtual void Unlock() override {}

private:
  LeapListener m_LeapListener;
  Leap::Controller m_LeapController;
};