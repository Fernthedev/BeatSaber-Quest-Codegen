#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UIElements/zzzz__PanelEventHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelEventHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ICancelHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanelComponent_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerMoveHandler_def.hpp"
#include "UnityEngine/UIElements/zzzz__BlurEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPointerEvent_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEventType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__PanelEventHandler__PointerEventType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEventType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType::__PanelEventHandler__PointerEventType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType  UnityEngine::UIElements::__PanelEventHandler__PointerEventType::Default{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType  UnityEngine::UIElements::__PanelEventHandler__PointerEventType::Down{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType  UnityEngine::UIElements::__PanelEventHandler__PointerEventType::Up{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_pointerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_pointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_pointerId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(int32_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pointerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_pointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_pointerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_pointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_pointerType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::StringW)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pointerType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_pointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_isPrimary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_isPrimary)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_isPrimary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_isPrimary
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(bool)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_isPrimary)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_isPrimary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_button
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_button
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(int32_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_pressedButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pressedButtons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_pressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_pressedButtons
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(int32_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pressedButtons)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_pressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94aa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_position
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_position)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_localPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94abc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_localPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_localPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_localPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94ac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_localPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_deltaPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_deltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_deltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_deltaPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector3)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_deltaPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_deltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_deltaTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94aec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_deltaTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_deltaTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94af4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_clickCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94afc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_clickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_clickCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(int32_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_clickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_clickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_pressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_pressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_tangentialPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_tangentialPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_tangentialPressure
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_tangentialPressure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_tangentialPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_altitudeAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_altitudeAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_altitudeAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_altitudeAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_altitudeAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_azimuthAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_azimuthAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_azimuthAngle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_azimuthAngle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_azimuthAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_twist
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_twist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_twist
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(float_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_twist)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_twist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_radius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_radius
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_radiusVariance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_radiusVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_radiusVariance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_radiusVariance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_radiusVariance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_radiusVariance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_modifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventModifiers (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.set_modifiers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::EventModifiers)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_modifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_shiftKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_shiftKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94b8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_shiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_ctrlKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_ctrlKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94b98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_ctrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_commandKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_commandKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_commandKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_altKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_altKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d94bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_altKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.get_actionKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_actionKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d94bbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_actionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.Read
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::UIElements::PanelEventHandler*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::Read)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x2d94500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PanelEventHandler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEventType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent.SetPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::SetPosition)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d94990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "SetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::*)()>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d94a40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent._Read_g__InRange_82_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int32_t, int32_t, int32_t)>(&::UnityEngine::UIElements::__PanelEventHandler__PointerEvent::_Read_g__InRange_82_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d94c00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "<Read>g__InRange|82_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::IPointerEvent"
constexpr  UnityEngine::UIElements::__PanelEventHandler__PointerEvent::operator ::UnityEngine::UIElements::IPointerEvent*() noexcept {
return static_cast<::UnityEngine::UIElements::IPointerEvent*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__pointerId_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__pointerId_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__pointerId_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__pointerType_k__BackingField(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__pointerType_k__BackingField()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__pointerType_k__BackingField() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__isPrimary_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__isPrimary_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__isPrimary_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__button_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x24>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__button_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr int32_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__button_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x24>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__pressedButtons_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x28>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__pressedButtons_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr int32_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__pressedButtons_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x28>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__position_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x2c>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__position_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__position_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x2c>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__localPosition_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x38>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__localPosition_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__localPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x38>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__deltaPosition_k__BackingField(::UnityEngine::Vector3  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x44>(this, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__deltaPosition_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x44>(this);
}
constexpr ::UnityEngine::Vector3 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__deltaPosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x44>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__deltaTime_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__deltaTime_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__deltaTime_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__clickCount_k__BackingField(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x54>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__clickCount_k__BackingField()  {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr int32_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__clickCount_k__BackingField() const {
return ::cordl_internals::getInstanceField<int32_t, 0x54>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__pressure_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__pressure_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__pressure_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__tangentialPressure_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__tangentialPressure_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__tangentialPressure_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__altitudeAngle_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x60>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__altitudeAngle_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__altitudeAngle_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x60>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__azimuthAngle_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__azimuthAngle_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__azimuthAngle_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__twist_k__BackingField(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x68>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__twist_k__BackingField()  {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr float_t const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__twist_k__BackingField() const {
return ::cordl_internals::getInstanceField<float_t, 0x68>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__radius_k__BackingField(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x6c>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__radius_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x6c>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__radius_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x6c>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__radiusVariance_k__BackingField(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x74>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__radiusVariance_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x74>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__radiusVariance_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x74>(this);
}
constexpr void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__set__modifiers_k__BackingField(::UnityEngine::EventModifiers  value)  {
::cordl_internals::setInstanceField<::UnityEngine::EventModifiers, 0x7c>(this, std::forward<::UnityEngine::EventModifiers>(value));
}
constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__modifiers_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::EventModifiers, 0x7c>(this);
}
constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::__PanelEventHandler__PointerEvent::__get__modifiers_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::EventModifiers, 0x7c>(this);
}
inline int32_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pointerId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_pointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pointerId(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_pointerId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::StringW UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pointerType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_pointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pointerType(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_pointerType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_isPrimary()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_isPrimary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_isPrimary(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_isPrimary",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_button()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_button(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_button",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pressedButtons()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_pressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pressedButtons(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_pressedButtons",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_position()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_position(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_position",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_localPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_localPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_localPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_localPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_deltaPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_deltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_deltaPosition(::UnityEngine::Vector3  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_deltaPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_deltaTime(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_clickCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_clickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_clickCount(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_clickCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_pressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_pressure(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_pressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_tangentialPressure()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_tangentialPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_tangentialPressure(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_tangentialPressure",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_altitudeAngle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_altitudeAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_altitudeAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_altitudeAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_azimuthAngle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_azimuthAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_azimuthAngle(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_azimuthAngle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_twist()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_twist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_twist(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_twist",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_radius()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_radius(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_radius",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_radiusVariance()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_radiusVariance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_radiusVariance(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_radiusVariance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::EventModifiers UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_modifiers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventModifiers, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::set_modifiers(::UnityEngine::EventModifiers  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "set_modifiers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_shiftKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_shiftKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_ctrlKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_ctrlKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_commandKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_commandKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_altKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_altKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::get_actionKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "get_actionKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::Read(::UnityEngine::UIElements::PanelEventHandler*  self, ::UnityEngine::EventSystems::PointerEventData*  eventData, ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType  eventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "Read",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::PanelEventHandler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEventType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, self, eventData, eventType);
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::SetPosition(::UnityEngine::Vector3  positionOverride, ::UnityEngine::Vector3  deltaOverride)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "SetPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, positionOverride, deltaOverride);
}
inline ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent* UnityEngine::UIElements::__PanelEventHandler__PointerEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>());
}
inline void UnityEngine::UIElements::__PanelEventHandler__PointerEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::__PanelEventHandler__PointerEvent::_Read_g__InRange_82_0(int32_t  i, int32_t  start, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(),
                            "<Read>g__InRange|82_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, i, start, count);
}
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IPanel* (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::get_panel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d92408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "get_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.set_panel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::PanelEventHandler::set_panel)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d92410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "set_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_selectableGameObject
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::get_selectableGameObject)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d92834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "get_selectableGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.get_eventSystem
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::EventSystem* (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::get_eventSystem)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2d9284c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "get_eventSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d92920;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d92928;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.RegisterCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::RegisterCallbacks)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d92674;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "RegisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.UnregisterCallbacks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::UnregisterCallbacks)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d924b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "UnregisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPanelDestroyed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::OnPanelDestroyed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d92930;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPanelDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnElementFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::FocusEvent*)>(&::UnityEngine::UIElements::PanelEventHandler::OnElementFocus)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2d92938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnElementFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnElementBlur
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::BlurEvent*)>(&::UnityEngine::UIElements::PanelEventHandler::OnElementBlur)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d92a20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnElementBlur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BlurEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnSelect)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2d92a24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnDeselect)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d92a9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnPointerMove)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2d92ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnPointerUp)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2d92e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnPointerDown)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x2d93020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnPointerExit)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x2d932a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnPointerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnPointerEnter)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2d9355c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnSubmit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnSubmit)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2d935b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnCancel
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnCancel)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x2d93768;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::AxisEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnMove)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2d93920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.OnScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::OnScroll)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d93aac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::UIElements::PanelEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2d92d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Event*)>(&::UnityEngine::UIElements::PanelEventHandler::SendEvent)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d93c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::Update)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2d93ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::LateUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d93ef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ProcessImguiEvents
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(bool)>(&::UnityEngine::UIElements::PanelEventHandler::ProcessImguiEvents)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2d93dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "ProcessImguiEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ProcessKeyboardEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::PanelEventHandler::ProcessKeyboardEvent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d93efc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "ProcessKeyboardEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ProcessTabEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::PanelEventHandler::ProcessTabEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d93f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "ProcessTabEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendTabEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*, int32_t)>(&::UnityEngine::UIElements::PanelEventHandler::SendTabEvent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2d94380;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendTabEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendKeyUpEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::PanelEventHandler::SendKeyUpEvent)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2d93ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendKeyUpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.SendKeyDownEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::PanelEventHandler::SendKeyDownEvent)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x2d941ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendKeyDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler.ReadPointerData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::PanelEventHandler::*)(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*, ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType)>(&::UnityEngine::UIElements::PanelEventHandler::ReadPointerData)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2d92c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "ReadPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEventType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::PanelEventHandler._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::PanelEventHandler::*)()>(&::UnityEngine::UIElements::PanelEventHandler::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2d949a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerMoveHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerMoveHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerMoveHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISubmitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ICancelHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::ICancelHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ICancelHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IMoveHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IMoveHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IScrollHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::ISelectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IDeselectHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UIElements::IRuntimePanelComponent"
constexpr  UnityEngine::UIElements::PanelEventHandler::operator ::UnityEngine::UIElements::IRuntimePanelComponent*() noexcept {
return static_cast<::UnityEngine::UIElements::IRuntimePanelComponent*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__set_m_Panel(::UnityEngine::UIElements::BaseRuntimePanel*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::BaseRuntimePanel*, 0x18>(this, std::forward<::UnityEngine::UIElements::BaseRuntimePanel*>(value));
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel* UnityEngine::UIElements::PanelEventHandler::__get_m_Panel()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseRuntimePanel*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> UnityEngine::UIElements::PanelEventHandler::__get_m_Panel() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseRuntimePanel*, 0x18>(this);
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__set_m_PointerEvent(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*, 0x20>(this, std::forward<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>(value));
}
constexpr ::UnityEngine::UIElements::__PanelEventHandler__PointerEvent* UnityEngine::UIElements::PanelEventHandler::__get_m_PointerEvent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*> UnityEngine::UIElements::PanelEventHandler::__get_m_PointerEvent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*, 0x20>(this);
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__set_m_Selecting(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::PanelEventHandler::__get_m_Selecting()  {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr bool const& UnityEngine::UIElements::PanelEventHandler::__get_m_Selecting() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this);
}
constexpr void UnityEngine::UIElements::PanelEventHandler::__set_m_Event(::UnityEngine::Event*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Event*, 0x30>(this, std::forward<::UnityEngine::Event*>(value));
}
constexpr ::UnityEngine::Event* UnityEngine::UIElements::PanelEventHandler::__get_m_Event()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Event*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> UnityEngine::UIElements::PanelEventHandler::__get_m_Event() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Event*, 0x30>(this);
}
inline void UnityEngine::UIElements::PanelEventHandler::setStaticF_s_Modifiers(::UnityEngine::EventModifiers  value)  {
::cordl_internals::setStaticField<::UnityEngine::EventModifiers, "s_Modifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get>(std::forward<::UnityEngine::EventModifiers>(value));
}
inline ::UnityEngine::EventModifiers UnityEngine::UIElements::PanelEventHandler::getStaticF_s_Modifiers()  {
return ::cordl_internals::getStaticField<::UnityEngine::EventModifiers, "s_Modifiers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get>();
}
inline ::UnityEngine::UIElements::IPanel* UnityEngine::UIElements::PanelEventHandler::get_panel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "get_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IPanel*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::set_panel(::UnityEngine::UIElements::IPanel*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "set_panel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::GameObject* UnityEngine::UIElements::PanelEventHandler::get_selectableGameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "get_selectableGameObject",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(*this, ___internal_method);
}
inline ::UnityEngine::EventSystems::EventSystem* UnityEngine::UIElements::PanelEventHandler::get_eventSystem()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "get_eventSystem",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::EventSystem*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::RegisterCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "RegisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::UnregisterCallbacks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "UnregisterCallbacks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPanelDestroyed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPanelDestroyed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnElementFocus(::UnityEngine::UIElements::FocusEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnElementFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnElementBlur(::UnityEngine::UIElements::BlurEvent*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnElementBlur",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BlurEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnSelect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnDeselect(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerMove(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerUp(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnSubmit(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnSubmit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnCancel(::UnityEngine::EventSystems::BaseEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnCancel",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnMove(::UnityEngine::EventSystems::AxisEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::AxisEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::OnScroll(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendEvent(::UnityEngine::UIElements::EventBase*  e, ::UnityEngine::EventSystems::BaseEventData*  sourceEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e, sourceEventData);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendEvent(::UnityEngine::UIElements::EventBase*  e, ::UnityEngine::Event*  sourceEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e, sourceEvent);
}
inline void UnityEngine::UIElements::PanelEventHandler::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::PanelEventHandler::ProcessImguiEvents(bool  isSelected)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "ProcessImguiEvents",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, isSelected);
}
inline void UnityEngine::UIElements::PanelEventHandler::ProcessKeyboardEvent(::UnityEngine::Event*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "ProcessKeyboardEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::ProcessTabEvent(::UnityEngine::Event*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "ProcessTabEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendTabEvent(::UnityEngine::Event*  e, int32_t  direction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendTabEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e, direction);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendKeyUpEvent(::UnityEngine::Event*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendKeyUpEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
inline void UnityEngine::UIElements::PanelEventHandler::SendKeyDownEvent(::UnityEngine::Event*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "SendKeyDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, e);
}
/// @param eventType: ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType (default: static_cast<int32_t>(0x0))
inline bool UnityEngine::UIElements::PanelEventHandler::ReadPointerData(::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*  pe, ::UnityEngine::EventSystems::PointerEventData*  eventData, ::UnityEngine::UIElements::__PanelEventHandler__PointerEventType  eventType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            "ReadPointerData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEvent*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__PanelEventHandler__PointerEventType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, pe, eventData, eventType);
}
inline ::UnityEngine::UIElements::PanelEventHandler* UnityEngine::UIElements::PanelEventHandler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::PanelEventHandler*>());
}
inline void UnityEngine::UIElements::PanelEventHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::PanelEventHandler*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
