#pragma once
#include "HMUI/zzzz__Interactable_impl.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "GlobalNamespace/zzzz__Signal_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
constexpr void HMUI::__SelectableCell__TransitionType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& HMUI::__SelectableCell__TransitionType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& HMUI::__SelectableCell__TransitionType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__SelectableCell__TransitionType::__SelectableCell__TransitionType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::HMUI::__SelectableCell__TransitionType  HMUI::__SelectableCell__TransitionType::Instant{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__SelectableCell__TransitionType  HMUI::__SelectableCell__TransitionType::Animated{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::HMUI::SelectableCell.add_selectionDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*)>(&::HMUI::SelectableCell::add_selectionDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2145880;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "add_selectionDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.remove_selectionDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*)>(&::HMUI::SelectableCell::remove_selectionDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2145930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "remove_selectionDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.add_highlightDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*)>(&::HMUI::SelectableCell::add_highlightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x21459e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "add_highlightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.remove_highlightDidChangeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*)>(&::HMUI::SelectableCell::remove_highlightDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2145a90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "remove_highlightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.get_highlighted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::SelectableCell::*)()>(&::HMUI::SelectableCell::get_highlighted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2145b40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "get_highlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.set_highlighted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(bool)>(&::HMUI::SelectableCell::set_highlighted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2145b48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "set_highlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.get_selected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::SelectableCell::*)()>(&::HMUI::SelectableCell::get_selected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2145b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "get_selected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.set_selected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(bool)>(&::HMUI::SelectableCell::set_selected)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2145b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "set_selected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)()>(&::HMUI::SelectableCell::Start)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2145b68;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.SetSelected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(bool, ::HMUI::__SelectableCell__TransitionType, ::System::Object*, bool)>(&::HMUI::SelectableCell::SetSelected)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2145b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "SetSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.ClearHighlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::HMUI::SelectableCell::ClearHighlight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2145c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "ClearHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.SetHighlight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(bool, ::HMUI::__SelectableCell__TransitionType, bool)>(&::HMUI::SelectableCell::SetHighlight)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2145c28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "SetHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.InternalToggle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)()>(&::HMUI::SelectableCell::InternalToggle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.SelectionDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::HMUI::SelectableCell::SelectionDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2145ca0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.HighlightDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::HMUI::__SelectableCell__TransitionType)>(&::HMUI::SelectableCell::HighlightDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2145ca4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.OnPointerClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::SelectableCell::OnPointerClick)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2145ca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::HMUI::SelectableCell::OnSubmit)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2145d58;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.OnPointerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::SelectableCell::OnPointerEnter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2145df8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell.OnPointerExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::HMUI::SelectableCell::OnPointerExit)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2145e08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::SelectableCell._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::SelectableCell::*)()>(&::HMUI::SelectableCell::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2145e18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
constexpr  HMUI::SelectableCell::operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerClickHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  HMUI::SelectableCell::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr  HMUI::SelectableCell::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  HMUI::SelectableCell::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  HMUI::SelectableCell::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
constexpr void HMUI::SelectableCell::__set__wasPressedSignal(::GlobalNamespace::Signal*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::Signal*, 0x28>(this, std::forward<::GlobalNamespace::Signal*>(value));
}
constexpr ::GlobalNamespace::Signal* HMUI::SelectableCell::__get__wasPressedSignal()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Signal*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Signal*> HMUI::SelectableCell::__get__wasPressedSignal() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::Signal*, 0x28>(this);
}
constexpr void HMUI::SelectableCell::__set_selectionDidChangeEvent(::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*  value)  {
::cordl_internals::setInstanceField<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*, 0x30>(this, std::forward<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*>(value));
}
constexpr ::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>* HMUI::SelectableCell::__get_selectionDidChangeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*> HMUI::SelectableCell::__get_selectionDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*, 0x30>(this);
}
constexpr void HMUI::SelectableCell::__set_highlightDidChangeEvent(::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*  value)  {
::cordl_internals::setInstanceField<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*, 0x38>(this, std::forward<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*>(value));
}
constexpr ::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>* HMUI::SelectableCell::__get_highlightDidChangeEvent()  {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*> HMUI::SelectableCell::__get_highlightDidChangeEvent() const {
return ::cordl_internals::getInstanceField<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*, 0x38>(this);
}
constexpr void HMUI::SelectableCell::__set__highlighted_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::SelectableCell::__get__highlighted_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr bool const& HMUI::SelectableCell::__get__highlighted_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this);
}
constexpr void HMUI::SelectableCell::__set__selected_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x41>(this, std::forward<bool>(value));
}
constexpr bool& HMUI::SelectableCell::__get__selected_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
constexpr bool const& HMUI::SelectableCell::__get__selected_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x41>(this);
}
inline void HMUI::SelectableCell::add_selectionDidChangeEvent(::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "add_selectionDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::SelectableCell::remove_selectionDidChangeEvent(::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "remove_selectionDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType,::System::Object*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::SelectableCell::add_highlightDidChangeEvent(::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "add_highlightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::SelectableCell::remove_highlightDidChangeEvent(::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "remove_highlightDidChangeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::HMUI::SelectableCell*,::HMUI::__SelectableCell__TransitionType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HMUI::SelectableCell::get_highlighted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "get_highlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HMUI::SelectableCell::set_highlighted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "set_highlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool HMUI::SelectableCell::get_selected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "get_selected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void HMUI::SelectableCell::set_selected(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "set_selected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void HMUI::SelectableCell::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::SelectableCell::SetSelected(bool  value, ::HMUI::__SelectableCell__TransitionType  transitionType, ::System::Object*  changeOwner, bool  ignoreCurrentValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "SetSelected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, transitionType, changeOwner, ignoreCurrentValue);
}
inline void HMUI::SelectableCell::ClearHighlight(::HMUI::__SelectableCell__TransitionType  transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "ClearHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transitionType);
}
inline void HMUI::SelectableCell::SetHighlight(bool  value, ::HMUI::__SelectableCell__TransitionType  transitionType, bool  ignoreCurrentValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "SetHighlight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, transitionType, ignoreCurrentValue);
}
inline void HMUI::SelectableCell::InternalToggle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "InternalToggle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void HMUI::SelectableCell::SelectionDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "SelectionDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transitionType);
}
inline void HMUI::SelectableCell::HighlightDidChange(::HMUI::__SelectableCell__TransitionType  transitionType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "HighlightDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__SelectableCell__TransitionType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, transitionType);
}
inline void HMUI::SelectableCell::OnPointerClick(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "OnPointerClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void HMUI::SelectableCell::OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void HMUI::SelectableCell::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void HMUI::SelectableCell::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            "OnPointerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline ::HMUI::SelectableCell* HMUI::SelectableCell::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HMUI::SelectableCell*>());
}
inline void HMUI::SelectableCell::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::SelectableCell*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
