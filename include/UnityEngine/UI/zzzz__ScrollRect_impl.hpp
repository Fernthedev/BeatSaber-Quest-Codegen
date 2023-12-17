#pragma once
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDragHandler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/UI/zzzz__ScrollRect_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IBeginDragHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IInitializePotentialDragHandler_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutGroup_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IScrollHandler_def.hpp"
#include "UnityEngine/UI/zzzz__Scrollbar_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__CanvasUpdate_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEndDragHandler_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
constexpr void UnityEngine::UI::__ScrollRect__MovementType::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__ScrollRect__MovementType::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__ScrollRect__MovementType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__ScrollRect__MovementType::__ScrollRect__MovementType(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__ScrollRect__MovementType  UnityEngine::UI::__ScrollRect__MovementType::Unrestricted{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__ScrollRect__MovementType  UnityEngine::UI::__ScrollRect__MovementType::Elastic{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::__ScrollRect__MovementType  UnityEngine::UI::__ScrollRect__MovementType::Clamped{static_cast<int32_t>(0x2)};
constexpr void UnityEngine::UI::__ScrollRect__ScrollbarVisibility::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__ScrollRect__ScrollbarVisibility::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__ScrollRect__ScrollbarVisibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility::__ScrollRect__ScrollbarVisibility(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility  UnityEngine::UI::__ScrollRect__ScrollbarVisibility::Permanent{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility  UnityEngine::UI::__ScrollRect__ScrollbarVisibility::AutoHide{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility  UnityEngine::UI::__ScrollRect__ScrollbarVisibility::AutoHideAndExpandViewport{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::UI::__ScrollRect__ScrollRectEvent._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::__ScrollRect__ScrollRectEvent::*)()>(&::UnityEngine::UI::__ScrollRect__ScrollRectEvent::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d83540;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
inline ::UnityEngine::UI::__ScrollRect__ScrollRectEvent* UnityEngine::UI::__ScrollRect__ScrollRectEvent::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*>());
}
inline void UnityEngine::UI::__ScrollRect__ScrollRectEvent::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_content
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82d88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_content
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::RectTransform*)>(&::UnityEngine::UI::ScrollRect::set_content)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_horizontal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82d98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(bool)>(&::UnityEngine::UI::ScrollRect::set_horizontal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d82da0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_vertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_vertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_vertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_vertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(bool)>(&::UnityEngine::UI::ScrollRect::set_vertical)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d82db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_vertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_movementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__ScrollRect__MovementType (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_movementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82dc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_movementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_movementType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::__ScrollRect__MovementType)>(&::UnityEngine::UI::ScrollRect::set_movementType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82dc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_movementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__MovementType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_elasticity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_elasticity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_elasticity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_elasticity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_elasticity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82dd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_elasticity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_inertia
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_inertia)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82de0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_inertia",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_inertia
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(bool)>(&::UnityEngine::UI::ScrollRect::set_inertia)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d82de8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_inertia",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_decelerationRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_decelerationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_decelerationRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_decelerationRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_decelerationRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82dfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_decelerationRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_scrollSensitivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_scrollSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82e04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_scrollSensitivity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_scrollSensitivity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82e0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_viewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_viewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_viewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_viewport
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::RectTransform*)>(&::UnityEngine::UI::ScrollRect::set_viewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_viewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontalScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Scrollbar* (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_horizontalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d82ed8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontalScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::Scrollbar*)>(&::UnityEngine::UI::ScrollRect::set_horizontalScrollbar)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2d82ee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_verticalScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Scrollbar* (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_verticalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d83054;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_verticalScrollbar
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::Scrollbar*)>(&::UnityEngine::UI::ScrollRect::set_verticalScrollbar)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2d8305c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontalScrollbarVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_horizontalScrollbarVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d831d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontalScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontalScrollbarVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility)>(&::UnityEngine::UI::ScrollRect::set_horizontalScrollbarVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d831d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontalScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_verticalScrollbarVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_verticalScrollbarVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d831e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_verticalScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_verticalScrollbarVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility)>(&::UnityEngine::UI::ScrollRect::set_verticalScrollbarVisibility)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d831e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_verticalScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontalScrollbarSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_horizontalScrollbarSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d831f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontalScrollbarSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontalScrollbarSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_horizontalScrollbarSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d831f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontalScrollbarSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_verticalScrollbarSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_verticalScrollbarSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d83288;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_verticalScrollbarSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_verticalScrollbarSpacing
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_verticalScrollbarSpacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d83290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_verticalScrollbarSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__ScrollRect__ScrollRectEvent* (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d83298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_onValueChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::__ScrollRect__ScrollRectEvent*)>(&::UnityEngine::UI::ScrollRect::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d832a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_viewRect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_viewRect)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2d832a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_viewRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_velocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d83398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_velocity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::set_velocity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d833a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_rectTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_rectTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d833a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::_ctor)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2d8343c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.Rebuild
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::UI::CanvasUpdate)>(&::UnityEngine::UI::ScrollRect::Rebuild)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d83588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.LayoutComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::LayoutComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d840f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.GraphicUpdateComplete
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::GraphicUpdateComplete)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d840f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateCachedData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdateCachedData)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x2d83610;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateCachedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::OnEnable)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2d840f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::OnDisable)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2d842a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.IsActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::IsActive)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2d844d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.EnsureLayoutHasRebuilt
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::EnsureLayoutHasRebuilt)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d84554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "EnsureLayoutHasRebuilt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.StopMovement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::StopMovement)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2d845c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnScroll
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::ScrollRect::OnScroll)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2d84618;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnInitializePotentialDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::ScrollRect::OnInitializePotentialDrag)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d847c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnBeginDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::ScrollRect::OnBeginDrag)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2d84820;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnEndDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::ScrollRect::OnEndDrag)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d84948;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::UI::ScrollRect::OnDrag)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x2d84968;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetContentAnchoredPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::SetContentAnchoredPosition)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d84bc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.LateUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::LateUpdate)> {
  constexpr static std::size_t size = 0x594;
  constexpr static std::size_t addrs = 0x2d84c78;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdatePrevData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdatePrevData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d84014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdatePrevData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateScrollbars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::UpdateScrollbars)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x2d83e3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateScrollbars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_normalizedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_normalizedPosition)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d8520c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_normalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_normalizedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::set_normalizedPosition)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2d85534;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_normalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_horizontalNormalizedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_horizontalNormalizedPosition)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2d8527c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_horizontalNormalizedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_horizontalNormalizedPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d8557c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_verticalNormalizedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_verticalNormalizedPosition)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2d853d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_verticalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.set_verticalNormalizedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::set_verticalNormalizedPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d85590;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_verticalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetHorizontalNormalizedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::SetHorizontalNormalizedPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d855a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetHorizontalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetVerticalNormalizedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t)>(&::UnityEngine::UI::ScrollRect::SetVerticalNormalizedPosition)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d855b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetVerticalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetNormalizedPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)(float_t, int32_t)>(&::UnityEngine::UI::ScrollRect::SetNormalizedPosition)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x2d855cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.RubberDelta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::UI::ScrollRect::RubberDelta)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d84b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "RubberDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.OnRectTransformDimensionsChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d858c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_hScrollingNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_hScrollingNeeded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d858c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_hScrollingNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_vScrollingNeeded
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_vScrollingNeeded)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d85924;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_vScrollingNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.CalculateLayoutInputHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d85980;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.CalculateLayoutInputVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d85984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_minWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d85988;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_preferredWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_preferredWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d85990;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_flexibleWidth
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d85998;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_minHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d859a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_preferredHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_preferredHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d859a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_flexibleHeight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d859b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.get_layoutPriority
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d859b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  58
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetLayoutHorizontal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x2d859c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetLayoutVertical
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::SetLayoutVertical)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2d86014;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateScrollbarVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdateScrollbarVisibility)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2d8523c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateOneScrollbarVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool, bool, ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, ::UnityEngine::UI::Scrollbar*)>(&::UnityEngine::UI::ScrollRect::UpdateOneScrollbarVisibility)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2d86344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateOneScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateScrollbarLayout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdateScrollbarLayout)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2d860f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateScrollbarLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UpdateBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UpdateBounds)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x2d83988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.AdjustBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Bounds>, ByRef<::UnityEngine::Vector2>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(&::UnityEngine::UI::ScrollRect::AdjustBounds)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2d86438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "AdjustBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.GetBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::GetBounds)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2d85f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "GetBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.InternalGetBounds
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Bounds (*)(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, ByRef<::UnityEngine::Matrix4x4>)>(&::UnityEngine::UI::ScrollRect::InternalGetBounds)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2d864e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "InternalGetBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.CalculateOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::ScrollRect::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::ScrollRect::CalculateOffset)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d84790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "CalculateOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.InternalCalculateOffset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(ByRef<::UnityEngine::Bounds>, ByRef<::UnityEngine::Bounds>, bool, bool, ::UnityEngine::UI::__ScrollRect__MovementType, ByRef<::UnityEngine::Vector2>)>(&::UnityEngine::UI::ScrollRect::InternalCalculateOffset)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2d8663c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "InternalCalculateOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__MovementType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::SetDirty)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2d83200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.SetDirtyCaching
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::SetDirtyCaching)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d82e24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetDirtyCaching",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ScrollRect.UnityEngine_UI_ICanvasElement_get_transform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (::UnityEngine::UI::ScrollRect::*)()>(&::UnityEngine::UI::ScrollRect::UnityEngine_UI_ICanvasElement_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d867c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::EventSystems::IInitializePotentialDragHandler"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEventSystemHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IBeginDragHandler"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IBeginDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IEndDragHandler"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IEndDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IEndDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IDragHandler"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IDragHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IDragHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::EventSystems::IScrollHandler"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::EventSystems::IScrollHandler*() noexcept {
return static_cast<::UnityEngine::EventSystems::IScrollHandler*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::UI::ICanvasElement*() noexcept {
return static_cast<::UnityEngine::UI::ICanvasElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::UI::ILayoutElement*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutGroup"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::UI::ILayoutGroup*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutGroup*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr  UnityEngine::UI::ScrollRect::operator ::UnityEngine::UI::ILayoutController*() noexcept {
return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Content(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x18>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::__get_m_Content()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> UnityEngine::UI::ScrollRect::__get_m_Content() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x18>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Horizontal(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x20>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::ScrollRect::__get_m_Horizontal()  {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr bool const& UnityEngine::UI::ScrollRect::__get_m_Horizontal() const {
return ::cordl_internals::getInstanceField<bool, 0x20>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Vertical(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x21>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::ScrollRect::__get_m_Vertical()  {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr bool const& UnityEngine::UI::ScrollRect::__get_m_Vertical() const {
return ::cordl_internals::getInstanceField<bool, 0x21>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_MovementType(::UnityEngine::UI::__ScrollRect__MovementType  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__ScrollRect__MovementType, 0x24>(this, std::forward<::UnityEngine::UI::__ScrollRect__MovementType>(value));
}
constexpr ::UnityEngine::UI::__ScrollRect__MovementType& UnityEngine::UI::ScrollRect::__get_m_MovementType()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ScrollRect__MovementType, 0x24>(this);
}
constexpr ::UnityEngine::UI::__ScrollRect__MovementType const& UnityEngine::UI::ScrollRect::__get_m_MovementType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ScrollRect__MovementType, 0x24>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Elasticity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::ScrollRect::__get_m_Elasticity()  {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__get_m_Elasticity() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Inertia(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x2c>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::ScrollRect::__get_m_Inertia()  {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr bool const& UnityEngine::UI::ScrollRect::__get_m_Inertia() const {
return ::cordl_internals::getInstanceField<bool, 0x2c>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_DecelerationRate(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::ScrollRect::__get_m_DecelerationRate()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__get_m_DecelerationRate() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_ScrollSensitivity(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::ScrollRect::__get_m_ScrollSensitivity()  {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__get_m_ScrollSensitivity() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Viewport(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x38>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::__get_m_Viewport()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> UnityEngine::UI::ScrollRect::__get_m_Viewport() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x38>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_HorizontalScrollbar(::UnityEngine::UI::Scrollbar*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Scrollbar*, 0x40>(this, std::forward<::UnityEngine::UI::Scrollbar*>(value));
}
constexpr ::UnityEngine::UI::Scrollbar* UnityEngine::UI::ScrollRect::__get_m_HorizontalScrollbar()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Scrollbar*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Scrollbar*> UnityEngine::UI::ScrollRect::__get_m_HorizontalScrollbar() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Scrollbar*, 0x40>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_VerticalScrollbar(::UnityEngine::UI::Scrollbar*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Scrollbar*, 0x48>(this, std::forward<::UnityEngine::UI::Scrollbar*>(value));
}
constexpr ::UnityEngine::UI::Scrollbar* UnityEngine::UI::ScrollRect::__get_m_VerticalScrollbar()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Scrollbar*, 0x48>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Scrollbar*> UnityEngine::UI::ScrollRect::__get_m_VerticalScrollbar() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Scrollbar*, 0x48>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_HorizontalScrollbarVisibility(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, 0x50>(this, std::forward<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility>(value));
}
constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility& UnityEngine::UI::ScrollRect::__get_m_HorizontalScrollbarVisibility()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, 0x50>(this);
}
constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility const& UnityEngine::UI::ScrollRect::__get_m_HorizontalScrollbarVisibility() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, 0x50>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_VerticalScrollbarVisibility(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, 0x54>(this, std::forward<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility>(value));
}
constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility& UnityEngine::UI::ScrollRect::__get_m_VerticalScrollbarVisibility()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, 0x54>(this);
}
constexpr ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility const& UnityEngine::UI::ScrollRect::__get_m_VerticalScrollbarVisibility() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, 0x54>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_HorizontalScrollbarSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::ScrollRect::__get_m_HorizontalScrollbarSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__get_m_HorizontalScrollbarSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_VerticalScrollbarSpacing(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x5c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::ScrollRect::__get_m_VerticalScrollbarSpacing()  {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__get_m_VerticalScrollbarSpacing() const {
return ::cordl_internals::getInstanceField<float_t, 0x5c>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_OnValueChanged(::UnityEngine::UI::__ScrollRect__ScrollRectEvent*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*, 0x60>(this, std::forward<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*>(value));
}
constexpr ::UnityEngine::UI::__ScrollRect__ScrollRectEvent* UnityEngine::UI::ScrollRect::__get_m_OnValueChanged()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*, 0x60>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*> UnityEngine::UI::ScrollRect::__get_m_OnValueChanged() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*, 0x60>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_PointerStartLocalCursor(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x68>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::ScrollRect::__get_m_PointerStartLocalCursor()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x68>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::ScrollRect::__get_m_PointerStartLocalCursor() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x68>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_ContentStartPosition(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x70>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::ScrollRect::__get_m_ContentStartPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x70>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::ScrollRect::__get_m_ContentStartPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x70>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_ViewRect(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x78>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::__get_m_ViewRect()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x78>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> UnityEngine::UI::ScrollRect::__get_m_ViewRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x78>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_ContentBounds(::UnityEngine::Bounds  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Bounds, 0x80>(this, std::forward<::UnityEngine::Bounds>(value));
}
constexpr ::UnityEngine::Bounds& UnityEngine::UI::ScrollRect::__get_m_ContentBounds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0x80>(this);
}
constexpr ::UnityEngine::Bounds const& UnityEngine::UI::ScrollRect::__get_m_ContentBounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0x80>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_ViewBounds(::UnityEngine::Bounds  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Bounds, 0x98>(this, std::forward<::UnityEngine::Bounds>(value));
}
constexpr ::UnityEngine::Bounds& UnityEngine::UI::ScrollRect::__get_m_ViewBounds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0x98>(this);
}
constexpr ::UnityEngine::Bounds const& UnityEngine::UI::ScrollRect::__get_m_ViewBounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0x98>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Velocity(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0xb0>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::ScrollRect::__get_m_Velocity()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xb0>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::ScrollRect::__get_m_Velocity() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xb0>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Dragging(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb8>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::ScrollRect::__get_m_Dragging()  {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this);
}
constexpr bool const& UnityEngine::UI::ScrollRect::__get_m_Dragging() const {
return ::cordl_internals::getInstanceField<bool, 0xb8>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Scrolling(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xb9>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::ScrollRect::__get_m_Scrolling()  {
return ::cordl_internals::getInstanceField<bool, 0xb9>(this);
}
constexpr bool const& UnityEngine::UI::ScrollRect::__get_m_Scrolling() const {
return ::cordl_internals::getInstanceField<bool, 0xb9>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_PrevPosition(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0xbc>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UI::ScrollRect::__get_m_PrevPosition()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xbc>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UI::ScrollRect::__get_m_PrevPosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0xbc>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_PrevContentBounds(::UnityEngine::Bounds  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Bounds, 0xc4>(this, std::forward<::UnityEngine::Bounds>(value));
}
constexpr ::UnityEngine::Bounds& UnityEngine::UI::ScrollRect::__get_m_PrevContentBounds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0xc4>(this);
}
constexpr ::UnityEngine::Bounds const& UnityEngine::UI::ScrollRect::__get_m_PrevContentBounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0xc4>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_PrevViewBounds(::UnityEngine::Bounds  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Bounds, 0xdc>(this, std::forward<::UnityEngine::Bounds>(value));
}
constexpr ::UnityEngine::Bounds& UnityEngine::UI::ScrollRect::__get_m_PrevViewBounds()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0xdc>(this);
}
constexpr ::UnityEngine::Bounds const& UnityEngine::UI::ScrollRect::__get_m_PrevViewBounds() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Bounds, 0xdc>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_HasRebuiltLayout(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf4>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::ScrollRect::__get_m_HasRebuiltLayout()  {
return ::cordl_internals::getInstanceField<bool, 0xf4>(this);
}
constexpr bool const& UnityEngine::UI::ScrollRect::__get_m_HasRebuiltLayout() const {
return ::cordl_internals::getInstanceField<bool, 0xf4>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_HSliderExpand(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf5>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::ScrollRect::__get_m_HSliderExpand()  {
return ::cordl_internals::getInstanceField<bool, 0xf5>(this);
}
constexpr bool const& UnityEngine::UI::ScrollRect::__get_m_HSliderExpand() const {
return ::cordl_internals::getInstanceField<bool, 0xf5>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_VSliderExpand(bool  value)  {
::cordl_internals::setInstanceField<bool, 0xf6>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::ScrollRect::__get_m_VSliderExpand()  {
return ::cordl_internals::getInstanceField<bool, 0xf6>(this);
}
constexpr bool const& UnityEngine::UI::ScrollRect::__get_m_VSliderExpand() const {
return ::cordl_internals::getInstanceField<bool, 0xf6>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_HSliderHeight(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xf8>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::ScrollRect::__get_m_HSliderHeight()  {
return ::cordl_internals::getInstanceField<float_t, 0xf8>(this);
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__get_m_HSliderHeight() const {
return ::cordl_internals::getInstanceField<float_t, 0xf8>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_VSliderWidth(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0xfc>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UI::ScrollRect::__get_m_VSliderWidth()  {
return ::cordl_internals::getInstanceField<float_t, 0xfc>(this);
}
constexpr float_t const& UnityEngine::UI::ScrollRect::__get_m_VSliderWidth() const {
return ::cordl_internals::getInstanceField<float_t, 0xfc>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Rect(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x100>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::__get_m_Rect()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x100>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> UnityEngine::UI::ScrollRect::__get_m_Rect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x100>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_HorizontalScrollbarRect(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x108>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::__get_m_HorizontalScrollbarRect()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x108>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> UnityEngine::UI::ScrollRect::__get_m_HorizontalScrollbarRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x108>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_VerticalScrollbarRect(::UnityEngine::RectTransform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::RectTransform*, 0x110>(this, std::forward<::UnityEngine::RectTransform*>(value));
}
constexpr ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::__get_m_VerticalScrollbarRect()  {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> UnityEngine::UI::ScrollRect::__get_m_VerticalScrollbarRect() const {
return ::cordl_internals::getInstanceField<::UnityEngine::RectTransform*, 0x110>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Tracker(::UnityEngine::DrivenRectTransformTracker  value)  {
::cordl_internals::setInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x118>(this, std::forward<::UnityEngine::DrivenRectTransformTracker>(value));
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::ScrollRect::__get_m_Tracker()  {
return ::cordl_internals::getInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x118>(this);
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::ScrollRect::__get_m_Tracker() const {
return ::cordl_internals::getInstanceField<::UnityEngine::DrivenRectTransformTracker, 0x118>(this);
}
constexpr void UnityEngine::UI::ScrollRect::__set_m_Corners(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x120>(this, std::forward<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>& UnityEngine::UI::ScrollRect::__get_m_Corners()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x120>(this);
}
constexpr ::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*> const& UnityEngine::UI::ScrollRect::__get_m_Corners() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>, 0x120>(this);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::get_content()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_content(::UnityEngine::RectTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_content",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::ScrollRect::get_horizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontal(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::ScrollRect::get_vertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_vertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_vertical(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_vertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__ScrollRect__MovementType UnityEngine::UI::ScrollRect::get_movementType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_movementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__ScrollRect__MovementType, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_movementType(::UnityEngine::UI::__ScrollRect__MovementType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_movementType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__MovementType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_elasticity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_elasticity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_elasticity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_elasticity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::ScrollRect::get_inertia()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_inertia",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_inertia(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_inertia",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_decelerationRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_decelerationRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_decelerationRate(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_decelerationRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_scrollSensitivity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_scrollSensitivity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_scrollSensitivity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::get_viewport()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_viewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_viewport(::UnityEngine::RectTransform*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_viewport",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectTransform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Scrollbar* UnityEngine::UI::ScrollRect::get_horizontalScrollbar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Scrollbar*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontalScrollbar(::UnityEngine::UI::Scrollbar*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Scrollbar* UnityEngine::UI::ScrollRect::get_verticalScrollbar()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Scrollbar*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_verticalScrollbar(::UnityEngine::UI::Scrollbar*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_verticalScrollbar",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility UnityEngine::UI::ScrollRect::get_horizontalScrollbarVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontalScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontalScrollbarVisibility(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontalScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility UnityEngine::UI::ScrollRect::get_verticalScrollbarVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_verticalScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_verticalScrollbarVisibility(::UnityEngine::UI::__ScrollRect__ScrollbarVisibility  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_verticalScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_horizontalScrollbarSpacing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontalScrollbarSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontalScrollbarSpacing(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontalScrollbarSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_verticalScrollbarSpacing()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_verticalScrollbarSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_verticalScrollbarSpacing(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_verticalScrollbarSpacing",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::__ScrollRect__ScrollRectEvent* UnityEngine::UI::ScrollRect::get_onValueChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_onValueChanged(::UnityEngine::UI::__ScrollRect__ScrollRectEvent*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_onValueChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__ScrollRectEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::get_viewRect()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_viewRect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::ScrollRect::get_velocity()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_velocity(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_velocity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::ScrollRect::get_rectTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_rectTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(*this, ___internal_method);
}
inline ::UnityEngine::UI::ScrollRect* UnityEngine::UI::ScrollRect::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::ScrollRect*>());
}
inline void UnityEngine::UI::ScrollRect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::Rebuild(::UnityEngine::UI::CanvasUpdate  executing)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "Rebuild",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::CanvasUpdate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, executing);
}
inline void UnityEngine::UI::ScrollRect::LayoutComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "LayoutComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::GraphicUpdateComplete()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "GraphicUpdateComplete",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateCachedData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateCachedData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::ScrollRect::IsActive()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "IsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::EnsureLayoutHasRebuilt()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "EnsureLayoutHasRebuilt",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::StopMovement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "StopMovement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::OnScroll(::UnityEngine::EventSystems::PointerEventData*  data)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "OnScroll",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, data);
}
inline void UnityEngine::UI::ScrollRect::OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "OnInitializePotentialDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::ScrollRect::OnBeginDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "OnBeginDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::ScrollRect::OnEndDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "OnEndDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::ScrollRect::OnDrag(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "OnDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, eventData);
}
inline void UnityEngine::UI::ScrollRect::SetContentAnchoredPosition(::UnityEngine::Vector2  position)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetContentAnchoredPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, position);
}
inline void UnityEngine::UI::ScrollRect::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "LateUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdatePrevData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdatePrevData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateScrollbars(::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateScrollbars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, offset);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::ScrollRect::get_normalizedPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_normalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_normalizedPosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_normalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_horizontalNormalizedPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_horizontalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_horizontalNormalizedPosition(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_horizontalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UI::ScrollRect::get_verticalNormalizedPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_verticalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::set_verticalNormalizedPosition(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "set_verticalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UI::ScrollRect::SetHorizontalNormalizedPosition(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetHorizontalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UI::ScrollRect::SetVerticalNormalizedPosition(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetVerticalNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UI::ScrollRect::SetNormalizedPosition(float_t  value, int32_t  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetNormalizedPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value, axis);
}
inline float_t UnityEngine::UI::ScrollRect::RubberDelta(float_t  overStretching, float_t  viewSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "RubberDelta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, overStretching, viewSize);
}
inline void UnityEngine::UI::ScrollRect::OnRectTransformDimensionsChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "OnRectTransformDimensionsChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::ScrollRect::get_hScrollingNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_hScrollingNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool UnityEngine::UI::ScrollRect::get_vScrollingNeeded()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_vScrollingNeeded",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::CalculateLayoutInputHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "CalculateLayoutInputHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::CalculateLayoutInputVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "CalculateLayoutInputVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_minWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_minWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_preferredWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_preferredWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_flexibleWidth()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_flexibleWidth",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_minHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_minHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_preferredHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_preferredHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UI::ScrollRect::get_flexibleHeight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_flexibleHeight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::UI::ScrollRect::get_layoutPriority()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "get_layoutPriority",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::SetLayoutHorizontal()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetLayoutHorizontal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::SetLayoutVertical()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetLayoutVertical",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateScrollbarVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateOneScrollbarVisibility(bool  xScrollingNeeded, bool  xAxisEnabled, ::UnityEngine::UI::__ScrollRect__ScrollbarVisibility  scrollbarVisibility, ::UnityEngine::UI::Scrollbar*  scrollbar)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateOneScrollbarVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__ScrollbarVisibility>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Scrollbar*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xScrollingNeeded, xAxisEnabled, scrollbarVisibility, scrollbar);
}
inline void UnityEngine::UI::ScrollRect::UpdateScrollbarLayout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateScrollbarLayout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::UpdateBounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UpdateBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::AdjustBounds(ByRef<::UnityEngine::Bounds>  viewBounds, ByRef<::UnityEngine::Vector2>  contentPivot, ByRef<::UnityEngine::Vector3>  contentSize, ByRef<::UnityEngine::Vector3>  contentPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "AdjustBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, viewBounds, contentPivot, contentSize, contentPos);
}
inline ::UnityEngine::Bounds UnityEngine::UI::ScrollRect::GetBounds()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "GetBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(*this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::UI::ScrollRect::InternalGetBounds(::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>  corners, ByRef<::UnityEngine::Matrix4x4>  viewWorldToLocalMatrix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "InternalGetBounds",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3,::Array<::UnityEngine::Vector3>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Matrix4x4>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds, false>(nullptr, ___internal_method, corners, viewWorldToLocalMatrix);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::ScrollRect::CalculateOffset(::UnityEngine::Vector2  delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "CalculateOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method, delta);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::ScrollRect::InternalCalculateOffset(ByRef<::UnityEngine::Bounds>  viewBounds, ByRef<::UnityEngine::Bounds>  contentBounds, bool  horizontal, bool  vertical, ::UnityEngine::UI::__ScrollRect__MovementType  movementType, ByRef<::UnityEngine::Vector2>  delta)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "InternalCalculateOffset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Bounds>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ScrollRect__MovementType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, viewBounds, contentBounds, horizontal, vertical, movementType, delta);
}
inline void UnityEngine::UI::ScrollRect::SetDirty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::ScrollRect::SetDirtyCaching()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "SetDirtyCaching",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::Transform* UnityEngine::UI::ScrollRect::UnityEngine_UI_ICanvasElement_get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ScrollRect*>::get(),
                            "UnityEngine.UI.ICanvasElement.get_transform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Transform*, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
