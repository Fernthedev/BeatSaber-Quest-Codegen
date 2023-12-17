#pragma once
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyDownEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__GeometryChangedEvent_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__SliderDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__TextField_def.hpp"
#include "UnityEngine/UIElements/zzzz__ChangeEvent_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusOutEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClampedDragger_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseSlider_1_def.hpp"
template<typename TValueType>
constexpr void UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
template<typename TValueType>
constexpr int32_t& UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
template<typename TValueType>
constexpr int32_t const& UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template<typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::__BaseSlider_1__SliderKey(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
template<typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>  UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::None{static_cast<int32_t>(0x0)};
template<typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>  UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::Lowest{static_cast<int32_t>(0x1)};
template<typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>  UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::LowerPage{static_cast<int32_t>(0x2)};
template<typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>  UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::Lower{static_cast<int32_t>(0x3)};
template<typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>  UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::Higher{static_cast<int32_t>(0x4)};
template<typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>  UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::HigherPage{static_cast<int32_t>(0x5)};
template<typename TValueType>
constexpr ::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>  UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>::Highest{static_cast<int32_t>(0x6)};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_dragContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_dragContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_dragContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_dragContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_dragElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_dragElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_dragElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_dragElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_dragBorderElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_dragBorderElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_dragBorderElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_dragBorderElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_inputTextField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextField* (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_inputTextField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_inputTextField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::TextField*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_inputTextField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextField*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_lowValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_lowValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_lowValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_lowValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_highValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_highValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_highValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_highValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.SetHighValueWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::SetHighValueWithoutNotify)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SetHighValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_pageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_pageSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  106
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_pageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_pageSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  107
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_showInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_showInputField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  108
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_showInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(bool)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_showInputField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  109
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_clamped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_clamped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_clamped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(bool)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_clamped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_clampedDragger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ClampedDragger_1<float_t>* (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_clampedDragger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_clampedDragger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::ClampedDragger_1<float_t>*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_clampedDragger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.Clamp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::Clamp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "Clamp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.GetClampedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::GetClampedValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "GetClampedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  102
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.SetValueWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_direction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SliderDirection (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_direction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_direction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::SliderDirection)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_direction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.get_inverted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::get_inverted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.set_inverted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(bool)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::set_inverted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::StringW, float_t, float_t, ::UnityEngine::UIElements::SliderDirection, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.GetClosestPowerOfTen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::GetClosestPowerOfTen)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "GetClosestPowerOfTen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.RoundToMultipleOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::RoundToMultipleOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "RoundToMultipleOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.ClampValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::ClampValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "ClampValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.SliderLerpUnclamped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::SliderLerpUnclamped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  110
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.SliderNormalizeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::SliderNormalizeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  111
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.ParseStringToValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::StringW)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::ParseStringToValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  112
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.ComputeValueFromKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<float_t>, bool)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::ComputeValueFromKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  113
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.SliderLerpDirectionalUnclamped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::SliderLerpDirectionalUnclamped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SliderLerpDirectionalUnclamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.SetSliderValueFromDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::SetSliderValueFromDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SetSliderValueFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.ComputeValueAndDirectionFromDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::ComputeValueAndDirectionFromDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "ComputeValueAndDirectionFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.SetSliderValueFromClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::SetSliderValueFromClick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SetSliderValueFromClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.OnKeyDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::KeyDownEvent*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::OnKeyDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.ComputeValueAndDirectionFromClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::ComputeValueAndDirectionFromClick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  114
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.AdjustDragElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::AdjustDragElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "AdjustDragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.UpdateDragElementPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateDragElementPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.OnViewDataReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::OnViewDataReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  92
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.SameValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::SameValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SameValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.UpdateDragElementPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateDragElementPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.ExecuteDefaultAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::ExecuteDefaultAction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.UpdateTextFieldVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateTextFieldVisibility)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "UpdateTextFieldVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.UpdateTextFieldValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateTextFieldValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "UpdateTextFieldValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.OnTextFieldFocusOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::FocusOutEvent*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::OnTextFieldFocusOut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "OnTextFieldFocusOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.OnTextFieldValueChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)(::UnityEngine::UIElements::ChangeEvent_1<::StringW>*)>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::OnTextFieldValueChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "OnTextFieldValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<float_t>.UpdateMixedValueContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<float_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set__dragContainer_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x408>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<float_t>::__get__dragContainer_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x408>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::BaseSlider_1<float_t>::__get__dragContainer_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x408>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x410>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<float_t>::__get__dragElement_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x410>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::BaseSlider_1<float_t>::__get__dragElement_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x410>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set__dragBorderElement_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x418>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<float_t>::__get__dragBorderElement_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x418>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::BaseSlider_1<float_t>::__get__dragBorderElement_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x418>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set__inputTextField_k__BackingField(::UnityEngine::UIElements::TextField*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextField*, 0x420>(this, std::forward<::UnityEngine::UIElements::TextField*>(value));
}
constexpr ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::BaseSlider_1<float_t>::__get__inputTextField_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextField*, 0x420>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextField*> UnityEngine::UIElements::BaseSlider_1<float_t>::__get__inputTextField_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextField*, 0x420>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set_m_LowValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x428>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_LowValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x428>(this);
}
constexpr float_t const& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_LowValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x428>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set_m_HighValue(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x42c>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_HighValue()  {
return ::cordl_internals::getInstanceField<float_t, 0x42c>(this);
}
constexpr float_t const& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_HighValue() const {
return ::cordl_internals::getInstanceField<float_t, 0x42c>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set_m_PageSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x430>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_PageSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x430>(this);
}
constexpr float_t const& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_PageSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x430>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set_m_ShowInputField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x434>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_ShowInputField()  {
return ::cordl_internals::getInstanceField<bool, 0x434>(this);
}
constexpr bool const& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_ShowInputField() const {
return ::cordl_internals::getInstanceField<bool, 0x434>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set__clamped_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x435>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::BaseSlider_1<float_t>::__get__clamped_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x435>(this);
}
constexpr bool const& UnityEngine::UIElements::BaseSlider_1<float_t>::__get__clamped_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x435>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<float_t>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ClampedDragger_1<float_t>*, 0x438>(this, std::forward<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>(value));
}
constexpr ::UnityEngine::UIElements::ClampedDragger_1<float_t>* UnityEngine::UIElements::BaseSlider_1<float_t>::__get__clampedDragger_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ClampedDragger_1<float_t>*, 0x438>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClampedDragger_1<float_t>*> UnityEngine::UIElements::BaseSlider_1<float_t>::__get__clampedDragger_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ClampedDragger_1<float_t>*, 0x438>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set_m_DragElementStartPos(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x440>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_DragElementStartPos()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x440>(this);
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_DragElementStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x440>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set_m_Direction(::UnityEngine::UIElements::SliderDirection  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::SliderDirection, 0x450>(this, std::forward<::UnityEngine::UIElements::SliderDirection>(value));
}
constexpr ::UnityEngine::UIElements::SliderDirection& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_Direction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SliderDirection, 0x450>(this);
}
constexpr ::UnityEngine::UIElements::SliderDirection const& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_Direction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SliderDirection, 0x450>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<float_t>::__set_m_Inverted(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x454>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_Inverted()  {
return ::cordl_internals::getInstanceField<bool, 0x454>(this);
}
constexpr bool const& UnityEngine::UIElements::BaseSlider_1<float_t>::__get_m_Inverted() const {
return ::cordl_internals::getInstanceField<bool, 0x454>(this);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_labelUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_inputUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_inputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_horizontalVariantUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "horizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_horizontalVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "horizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_verticalVariantUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "verticalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_verticalVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "verticalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_dragContainerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "dragContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_dragContainerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "dragContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_trackerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_trackerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_draggerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_draggerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_draggerBorderUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "draggerBorderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_draggerBorderUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "draggerBorderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::setStaticF_textFieldClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "textFieldClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<float_t>::getStaticF_textFieldClassName()  {
return ::cordl_internals::getStaticField<::StringW, "textFieldClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<float_t>::get_dragContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_dragContainer(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<float_t>::get_dragElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_dragElement(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<float_t>::get_dragBorderElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_dragBorderElement(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::BaseSlider_1<float_t>::get_inputTextField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextField*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_inputTextField(::UnityEngine::UIElements::TextField*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextField*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::get_lowValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_lowValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::get_highValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_highValue(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::SetHighValueWithoutNotify(float_t  newHighValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SetHighValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newHighValue);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::get_pageSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_pageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_pageSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_pageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseSlider_1<float_t>::get_showInputField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_showInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_showInputField(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_showInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseSlider_1<float_t>::get_clamped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_clamped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ClampedDragger_1<float_t>* UnityEngine::UIElements::BaseSlider_1<float_t>::get_clampedDragger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ClampedDragger_1<float_t>*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<float_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ClampedDragger_1<float_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::Clamp(float_t  value, float_t  lowBound, float_t  highBound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "Clamp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, value, lowBound, highBound);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::GetClampedValue(float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "GetClampedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, newValue);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_value(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::SetValueWithoutNotify(float_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SetValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newValue);
}
inline ::UnityEngine::UIElements::SliderDirection UnityEngine::UIElements::BaseSlider_1<float_t>::get_direction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SliderDirection, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_direction(::UnityEngine::UIElements::SliderDirection  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseSlider_1<float_t>::get_inverted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "get_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::set_inverted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "set_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
/// @param direction: ::UnityEngine::UIElements::SliderDirection (default: static_cast<int32_t>(0x0))
/// @param pageSize: float_t (default: 0.0)
inline ::UnityEngine::UIElements::BaseSlider_1<float_t>* UnityEngine::UIElements::BaseSlider_1<float_t>::New_ctor(::StringW  label, float_t  start, float_t  end, ::UnityEngine::UIElements::SliderDirection  direction, float_t  pageSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::BaseSlider_1<float_t>*>(label, start, end, direction, pageSize));
}
/// @param direction: ::UnityEngine::UIElements::SliderDirection (default: static_cast<int32_t>(0x0))
/// @param pageSize: float_t (default: 0.0)
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::_ctor(::StringW  label, float_t  start, float_t  end, ::UnityEngine::UIElements::SliderDirection  direction, float_t  pageSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, label, start, end, direction, pageSize);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::GetClosestPowerOfTen(float_t  positiveNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "GetClosestPowerOfTen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, positiveNumber);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::RoundToMultipleOf(float_t  value, float_t  roundingValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "RoundToMultipleOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value, roundingValue);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::ClampValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "ClampValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::SliderLerpUnclamped(float_t  a, float_t  b, float_t  interpolant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SliderLerpUnclamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, a, b, interpolant);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::SliderNormalizeValue(float_t  currentValue, float_t  lowerValue, float_t  higherValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SliderNormalizeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, currentValue, lowerValue, higherValue);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::ParseStringToValue(::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "ParseStringToValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, stringValue);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::ComputeValueFromKey(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<float_t>  sliderKey, bool  isShift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "ComputeValueFromKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__BaseSlider_1__SliderKey<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderKey, isShift);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<float_t>::SliderLerpDirectionalUnclamped(float_t  a, float_t  b, float_t  positionInterpolant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SliderLerpDirectionalUnclamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, a, b, positionInterpolant);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::SetSliderValueFromDrag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SetSliderValueFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::ComputeValueAndDirectionFromDrag(float_t  sliderLength, float_t  dragElementLength, float_t  dragElementPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "ComputeValueAndDirectionFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderLength, dragElementLength, dragElementPos);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::SetSliderValueFromClick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SetSliderValueFromClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::ComputeValueAndDirectionFromClick(float_t  sliderLength, float_t  dragElementLength, float_t  dragElementPos, float_t  dragElementLastPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "ComputeValueAndDirectionFromClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderLength, dragElementLength, dragElementPos, dragElementLastPos);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::AdjustDragElement(float_t  factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "AdjustDragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, factor);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::OnViewDataReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "OnViewDataReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseSlider_1<float_t>::SameValues(float_t  a, float_t  b, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "SameValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, a, b, epsilon);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateDragElementPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "ExecuteDefaultAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateTextFieldVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "UpdateTextFieldVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateTextFieldValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "UpdateTextFieldValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "OnTextFieldFocusOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::OnTextFieldValueChange(::UnityEngine::UIElements::ChangeEvent_1<::StringW>*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "OnTextFieldValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<float_t>::UpdateMixedValueContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<float_t>*>::get(),
                            "UpdateMixedValueContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_dragContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_dragContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_dragContainer
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_dragContainer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_dragElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_dragElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_dragElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_dragElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_dragBorderElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_dragBorderElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_dragBorderElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_dragBorderElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_inputTextField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::TextField* (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_inputTextField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_inputTextField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::TextField*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_inputTextField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextField*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_lowValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_lowValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_lowValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_lowValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_highValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_highValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_highValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_highValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.SetHighValueWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::SetHighValueWithoutNotify)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SetHighValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_pageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_pageSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  106
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_pageSize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_pageSize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  107
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_showInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_showInputField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  108
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_showInputField
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(bool)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_showInputField)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  109
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_clamped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_clamped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_clamped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(bool)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_clamped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_clampedDragger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ClampedDragger_1<int32_t>* (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_clampedDragger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_clampedDragger
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::ClampedDragger_1<int32_t>*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_clampedDragger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.Clamp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::Clamp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "Clamp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.GetClampedValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::GetClampedValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "GetClampedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_value)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  102
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.SetValueWithoutNotify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::SetValueWithoutNotify)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_direction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::SliderDirection (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_direction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_direction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::SliderDirection)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_direction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.get_inverted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::get_inverted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.set_inverted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(bool)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::set_inverted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::StringW, int32_t, int32_t, ::UnityEngine::UIElements::SliderDirection, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::_ctor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.GetClosestPowerOfTen
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::GetClosestPowerOfTen)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "GetClosestPowerOfTen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.RoundToMultipleOf
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::RoundToMultipleOf)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "RoundToMultipleOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.ClampValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::ClampValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "ClampValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.SliderLerpUnclamped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t, int32_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::SliderLerpUnclamped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  110
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.SliderNormalizeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t, int32_t, int32_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::SliderNormalizeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  111
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.ParseStringToValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::StringW)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::ParseStringToValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  112
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.ComputeValueFromKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<int32_t>, bool)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::ComputeValueFromKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  113
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.SliderLerpDirectionalUnclamped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(int32_t, int32_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::SliderLerpDirectionalUnclamped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SliderLerpDirectionalUnclamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.SetSliderValueFromDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::SetSliderValueFromDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SetSliderValueFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.ComputeValueAndDirectionFromDrag
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::ComputeValueAndDirectionFromDrag)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "ComputeValueAndDirectionFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.SetSliderValueFromClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::SetSliderValueFromClick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SetSliderValueFromClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.OnKeyDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::KeyDownEvent*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::OnKeyDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.ComputeValueAndDirectionFromClick
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(float_t, float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::ComputeValueAndDirectionFromClick)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  114
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.AdjustDragElement
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::AdjustDragElement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "AdjustDragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.UpdateDragElementPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::GeometryChangedEvent*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateDragElementPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.OnViewDataReady
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::OnViewDataReady)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  92
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.SameValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(float_t, float_t, float_t)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::SameValues)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SameValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.UpdateDragElementPosition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateDragElementPosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.ExecuteDefaultAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::ExecuteDefaultAction)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.UpdateTextFieldVisibility
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateTextFieldVisibility)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "UpdateTextFieldVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.UpdateTextFieldValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateTextFieldValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "UpdateTextFieldValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.OnTextFieldFocusOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::FocusOutEvent*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::OnTextFieldFocusOut)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "OnTextFieldFocusOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.OnTextFieldValueChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)(::UnityEngine::UIElements::ChangeEvent_1<::StringW>*)>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::OnTextFieldValueChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "OnTextFieldValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::BaseSlider_1<int32_t>.UpdateMixedValueContent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::BaseSlider_1<int32_t>::*)()>(&::UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateMixedValueContent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set__dragContainer_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x408>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__dragContainer_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x408>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__dragContainer_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x408>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x410>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__dragElement_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x410>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__dragElement_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x410>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set__dragBorderElement_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x418>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__dragBorderElement_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x418>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__dragBorderElement_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x418>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set__inputTextField_k__BackingField(::UnityEngine::UIElements::TextField*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextField*, 0x420>(this, std::forward<::UnityEngine::UIElements::TextField*>(value));
}
constexpr ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__inputTextField_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextField*, 0x420>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextField*> UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__inputTextField_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextField*, 0x420>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set_m_LowValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x428>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_LowValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x428>(this);
}
constexpr int32_t const& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_LowValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x428>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set_m_HighValue(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x42c>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_HighValue()  {
return ::cordl_internals::getInstanceField<int32_t, 0x42c>(this);
}
constexpr int32_t const& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_HighValue() const {
return ::cordl_internals::getInstanceField<int32_t, 0x42c>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set_m_PageSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x430>(this, std::forward<float_t>(value));
}
constexpr float_t& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_PageSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x430>(this);
}
constexpr float_t const& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_PageSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x430>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set_m_ShowInputField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x434>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_ShowInputField()  {
return ::cordl_internals::getInstanceField<bool, 0x434>(this);
}
constexpr bool const& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_ShowInputField() const {
return ::cordl_internals::getInstanceField<bool, 0x434>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set__clamped_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x435>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__clamped_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x435>(this);
}
constexpr bool const& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__clamped_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x435>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<int32_t>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*, 0x438>(this, std::forward<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>(value));
}
constexpr ::UnityEngine::UIElements::ClampedDragger_1<int32_t>* UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__clampedDragger_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*, 0x438>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*> UnityEngine::UIElements::BaseSlider_1<int32_t>::__get__clampedDragger_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*, 0x438>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set_m_DragElementStartPos(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x440>(this, std::forward<::UnityEngine::Rect>(value));
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_DragElementStartPos()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x440>(this);
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_DragElementStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x440>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set_m_Direction(::UnityEngine::UIElements::SliderDirection  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::SliderDirection, 0x450>(this, std::forward<::UnityEngine::UIElements::SliderDirection>(value));
}
constexpr ::UnityEngine::UIElements::SliderDirection& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_Direction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SliderDirection, 0x450>(this);
}
constexpr ::UnityEngine::UIElements::SliderDirection const& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_Direction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SliderDirection, 0x450>(this);
}
constexpr void UnityEngine::UIElements::BaseSlider_1<int32_t>::__set_m_Inverted(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x454>(this, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_Inverted()  {
return ::cordl_internals::getInstanceField<bool, 0x454>(this);
}
constexpr bool const& UnityEngine::UIElements::BaseSlider_1<int32_t>::__get_m_Inverted() const {
return ::cordl_internals::getInstanceField<bool, 0x454>(this);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_labelUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_inputUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_inputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_horizontalVariantUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "horizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_horizontalVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "horizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_verticalVariantUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "verticalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_verticalVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "verticalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_dragContainerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "dragContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_dragContainerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "dragContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_trackerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_trackerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_draggerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_draggerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_draggerBorderUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "draggerBorderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_draggerBorderUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "draggerBorderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::setStaticF_textFieldClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "textFieldClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::BaseSlider_1<int32_t>::getStaticF_textFieldClassName()  {
return ::cordl_internals::getStaticField<::StringW, "textFieldClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get>();
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<int32_t>::get_dragContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_dragContainer(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<int32_t>::get_dragElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_dragElement(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<int32_t>::get_dragBorderElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_dragBorderElement(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::BaseSlider_1<int32_t>::get_inputTextField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextField*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_inputTextField(::UnityEngine::UIElements::TextField*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextField*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::BaseSlider_1<int32_t>::get_lowValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_lowValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::BaseSlider_1<int32_t>::get_highValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_highValue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::SetHighValueWithoutNotify(int32_t  newHighValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SetHighValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newHighValue);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<int32_t>::get_pageSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_pageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_pageSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_pageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseSlider_1<int32_t>::get_showInputField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_showInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_showInputField(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_showInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseSlider_1<int32_t>::get_clamped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_clamped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::ClampedDragger_1<int32_t>* UnityEngine::UIElements::BaseSlider_1<int32_t>::get_clampedDragger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<int32_t>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ClampedDragger_1<int32_t>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::BaseSlider_1<int32_t>::Clamp(int32_t  value, int32_t  lowBound, int32_t  highBound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "Clamp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, value, lowBound, highBound);
}
inline int32_t UnityEngine::UIElements::BaseSlider_1<int32_t>::GetClampedValue(int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "GetClampedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, newValue);
}
inline int32_t UnityEngine::UIElements::BaseSlider_1<int32_t>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_value(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::SetValueWithoutNotify(int32_t  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SetValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newValue);
}
inline ::UnityEngine::UIElements::SliderDirection UnityEngine::UIElements::BaseSlider_1<int32_t>::get_direction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SliderDirection, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_direction(::UnityEngine::UIElements::SliderDirection  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::BaseSlider_1<int32_t>::get_inverted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "get_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::set_inverted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "set_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
/// @param direction: ::UnityEngine::UIElements::SliderDirection (default: static_cast<int32_t>(0x0))
/// @param pageSize: float_t (default: 0.0)
inline ::UnityEngine::UIElements::BaseSlider_1<int32_t>* UnityEngine::UIElements::BaseSlider_1<int32_t>::New_ctor(::StringW  label, int32_t  start, int32_t  end, ::UnityEngine::UIElements::SliderDirection  direction, float_t  pageSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>(label, start, end, direction, pageSize));
}
/// @param direction: ::UnityEngine::UIElements::SliderDirection (default: static_cast<int32_t>(0x0))
/// @param pageSize: float_t (default: 0.0)
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::_ctor(::StringW  label, int32_t  start, int32_t  end, ::UnityEngine::UIElements::SliderDirection  direction, float_t  pageSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, label, start, end, direction, pageSize);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<int32_t>::GetClosestPowerOfTen(float_t  positiveNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "GetClosestPowerOfTen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, positiveNumber);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<int32_t>::RoundToMultipleOf(float_t  value, float_t  roundingValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "RoundToMultipleOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value, roundingValue);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::ClampValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "ClampValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::BaseSlider_1<int32_t>::SliderLerpUnclamped(int32_t  a, int32_t  b, float_t  interpolant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SliderLerpUnclamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, a, b, interpolant);
}
inline float_t UnityEngine::UIElements::BaseSlider_1<int32_t>::SliderNormalizeValue(int32_t  currentValue, int32_t  lowerValue, int32_t  higherValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SliderNormalizeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, currentValue, lowerValue, higherValue);
}
inline int32_t UnityEngine::UIElements::BaseSlider_1<int32_t>::ParseStringToValue(::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "ParseStringToValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, stringValue);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::ComputeValueFromKey(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<int32_t>  sliderKey, bool  isShift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "ComputeValueFromKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__BaseSlider_1__SliderKey<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderKey, isShift);
}
inline int32_t UnityEngine::UIElements::BaseSlider_1<int32_t>::SliderLerpDirectionalUnclamped(int32_t  a, int32_t  b, float_t  positionInterpolant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SliderLerpDirectionalUnclamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method, a, b, positionInterpolant);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::SetSliderValueFromDrag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SetSliderValueFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::ComputeValueAndDirectionFromDrag(float_t  sliderLength, float_t  dragElementLength, float_t  dragElementPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "ComputeValueAndDirectionFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderLength, dragElementLength, dragElementPos);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::SetSliderValueFromClick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SetSliderValueFromClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::ComputeValueAndDirectionFromClick(float_t  sliderLength, float_t  dragElementLength, float_t  dragElementPos, float_t  dragElementLastPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "ComputeValueAndDirectionFromClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderLength, dragElementLength, dragElementPos, dragElementLastPos);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::AdjustDragElement(float_t  factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "AdjustDragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, factor);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::OnViewDataReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "OnViewDataReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline bool UnityEngine::UIElements::BaseSlider_1<int32_t>::SameValues(float_t  a, float_t  b, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "SameValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, a, b, epsilon);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateDragElementPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "ExecuteDefaultAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateTextFieldVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "UpdateTextFieldVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateTextFieldValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "UpdateTextFieldValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "OnTextFieldFocusOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::OnTextFieldValueChange(::UnityEngine::UIElements::ChangeEvent_1<::StringW>*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "OnTextFieldValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::BaseSlider_1<int32_t>::UpdateMixedValueContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<int32_t>*>::get(),
                            "UpdateMixedValueContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__dragContainer_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x408>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragContainer_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x408>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragContainer_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x408>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__dragElement_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x410>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragElement_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x410>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragElement_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x410>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__dragBorderElement_k__BackingField(::UnityEngine::UIElements::VisualElement*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::VisualElement*, 0x418>(this, std::forward<::UnityEngine::UIElements::VisualElement*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragBorderElement_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x418>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__dragBorderElement_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::VisualElement*, 0x418>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__inputTextField_k__BackingField(::UnityEngine::UIElements::TextField*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::TextField*, 0x420>(this, std::forward<::UnityEngine::UIElements::TextField*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__inputTextField_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextField*, 0x420>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextField*> UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__inputTextField_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::TextField*, 0x420>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_LowValue(TValueType  value)  {
::cordl_internals::setInstanceField<TValueType, 0x428>(this, std::forward<TValueType>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr TValueType& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_LowValue()  {
return ::cordl_internals::getInstanceField<TValueType, 0x428>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr TValueType const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_LowValue() const {
return ::cordl_internals::getInstanceField<TValueType, 0x428>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_HighValue(TValueType  value)  {
::cordl_internals::setInstanceField<TValueType, 0x430>(this, std::forward<TValueType>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr TValueType& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_HighValue()  {
return ::cordl_internals::getInstanceField<TValueType, 0x430>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr TValueType const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_HighValue() const {
return ::cordl_internals::getInstanceField<TValueType, 0x430>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_PageSize(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x438>(this, std::forward<float_t>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr float_t& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_PageSize()  {
return ::cordl_internals::getInstanceField<float_t, 0x438>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr float_t const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_PageSize() const {
return ::cordl_internals::getInstanceField<float_t, 0x438>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_ShowInputField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x43c>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_ShowInputField()  {
return ::cordl_internals::getInstanceField<bool, 0x43c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_ShowInputField() const {
return ::cordl_internals::getInstanceField<bool, 0x43c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__clamped_k__BackingField(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x43d>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__clamped_k__BackingField()  {
return ::cordl_internals::getInstanceField<bool, 0x43d>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__clamped_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0x43d>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set__clampedDragger_k__BackingField(::UnityEngine::UIElements::ClampedDragger_1<TValueType>*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*, 0x440>(this, std::forward<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__clampedDragger_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*, 0x440>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*> UnityEngine::UIElements::BaseSlider_1<TValueType>::__get__clampedDragger_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*, 0x440>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_DragElementStartPos(::UnityEngine::Rect  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Rect, 0x448>(this, std::forward<::UnityEngine::Rect>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_DragElementStartPos()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x448>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_DragElementStartPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Rect, 0x448>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_Direction(::UnityEngine::UIElements::SliderDirection  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UIElements::SliderDirection, 0x458>(this, std::forward<::UnityEngine::UIElements::SliderDirection>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::SliderDirection& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_Direction()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SliderDirection, 0x458>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr ::UnityEngine::UIElements::SliderDirection const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_Direction() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UIElements::SliderDirection, 0x458>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr void UnityEngine::UIElements::BaseSlider_1<TValueType>::__set_m_Inverted(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x45c>(this, std::forward<bool>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_Inverted()  {
return ::cordl_internals::getInstanceField<bool, 0x45c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
constexpr bool const& UnityEngine::UIElements::BaseSlider_1<TValueType>::__get_m_Inverted() const {
return ::cordl_internals::getInstanceField<bool, 0x45c>(this);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_ussClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_ussClassName()  {
return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_labelUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_labelUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "labelUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_inputUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_inputUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "inputUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_horizontalVariantUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "horizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_horizontalVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "horizontalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_verticalVariantUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "verticalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_verticalVariantUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "verticalVariantUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_dragContainerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "dragContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_dragContainerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "dragContainerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_trackerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_trackerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "trackerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_draggerUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_draggerUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "draggerUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_draggerBorderUssClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "draggerBorderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_draggerBorderUssClassName()  {
return ::cordl_internals::getStaticField<::StringW, "draggerBorderUssClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::setStaticF_textFieldClassName(::StringW  value)  {
::cordl_internals::setStaticField<::StringW, "textFieldClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>(std::forward<::StringW>(value));
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::StringW UnityEngine::UIElements::BaseSlider_1<TValueType>::getStaticF_textFieldClassName()  {
return ::cordl_internals::getStaticField<::StringW, "textFieldClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get>();
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_dragContainer()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_dragContainer(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_dragContainer",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_dragElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_dragElement(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_dragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_dragBorderElement()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_dragBorderElement(::UnityEngine::UIElements::VisualElement*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_dragBorderElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::TextField* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_inputTextField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::TextField*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_inputTextField(::UnityEngine::UIElements::TextField*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_inputTextField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::TextField*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::get_lowValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_lowValue(TValueType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_lowValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::get_highValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_highValue(TValueType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_highValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::SetHighValueWithoutNotify(TValueType  newHighValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "SetHighValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newHighValue);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline float_t UnityEngine::UIElements::BaseSlider_1<TValueType>::get_pageSize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_pageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_pageSize(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_pageSize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::BaseSlider_1<TValueType>::get_showInputField()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_showInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_showInputField(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_showInputField",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::BaseSlider_1<TValueType>::get_clamped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_clamped(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_clamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::ClampedDragger_1<TValueType>* UnityEngine::UIElements::BaseSlider_1<TValueType>::get_clampedDragger()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_clampedDragger(::UnityEngine::UIElements::ClampedDragger_1<TValueType>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_clampedDragger",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ClampedDragger_1<TValueType>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::Clamp(TValueType  value, TValueType  lowBound, TValueType  highBound)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "Clamp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(*this, ___internal_method, value, lowBound, highBound);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::GetClampedValue(TValueType  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "GetClampedValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(*this, ___internal_method, newValue);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::get_value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_value(TValueType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::SetValueWithoutNotify(TValueType  newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "SetValueWithoutNotify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newValue);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::SliderDirection UnityEngine::UIElements::BaseSlider_1<TValueType>::get_direction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::SliderDirection, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_direction(::UnityEngine::UIElements::SliderDirection  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_direction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::BaseSlider_1<TValueType>::get_inverted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "get_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::set_inverted(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "set_inverted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
/// @param direction: ::UnityEngine::UIElements::SliderDirection (default: static_cast<int32_t>(0x0))
/// @param pageSize: float_t (default: 0.0)
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline ::UnityEngine::UIElements::BaseSlider_1<TValueType>* UnityEngine::UIElements::BaseSlider_1<TValueType>::New_ctor(::StringW  label, TValueType  start, TValueType  end, ::UnityEngine::UIElements::SliderDirection  direction, float_t  pageSize)  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>(label, start, end, direction, pageSize));
}
/// @param direction: ::UnityEngine::UIElements::SliderDirection (default: static_cast<int32_t>(0x0))
/// @param pageSize: float_t (default: 0.0)
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::_ctor(::StringW  label, TValueType  start, TValueType  end, ::UnityEngine::UIElements::SliderDirection  direction, float_t  pageSize)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::SliderDirection>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, label, start, end, direction, pageSize);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline float_t UnityEngine::UIElements::BaseSlider_1<TValueType>::GetClosestPowerOfTen(float_t  positiveNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "GetClosestPowerOfTen",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, positiveNumber);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline float_t UnityEngine::UIElements::BaseSlider_1<TValueType>::RoundToMultipleOf(float_t  value, float_t  roundingValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "RoundToMultipleOf",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, value, roundingValue);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ClampValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "ClampValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::SliderLerpUnclamped(TValueType  a, TValueType  b, float_t  interpolant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "SliderLerpUnclamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(*this, ___internal_method, a, b, interpolant);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline float_t UnityEngine::UIElements::BaseSlider_1<TValueType>::SliderNormalizeValue(TValueType  currentValue, TValueType  lowerValue, TValueType  higherValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "SliderNormalizeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(*this, ___internal_method, currentValue, lowerValue, higherValue);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::ParseStringToValue(::StringW  stringValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "ParseStringToValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(*this, ___internal_method, stringValue);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ComputeValueFromKey(::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>  sliderKey, bool  isShift)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "ComputeValueFromKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__BaseSlider_1__SliderKey<TValueType>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderKey, isShift);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline TValueType UnityEngine::UIElements::BaseSlider_1<TValueType>::SliderLerpDirectionalUnclamped(TValueType  a, TValueType  b, float_t  positionInterpolant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "SliderLerpDirectionalUnclamped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValueType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<TValueType, false>(*this, ___internal_method, a, b, positionInterpolant);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::SetSliderValueFromDrag()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "SetSliderValueFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ComputeValueAndDirectionFromDrag(float_t  sliderLength, float_t  dragElementLength, float_t  dragElementPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "ComputeValueAndDirectionFromDrag",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderLength, dragElementLength, dragElementPos);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::SetSliderValueFromClick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "SetSliderValueFromClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::OnKeyDown(::UnityEngine::UIElements::KeyDownEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "OnKeyDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::KeyDownEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ComputeValueAndDirectionFromClick(float_t  sliderLength, float_t  dragElementLength, float_t  dragElementPos, float_t  dragElementLastPos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "ComputeValueAndDirectionFromClick",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, sliderLength, dragElementLength, dragElementPos, dragElementLastPos);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::AdjustDragElement(float_t  factor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "AdjustDragElement",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, factor);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateDragElementPosition(::UnityEngine::UIElements::GeometryChangedEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::GeometryChangedEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::OnViewDataReady()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "OnViewDataReady",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline bool UnityEngine::UIElements::BaseSlider_1<TValueType>::SameValues(float_t  a, float_t  b, float_t  epsilon)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "SameValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, a, b, epsilon);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateDragElementPosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "UpdateDragElementPosition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "ExecuteDefaultAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateTextFieldVisibility()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "UpdateTextFieldVisibility",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateTextFieldValue()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "UpdateTextFieldValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::OnTextFieldFocusOut(::UnityEngine::UIElements::FocusOutEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "OnTextFieldFocusOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusOutEvent*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::OnTextFieldValueChange(::UnityEngine::UIElements::ChangeEvent_1<::StringW>*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "OnTextFieldValueChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ChangeEvent_1<::StringW>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, evt);
}
template<::il2cpp_utils::il2cpp_reference_type TValueType>
inline void UnityEngine::UIElements::BaseSlider_1<TValueType>::UpdateMixedValueContent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseSlider_1<TValueType>*>::get(),
                            "UpdateMixedValueContent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
