#pragma once
#include "UnityEngine/UIElements/zzzz__VisualElementFlags_def.hpp"
constexpr void UnityEngine::UIElements::VisualElementFlags::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::VisualElementFlags::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::VisualElementFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::VisualElementFlags::VisualElementFlags(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::WorldTransformDirty{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::WorldTransformInverseDirty{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::WorldClipDirty{static_cast<int32_t>(0x4)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::BoundingBoxDirty{static_cast<int32_t>(0x8)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::WorldBoundingBoxDirty{static_cast<int32_t>(0x10)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::LayoutManual{static_cast<int32_t>(0x20)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::CompositeRoot{static_cast<int32_t>(0x40)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::RequireMeasureFunction{static_cast<int32_t>(0x80)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::EnableViewDataPersistence{static_cast<int32_t>(0x100)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::DisableClipping{static_cast<int32_t>(0x200)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::NeedsAttachToPanelEvent{static_cast<int32_t>(0x400)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::HierarchyDisplayed{static_cast<int32_t>(0x800)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::StyleInitialized{static_cast<int32_t>(0x1000)};
constexpr ::UnityEngine::UIElements::VisualElementFlags  UnityEngine::UIElements::VisualElementFlags::Init{static_cast<int32_t>(0x81f)};
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
