#pragma once
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__KeyControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.get_keyCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Key (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::get_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0b0b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                            "get_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.set_keyCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)(::UnityEngine::InputSystem::Key)>(&::UnityEngine::InputSystem::Controls::KeyControl::set_keyCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0b0bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                            "set_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.get_scanCode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::get_scanCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2b0b0c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                            "get_scanCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl.RefreshConfiguration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::RefreshConfiguration)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2b0b0e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::KeyControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::KeyControl::*)()>(&::UnityEngine::InputSystem::Controls::KeyControl::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2b0b250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::Controls::KeyControl::__set__keyCode_k__BackingField(::UnityEngine::InputSystem::Key  value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Key, 0x11c>(this, std::forward<::UnityEngine::InputSystem::Key>(value));
}
constexpr ::UnityEngine::InputSystem::Key& UnityEngine::InputSystem::Controls::KeyControl::__get__keyCode_k__BackingField()  {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Key, 0x11c>(this);
}
constexpr ::UnityEngine::InputSystem::Key const& UnityEngine::InputSystem::Controls::KeyControl::__get__keyCode_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Key, 0x11c>(this);
}
constexpr void UnityEngine::InputSystem::Controls::KeyControl::__set_m_ScanCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x120>(this, std::forward<int32_t>(value));
}
constexpr int32_t& UnityEngine::InputSystem::Controls::KeyControl::__get_m_ScanCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x120>(this);
}
constexpr int32_t const& UnityEngine::InputSystem::Controls::KeyControl::__get_m_ScanCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x120>(this);
}
inline ::UnityEngine::InputSystem::Key UnityEngine::InputSystem::Controls::KeyControl::get_keyCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                            "get_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Key, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::KeyControl::set_keyCode(::UnityEngine::InputSystem::Key  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                            "set_keyCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputSystem::Controls::KeyControl::get_scanCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                            "get_scanCode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(*this, ___internal_method);
}
inline void UnityEngine::InputSystem::Controls::KeyControl::RefreshConfiguration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                            "RefreshConfiguration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Controls::KeyControl::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Controls::KeyControl*>());
}
inline void UnityEngine::InputSystem::Controls::KeyControl::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::KeyControl*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
