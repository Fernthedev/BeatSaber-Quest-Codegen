#pragma once
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
constexpr void UnityEngine::UI::__Navigation__Mode::__set_value__(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::UI::__Navigation__Mode::__get_value__()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& UnityEngine::UI::__Navigation__Mode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__Navigation__Mode::__Navigation__Mode(int32_t  value__) noexcept : ::bs_hook::EnumTypeWrapper<0x4>() {this->value__ = value__;
}
constexpr ::UnityEngine::UI::__Navigation__Mode  UnityEngine::UI::__Navigation__Mode::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UI::__Navigation__Mode  UnityEngine::UI::__Navigation__Mode::Horizontal{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::UI::__Navigation__Mode  UnityEngine::UI::__Navigation__Mode::Vertical{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::UI::__Navigation__Mode  UnityEngine::UI::__Navigation__Mode::Automatic{static_cast<int32_t>(0x3)};
constexpr ::UnityEngine::UI::__Navigation__Mode  UnityEngine::UI::__Navigation__Mode::Explicit{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__Navigation__Mode (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e02c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_mode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::__Navigation__Mode)>(&::UnityEngine::UI::Navigation::set_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e034;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Navigation__Mode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_wrapAround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_wrapAround)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_wrapAround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_wrapAround
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(bool)>(&::UnityEngine::UI::Navigation::set_wrapAround)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d7e044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_wrapAround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_selectOnUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_selectOnUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&::UnityEngine::UI::Navigation::set_selectOnUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_selectOnUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_selectOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_selectOnDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&::UnityEngine::UI::Navigation::set_selectOnDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_selectOnDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_selectOnLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e070;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_selectOnLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&::UnityEngine::UI::Navigation::set_selectOnLeft)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_selectOnLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_selectOnRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Selectable* (::UnityEngine::UI::Navigation::*)()>(&::UnityEngine::UI::Navigation::get_selectOnRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_selectOnRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.set_selectOnRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Selectable*)>(&::UnityEngine::UI::Navigation::set_selectOnRight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d7e088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_selectOnRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.get_defaultNavigation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Navigation (*)()>(&::UnityEngine::UI::Navigation::get_defaultNavigation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d7e090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_defaultNavigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Navigation.Equals
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Navigation::*)(::UnityEngine::UI::Navigation)>(&::UnityEngine::UI::Navigation::Equals)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2d7e0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Navigation>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UI::Navigation>"
constexpr  UnityEngine::UI::Navigation::operator ::System::IEquatable_1<::UnityEngine::UI::Navigation>*()  {
return static_cast<::System::IEquatable_1<::UnityEngine::UI::Navigation>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr void UnityEngine::UI::Navigation::__set_m_Mode(::UnityEngine::UI::__Navigation__Mode  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::__Navigation__Mode, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UI::__Navigation__Mode>(value));
}
constexpr ::UnityEngine::UI::__Navigation__Mode& UnityEngine::UI::Navigation::__get_m_Mode()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__Navigation__Mode, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::UnityEngine::UI::__Navigation__Mode const& UnityEngine::UI::Navigation::__get_m_Mode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::__Navigation__Mode, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_WrapAround(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<bool>(value));
}
constexpr bool& UnityEngine::UI::Navigation::__get_m_WrapAround()  {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr bool const& UnityEngine::UI::Navigation::__get_m_WrapAround() const {
return ::cordl_internals::getInstanceField<bool, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_SelectOnUp(::UnityEngine::UI::Selectable*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Selectable*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UI::Selectable*>(value));
}
constexpr ::UnityEngine::UI::Selectable* UnityEngine::UI::Navigation::__get_m_SelectOnUp()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Selectable*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Selectable*> UnityEngine::UI::Navigation::__get_m_SelectOnUp() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Selectable*, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_SelectOnDown(::UnityEngine::UI::Selectable*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Selectable*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UI::Selectable*>(value));
}
constexpr ::UnityEngine::UI::Selectable* UnityEngine::UI::Navigation::__get_m_SelectOnDown()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Selectable*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Selectable*> UnityEngine::UI::Navigation::__get_m_SelectOnDown() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Selectable*, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_SelectOnLeft(::UnityEngine::UI::Selectable*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Selectable*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UI::Selectable*>(value));
}
constexpr ::UnityEngine::UI::Selectable* UnityEngine::UI::Navigation::__get_m_SelectOnLeft()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Selectable*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Selectable*> UnityEngine::UI::Navigation::__get_m_SelectOnLeft() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Selectable*, 0x18>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void UnityEngine::UI::Navigation::__set_m_SelectOnRight(::UnityEngine::UI::Selectable*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::UI::Selectable*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::UnityEngine::UI::Selectable*>(value));
}
constexpr ::UnityEngine::UI::Selectable* UnityEngine::UI::Navigation::__get_m_SelectOnRight()  {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Selectable*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Selectable*> UnityEngine::UI::Navigation::__get_m_SelectOnRight() const {
return ::cordl_internals::getInstanceField<::UnityEngine::UI::Selectable*, 0x20>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::UnityEngine::UI::__Navigation__Mode UnityEngine::UI::Navigation::get_mode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__Navigation__Mode, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_mode(::UnityEngine::UI::__Navigation__Mode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_mode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__Navigation__Mode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline bool UnityEngine::UI::Navigation::get_wrapAround()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_wrapAround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_wrapAround(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_wrapAround",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Selectable* UnityEngine::UI::Navigation::get_selectOnUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_selectOnUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnUp(::UnityEngine::UI::Selectable*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_selectOnUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Selectable* UnityEngine::UI::Navigation::get_selectOnDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_selectOnDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnDown(::UnityEngine::UI::Selectable*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_selectOnDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Selectable* UnityEngine::UI::Navigation::get_selectOnLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_selectOnLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnLeft(::UnityEngine::UI::Selectable*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_selectOnLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Selectable* UnityEngine::UI::Navigation::get_selectOnRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_selectOnRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Selectable*, false>(*this, ___internal_method);
}
inline void UnityEngine::UI::Navigation::set_selectOnRight(::UnityEngine::UI::Selectable*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "set_selectOnRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Selectable*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline ::UnityEngine::UI::Navigation UnityEngine::UI::Navigation::get_defaultNavigation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "get_defaultNavigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Navigation, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::UI::Navigation::Equals(::UnityEngine::UI::Navigation  other)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Navigation>::get(),
                            "Equals",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Navigation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_Mode", ty: "::UnityEngine::UI::__Navigation__Mode", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_WrapAround", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_SelectOnUp", ty: "::UnityEngine::UI::Selectable*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_SelectOnDown", ty: "::UnityEngine::UI::Selectable*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_SelectOnLeft", ty: "::UnityEngine::UI::Selectable*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_SelectOnRight", ty: "::UnityEngine::UI::Selectable*", modifiers: "", def_value: Some("csnull") }]
constexpr ::UnityEngine::UI::Navigation::Navigation(::UnityEngine::UI::__Navigation__Mode  m_Mode, bool  m_WrapAround, ::UnityEngine::UI::Selectable*  m_SelectOnUp, ::UnityEngine::UI::Selectable*  m_SelectOnDown, ::UnityEngine::UI::Selectable*  m_SelectOnLeft, ::UnityEngine::UI::Selectable*  m_SelectOnRight) noexcept : ::bs_hook::ValueTypeWrapper<0x28>() {this->m_Mode = m_Mode;
this->m_WrapAround = m_WrapAround;
this->m_SelectOnUp = m_SelectOnUp;
this->m_SelectOnDown = m_SelectOnDown;
this->m_SelectOnLeft = m_SelectOnLeft;
this->m_SelectOnRight = m_SelectOnRight;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
