#pragma once
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
constexpr void UnityEngine::UI::__ContentSizeFitter__FitMode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__ContentSizeFitter__FitMode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__ContentSizeFitter__FitMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode::__ContentSizeFitter__FitMode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode  UnityEngine::UI::__ContentSizeFitter__FitMode::Unconstrained{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode  UnityEngine::UI::__ContentSizeFitter__FitMode::MinSize{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode  UnityEngine::UI::__ContentSizeFitter__FitMode::PreferredSize{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_horizontalFit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__ContentSizeFitter__FitMode (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::get_horizontalFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "get_horizontalFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.set_horizontalFit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(::UnityEngine::UI::__ContentSizeFitter__FitMode)>(&::UnityEngine::UI::ContentSizeFitter::set_horizontalFit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d74728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "set_horizontalFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ContentSizeFitter__FitMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_verticalFit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__ContentSizeFitter__FitMode (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::get_verticalFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "get_verticalFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.set_verticalFit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(::UnityEngine::UI::__ContentSizeFitter__FitMode)>(&::UnityEngine::UI::ContentSizeFitter::set_verticalFit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d74828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "set_verticalFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ContentSizeFitter__FitMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_rectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::get_rectTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d7489c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d74938;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d74954;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnRectTransformDimensionsChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d749d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.HandleSelfFittingAlongAxis
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(int32_t)>(&::UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2d749d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "HandleSelfFittingAlongAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetLayoutHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d74ad0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetLayoutVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74af4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetDirty)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d7479c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr  UnityEngine::UI::ContentSizeFitter::operator ::UnityEngine::UI::ILayoutSelfController*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutSelfController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr  UnityEngine::UI::ContentSizeFitter::operator ::UnityEngine::UI::ILayoutController*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UI::ContentSizeFitter::__set_m_HorizontalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__ContentSizeFitter__FitMode, 0x18>(this, std::forward<::UnityEngine::UI::__ContentSizeFitter__FitMode>(value));
}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode& UnityEngine::UI::ContentSizeFitter::__get_m_HorizontalFit()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ContentSizeFitter__FitMode, 0x18>(this);
}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode const& UnityEngine::UI::ContentSizeFitter::__get_m_HorizontalFit() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ContentSizeFitter__FitMode, 0x18>(this);
}
constexpr void UnityEngine::UI::ContentSizeFitter::__set_m_VerticalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__ContentSizeFitter__FitMode, 0x1c>(this, std::forward<::UnityEngine::UI::__ContentSizeFitter__FitMode>(value));
}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode& UnityEngine::UI::ContentSizeFitter::__get_m_VerticalFit()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ContentSizeFitter__FitMode, 0x1c>(this);
}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode const& UnityEngine::UI::ContentSizeFitter::__get_m_VerticalFit() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ContentSizeFitter__FitMode, 0x1c>(this);
}
constexpr void UnityEngine::UI::ContentSizeFitter::__set_m_Rect(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x20>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* UnityEngine::UI::ContentSizeFitter::__get_m_Rect()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> UnityEngine::UI::ContentSizeFitter::__get_m_Rect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x20>(this);
}
constexpr void UnityEngine::UI::ContentSizeFitter::__set_m_Tracker(::UnityEngine::DrivenRectTransformTracker  value)  {
::cordl_internals::setInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x28>(this, std::forward<::UnityEngine::DrivenRectTransformTracker>(value));
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::ContentSizeFitter::__get_m_Tracker()  {
return ::cordl_internals::getInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x28>(this);
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::ContentSizeFitter::__get_m_Tracker() const {
return ::cordl_internals::getInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x28>(this);
}
inline ::UnityEngine::UI::__ContentSizeFitter__FitMode UnityEngine::UI::ContentSizeFitter::get_horizontalFit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "get_horizontalFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__ContentSizeFitter__FitMode, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::set_horizontalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "set_horizontalFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ContentSizeFitter__FitMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__ContentSizeFitter__FitMode UnityEngine::UI::ContentSizeFitter::get_verticalFit()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "get_verticalFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__ContentSizeFitter__FitMode, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::set_verticalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "set_verticalFit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ContentSizeFitter__FitMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::ContentSizeFitter::get_rectTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UI::ContentSizeFitter* UnityEngine::UI::ContentSizeFitter::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::ContentSizeFitter*>());
}
inline void UnityEngine::UI::ContentSizeFitter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "OnRectTransformDimensionsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis(int32_t  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "HandleSelfFittingAlongAxis",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, axis);
}
inline void UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "SetLayoutHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::SetLayoutVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "SetLayoutVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
