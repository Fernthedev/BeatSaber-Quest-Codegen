#pragma once
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__AspectRatioFitter_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
constexpr void UnityEngine::UI::__AspectRatioFitter__AspectMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__AspectRatioFitter__AspectMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__AspectRatioFitter__AspectMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode::__AspectRatioFitter__AspectMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode  UnityEngine::UI::__AspectRatioFitter__AspectMode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode  UnityEngine::UI::__AspectRatioFitter__AspectMode::WidthControlsHeight{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode  UnityEngine::UI::__AspectRatioFitter__AspectMode::HeightControlsWidth{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode  UnityEngine::UI::__AspectRatioFitter__AspectMode::FitInParent{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode  UnityEngine::UI::__AspectRatioFitter__AspectMode::EnvelopeParent{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_aspectMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__AspectRatioFitter__AspectMode (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::get_aspectMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d73238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "get_aspectMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.set_aspectMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)(::UnityEngine::UI::__AspectRatioFitter__AspectMode)>(&::UnityEngine::UI::AspectRatioFitter::set_aspectMode)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d73240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "set_aspectMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__AspectRatioFitter__AspectMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_aspectRatio
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::get_aspectRatio)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d732b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "get_aspectRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.set_aspectRatio
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)(float_t)>(&::UnityEngine::UI::AspectRatioFitter::set_aspectRatio)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d732c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "set_aspectRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.get_rectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::get_rectTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d73334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d733c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnEnable)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d733d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d73470;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d735b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnTransformParentChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d73a1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::Update)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d73ab4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.OnRectTransformDimensionsChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d73ac8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.UpdateRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::UpdateRect)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2d73acc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "UpdateRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.GetSizeDeltaToProduceSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::AspectRatioFitter::*)(float_t, int32_t)>(&::UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2d73ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "GetSizeDeltaToProduceSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.GetParentSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::GetParentSize)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2d73dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "GetParentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetLayoutHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d73fd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetLayoutVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d73fdc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.SetDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::SetDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d732b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.IsComponentValidOnObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2d734c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "IsComponentValidOnObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.IsAspectModeValid
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::IsAspectModeValid)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2d7358c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "IsAspectModeValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::AspectRatioFitter.DoesParentExists
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::AspectRatioFitter::*)()>(&::UnityEngine::UI::AspectRatioFitter::DoesParentExists)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d73fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "DoesParentExists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr  UnityEngine::UI::AspectRatioFitter::operator ::UnityEngine::UI::ILayoutSelfController*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutSelfController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr  UnityEngine::UI::AspectRatioFitter::operator ::UnityEngine::UI::ILayoutController*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_AspectMode(::UnityEngine::UI::__AspectRatioFitter__AspectMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__AspectRatioFitter__AspectMode, 0x18>(this, std::forward<::UnityEngine::UI::__AspectRatioFitter__AspectMode>(value));
}
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode& UnityEngine::UI::AspectRatioFitter::__get_m_AspectMode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__AspectRatioFitter__AspectMode, 0x18>(this);
}
constexpr ::UnityEngine::UI::__AspectRatioFitter__AspectMode const& UnityEngine::UI::AspectRatioFitter::__get_m_AspectMode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__AspectRatioFitter__AspectMode, 0x18>(this);
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_AspectRatio(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x1c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::AspectRatioFitter::__get_m_AspectRatio()  {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr float_t const& UnityEngine::UI::AspectRatioFitter::__get_m_AspectRatio() const {
return ::cordl_internals::getInstanceField<float_t, 0x1c>(this);
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_Rect(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x20>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* UnityEngine::UI::AspectRatioFitter::__get_m_Rect()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> UnityEngine::UI::AspectRatioFitter::__get_m_Rect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x20>(this);
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_DelayedSetDirty(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::AspectRatioFitter::__get_m_DelayedSetDirty()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& UnityEngine::UI::AspectRatioFitter::__get_m_DelayedSetDirty() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_DoesParentExist(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x29>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::AspectRatioFitter::__get_m_DoesParentExist()  {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr bool const& UnityEngine::UI::AspectRatioFitter::__get_m_DoesParentExist() const {
return ::cordl_internals::getInstanceField<bool, 0x29>(this);
}
constexpr void UnityEngine::UI::AspectRatioFitter::__set_m_Tracker(::UnityEngine::DrivenRectTransformTracker  value)  {
::cordl_internals::setInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x2a>(this, std::forward<::UnityEngine::DrivenRectTransformTracker>(value));
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::AspectRatioFitter::__get_m_Tracker()  {
return ::cordl_internals::getInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x2a>(this);
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::AspectRatioFitter::__get_m_Tracker() const {
return ::cordl_internals::getInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x2a>(this);
}
inline ::UnityEngine::UI::__AspectRatioFitter__AspectMode UnityEngine::UI::AspectRatioFitter::get_aspectMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "get_aspectMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__AspectRatioFitter__AspectMode, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::set_aspectMode(::UnityEngine::UI::__AspectRatioFitter__AspectMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "set_aspectMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__AspectRatioFitter__AspectMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::AspectRatioFitter::get_aspectRatio()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "get_aspectRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::set_aspectRatio(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "set_aspectRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::AspectRatioFitter::get_rectTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UI::AspectRatioFitter* UnityEngine::UI::AspectRatioFitter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::AspectRatioFitter*>());
}
inline void UnityEngine::UI::AspectRatioFitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnTransformParentChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "OnTransformParentChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::OnRectTransformDimensionsChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "OnRectTransformDimensionsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::UpdateRect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "UpdateRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::AspectRatioFitter::GetSizeDeltaToProduceSize(float_t  size, int32_t  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "GetSizeDeltaToProduceSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, size, axis);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::AspectRatioFitter::GetParentSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "GetParentSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::SetLayoutHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "SetLayoutHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::SetLayoutVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "SetLayoutVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::AspectRatioFitter::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::AspectRatioFitter::IsComponentValidOnObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "IsComponentValidOnObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::AspectRatioFitter::IsAspectModeValid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "IsAspectModeValid",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::AspectRatioFitter::DoesParentExists()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::AspectRatioFitter*>::get(),
                            "DoesParentExists",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
