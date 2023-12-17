#pragma once
#include "UnityEngine/UIElements/zzzz__Clickable_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
template<typename T>
constexpr void UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename T>
constexpr int32_t& UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename T>
constexpr int32_t const& UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename T>
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::__ClampedDragger_1__DragDirection(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
template<typename T>
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>  UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::None{static_cast<int32_t>(0x0)};
template<typename T>
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>  UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::LowToHigh{static_cast<int32_t>(0x1)};
template<typename T>
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>  UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::HighToLow{static_cast<int32_t>(0x2)};
template<typename T>
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>  UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>::Free{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.add_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(::System::Action*)>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::add_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.remove_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(::System::Action*)>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::remove_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.get_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t> (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)()>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::get_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.set_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>)>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::set_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.set_slider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(::UnityEngine::UIElements::BaseSlider_1<float_t>*)>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::set_slider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.get_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)()>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::get_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.set_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::set_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.get_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)()>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::get_delta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(::UnityEngine::UIElements::BaseSlider_1<float_t>*, ::System::Action*, ::System::Action*)>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.ProcessDownEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2, int32_t)>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::ProcessDownEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<float_t>.ProcessMoveEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<float_t>::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ClampedDragger_1<float_t>::ProcessMoveEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::ClampedDragger_1<float_t>::__set_dragging(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x70>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* UnityEngine::UIElements::ClampedDragger_1<float_t>::__get_dragging()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> UnityEngine::UIElements::ClampedDragger_1<float_t>::__get_dragging() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<float_t>::__set__dragDirection_k__BackingField(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>, 0x78>(this, std::forward<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>>(value));
}
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>& UnityEngine::UIElements::ClampedDragger_1<float_t>::__get__dragDirection_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>, 0x78>(this);
}
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t> const& UnityEngine::UIElements::ClampedDragger_1<float_t>::__get__dragDirection_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>, 0x78>(this);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<float_t>::__set__slider_k__BackingField(::UnityEngine::UIElements::BaseSlider_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::BaseSlider_1<float_t>*, 0x80>(this, std::forward<::UnityEngine::UIElements::BaseSlider_1<float_t>*>(value));
}
constexpr ::UnityEngine::UIElements::BaseSlider_1<float_t>* UnityEngine::UIElements::ClampedDragger_1<float_t>::__get__slider_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseSlider_1<float_t>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseSlider_1<float_t>*> UnityEngine::UIElements::ClampedDragger_1<float_t>::__get__slider_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseSlider_1<float_t>*, 0x80>(this);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<float_t>::__set__startMousePosition_k__BackingField(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x88>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ClampedDragger_1<float_t>::__get__startMousePosition_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x88>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ClampedDragger_1<float_t>::__get__startMousePosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x88>(this);
}
inline void UnityEngine::UIElements::ClampedDragger_1<float_t>::add_dragging(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ClampedDragger_1<float_t>::remove_dragging(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t> UnityEngine::UIElements::ClampedDragger_1<float_t>::get_dragDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ClampedDragger_1<float_t>::set_dragDirection(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<float_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ClampedDragger_1<float_t>::set_slider(::UnityEngine::UIElements::BaseSlider_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<float_t>::get_startMousePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ClampedDragger_1<float_t>::set_startMousePosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<float_t>::get_delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ClampedDragger_1<float_t>* UnityEngine::UIElements::ClampedDragger_1<float_t>::New_ctor(::UnityEngine::UIElements::BaseSlider_1<float_t>*  slider, ::System::Action*  clickHandler, ::System::Action*  dragHandler)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>(slider, clickHandler, dragHandler));
}
inline void UnityEngine::UIElements::ClampedDragger_1<float_t>::_ctor(::UnityEngine::UIElements::BaseSlider_1<float_t>*  slider, ::System::Action*  clickHandler, ::System::Action*  dragHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, slider, clickHandler, dragHandler);
}
inline void UnityEngine::UIElements::ClampedDragger_1<float_t>::ProcessDownEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::Vector2  localPosition, int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "ProcessDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt, localPosition, pointerId);
}
inline void UnityEngine::UIElements::ClampedDragger_1<float_t>::ProcessMoveEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::Vector2  localPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get(),
                            "ProcessMoveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt, localPosition);
}
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.add_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(::System::Action*)>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::add_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.remove_dragging
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(::System::Action*)>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::remove_dragging)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.get_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t> (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)()>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.set_dragDirection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>)>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_dragDirection)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.set_slider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(::UnityEngine::UIElements::BaseSlider_1<int32_t>*)>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_slider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.get_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)()>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.set_startMousePosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_startMousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.get_delta
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)()>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_delta)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(::UnityEngine::UIElements::BaseSlider_1<int32_t>*, ::System::Action*, ::System::Action*)>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.ProcessDownEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2, int32_t)>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::ProcessDownEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ClampedDragger_1<int32_t>.ProcessMoveEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::ClampedDragger_1<int32_t>::*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::Vector2)>(&::UnityEngine::UIElements::ClampedDragger_1<int32_t>::ProcessMoveEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::ClampedDragger_1<int32_t>::__set_dragging(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x70>(this, std::forward<::System::Action*>(value));
}
constexpr ::System::Action* UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get_dragging()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get_dragging() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<int32_t>::__set__dragDirection_k__BackingField(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>, 0x78>(this, std::forward<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>>(value));
}
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>& UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get__dragDirection_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>, 0x78>(this);
}
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t> const& UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get__dragDirection_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>, 0x78>(this);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<int32_t>::__set__slider_k__BackingField(::UnityEngine::UIElements::BaseSlider_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::BaseSlider_1<int32_t>*, 0x80>(this, std::forward<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>(value));
}
constexpr ::UnityEngine::UIElements::BaseSlider_1<int32_t>* UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get__slider_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseSlider_1<int32_t>*, 0x80>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseSlider_1<int32_t>*> UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get__slider_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseSlider_1<int32_t>*, 0x80>(this);
}
constexpr void UnityEngine::UIElements::ClampedDragger_1<int32_t>::__set__startMousePosition_k__BackingField(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x88>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get__startMousePosition_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x88>(this);
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ClampedDragger_1<int32_t>::__get__startMousePosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x88>(this);
}
inline void UnityEngine::UIElements::ClampedDragger_1<int32_t>::add_dragging(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ClampedDragger_1<int32_t>::remove_dragging(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t> UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_dragDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_dragDirection(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_slider(::UnityEngine::UIElements::BaseSlider_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_startMousePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::ClampedDragger_1<int32_t>::set_startMousePosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<int32_t>::get_delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
inline ::UnityEngine::UIElements::ClampedDragger_1<int32_t>* UnityEngine::UIElements::ClampedDragger_1<int32_t>::New_ctor(::UnityEngine::UIElements::BaseSlider_1<int32_t>*  slider, ::System::Action*  clickHandler, ::System::Action*  dragHandler)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>(slider, clickHandler, dragHandler));
}
inline void UnityEngine::UIElements::ClampedDragger_1<int32_t>::_ctor(::UnityEngine::UIElements::BaseSlider_1<int32_t>*  slider, ::System::Action*  clickHandler, ::System::Action*  dragHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, slider, clickHandler, dragHandler);
}
inline void UnityEngine::UIElements::ClampedDragger_1<int32_t>::ProcessDownEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::Vector2  localPosition, int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "ProcessDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt, localPosition, pointerId);
}
inline void UnityEngine::UIElements::ClampedDragger_1<int32_t>::ProcessMoveEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::Vector2  localPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get(),
                            "ProcessMoveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt, localPosition);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__set_dragging(::System::Action*  value)  {
::cordl_internals::setInstanceField<::System::Action*, 0x70>(this, std::forward<::System::Action*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::System::Action* UnityEngine::UIElements::ClampedDragger_1<T>::__get_dragging()  {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::System::Action*> UnityEngine::UIElements::ClampedDragger_1<T>::__get_dragging() const {
return ::cordl_internals::getInstanceField<::System::Action*, 0x70>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__set__dragDirection_k__BackingField(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>, 0x78>(this, std::forward<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>& UnityEngine::UIElements::ClampedDragger_1<T>::__get__dragDirection_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>, 0x78>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> const& UnityEngine::UIElements::ClampedDragger_1<T>::__get__dragDirection_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>, 0x78>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__set__slider_k__BackingField(::UnityEngine::UIElements::BaseSlider_1<T>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::BaseSlider_1<T>*, 0x80>(this, std::forward<::UnityEngine::UIElements::BaseSlider_1<T>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::UIElements::BaseSlider_1<T>* UnityEngine::UIElements::ClampedDragger_1<T>::__get__slider_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseSlider_1<T>*, 0x80>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseSlider_1<T>*> UnityEngine::UIElements::ClampedDragger_1<T>::__get__slider_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::BaseSlider_1<T>*, 0x80>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr void UnityEngine::UIElements::ClampedDragger_1<T>::__set__startMousePosition_k__BackingField(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x88>(this, std::forward<::UnityEngine::Vector2>(value));
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::ClampedDragger_1<T>::__get__startMousePosition_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x88>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::ClampedDragger_1<T>::__get__startMousePosition_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x88>(this);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::add_dragging(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "add_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::remove_dragging(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "remove_dragging",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T> UnityEngine::UIElements::ClampedDragger_1<T>::get_dragDirection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "get_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::set_dragDirection(::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "set_dragDirection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__ClampedDragger_1__DragDirection<T>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::set_slider(::UnityEngine::UIElements::BaseSlider_1<T>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "set_slider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<T>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<T>::get_startMousePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "get_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::set_startMousePosition(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "set_startMousePosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::Vector2 UnityEngine::UIElements::ClampedDragger_1<T>::get_delta()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "get_delta",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline ::UnityEngine::UIElements::ClampedDragger_1<T>* UnityEngine::UIElements::ClampedDragger_1<T>::New_ctor(::UnityEngine::UIElements::BaseSlider_1<T>*  slider, ::System::Action*  clickHandler, ::System::Action*  dragHandler)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::ClampedDragger_1<T>*>(slider, clickHandler, dragHandler));
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::_ctor(::UnityEngine::UIElements::BaseSlider_1<T>*  slider, ::System::Action*  clickHandler, ::System::Action*  dragHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseSlider_1<T>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, slider, clickHandler, dragHandler);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::ProcessDownEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::Vector2  localPosition, int32_t  pointerId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "ProcessDownEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt, localPosition, pointerId);
}
template<::il2cpp_utils::il2cpp_reference_type T>
inline void UnityEngine::UIElements::ClampedDragger_1<T>::ProcessMoveEvent(::UnityEngine::UIElements::EventBase*  evt, ::UnityEngine::Vector2  localPosition)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::ClampedDragger_1<T>*>::get(),
                            "ProcessMoveEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt, localPosition);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
