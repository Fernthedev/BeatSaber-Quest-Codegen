#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__ValidationResult_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoSslPolicyErrors_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::ValidationResult._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::ValidationResult::*)(bool, bool, int32_t, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>)>(&::Mono::Security::Interface::ValidationResult::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2402a68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::ValidationResult.get_Trusted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::ValidationResult::*)()>(&::Mono::Security::Interface::ValidationResult::get_Trusted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2402ab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                            "get_Trusted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::ValidationResult.get_UserDenied
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::Interface::ValidationResult::*)()>(&::Mono::Security::Interface::ValidationResult::get_UserDenied)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2402ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                            "get_UserDenied",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void Mono::Security::Interface::ValidationResult::__set_trusted(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::Interface::ValidationResult::__get_trusted()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& Mono::Security::Interface::ValidationResult::__get_trusted() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void Mono::Security::Interface::ValidationResult::__set_user_denied(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& Mono::Security::Interface::ValidationResult::__get_user_denied()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& Mono::Security::Interface::ValidationResult::__get_user_denied() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr void Mono::Security::Interface::ValidationResult::__set_error_code(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Mono::Security::Interface::ValidationResult::__get_error_code()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& Mono::Security::Interface::ValidationResult::__get_error_code() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void Mono::Security::Interface::ValidationResult::__set_policy_errors(::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>  value)  {
::cordl_internals::setInstanceField<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>, 0x18>(this, std::forward<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>>(value));
}
constexpr ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>& Mono::Security::Interface::ValidationResult::__get_policy_errors()  {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>, 0x18>(this);
}
constexpr ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors> const& Mono::Security::Interface::ValidationResult::__get_policy_errors() const {
return ::cordl_internals::getInstanceField<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>, 0x18>(this);
}
inline ::Mono::Security::Interface::ValidationResult* Mono::Security::Interface::ValidationResult::New_ctor(bool  trusted, bool  user_denied, int32_t  error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>  policy_errors)  {
return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Interface::ValidationResult*>(trusted, user_denied, error_code, policy_errors));
}
inline void Mono::Security::Interface::ValidationResult::_ctor(bool  trusted, bool  user_denied, int32_t  error_code, ::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>  policy_errors)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::Mono::Security::Interface::MonoSslPolicyErrors>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, trusted, user_denied, error_code, policy_errors);
}
inline bool Mono::Security::Interface::ValidationResult::get_Trusted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                            "get_Trusted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline bool Mono::Security::Interface::ValidationResult::get_UserDenied()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::ValidationResult*>::get(),
                            "get_UserDenied",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
