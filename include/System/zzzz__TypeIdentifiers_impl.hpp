#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeNames_impl.hpp"
#include "System/zzzz__TypeIdentifiers_def.hpp"
#include "System/zzzz__TypeIdentifiers_def.hpp"
#include "System/zzzz__TypeIdentifier_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
//  Writing Method size for method: ::System::__TypeIdentifiers__Display._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TypeIdentifiers__Display::*)(::StringW)>(&::System::__TypeIdentifiers__Display::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26068d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeIdentifiers__Display.get_DisplayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::__TypeIdentifiers__Display::*)()>(&::System::__TypeIdentifiers__Display::get_DisplayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26068e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeIdentifiers__Display.get_InternalName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::__TypeIdentifiers__Display::*)()>(&::System::__TypeIdentifiers__Display::get_InternalName)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26068e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                            "get_InternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeIdentifiers__Display.GetInternalName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::__TypeIdentifiers__Display::*)()>(&::System::__TypeIdentifiers__Display::GetInternalName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2606910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                            "GetInternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::TypeIdentifier"
constexpr  System::__TypeIdentifiers__Display::operator ::System::TypeIdentifier*() noexcept {
return static_cast<::System::TypeIdentifier*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::TypeName"
constexpr  System::__TypeIdentifiers__Display::operator ::System::TypeName*() noexcept {
return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
constexpr  System::__TypeIdentifiers__Display::operator ::System::IEquatable_1<::System::TypeName*>*() noexcept {
return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
constexpr void System::__TypeIdentifiers__Display::__set_displayName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::__TypeIdentifiers__Display::__get_displayName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr ::StringW const& System::__TypeIdentifiers__Display::__get_displayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this);
}
constexpr void System::__TypeIdentifiers__Display::__set_internal_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::__TypeIdentifiers__Display::__get_internal_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::__TypeIdentifiers__Display::__get_internal_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline ::System::__TypeIdentifiers__Display* System::__TypeIdentifiers__Display::New_ctor(::StringW  displayName)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::__TypeIdentifiers__Display*>(displayName));
}
inline void System::__TypeIdentifiers__Display::_ctor(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, displayName);
}
inline ::StringW System::__TypeIdentifiers__Display::get_DisplayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                            "get_DisplayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::__TypeIdentifiers__Display::get_InternalName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                            "get_InternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW System::__TypeIdentifiers__Display::GetInternalName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeIdentifiers__Display*>::get(),
                            "GetInternalName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::System::TypeIdentifiers.FromDisplay
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeIdentifier* (*)(::StringW)>(&::System::TypeIdentifiers::FromDisplay)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2606884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers*>::get(),
                            "FromDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
inline ::System::TypeIdentifier* System::TypeIdentifiers::FromDisplay(::StringW  displayName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TypeIdentifiers*>::get(),
                            "FromDisplay",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::TypeIdentifier*, false>(nullptr, ___internal_method, displayName);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
