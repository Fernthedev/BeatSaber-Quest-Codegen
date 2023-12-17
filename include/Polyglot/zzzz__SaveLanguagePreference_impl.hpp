#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Polyglot/zzzz__SaveLanguagePreference_def.hpp"
#include "Polyglot/zzzz__ILocalize_def.hpp"
//  Writing Method size for method: ::Polyglot::SaveLanguagePreference.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::SaveLanguagePreference::*)()>(&::Polyglot::SaveLanguagePreference::Start)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x28060e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::SaveLanguagePreference.OnLocalize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::SaveLanguagePreference::*)()>(&::Polyglot::SaveLanguagePreference::OnLocalize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2806130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(),
                            "OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Polyglot::SaveLanguagePreference._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Polyglot::SaveLanguagePreference::*)()>(&::Polyglot::SaveLanguagePreference::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2806158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Polyglot::ILocalize"
constexpr  Polyglot::SaveLanguagePreference::operator ::Polyglot::ILocalize*() noexcept {
return static_cast<::Polyglot::ILocalize*>(static_cast<void*>(this));
}
constexpr void Polyglot::SaveLanguagePreference::__set_preferenceKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Polyglot::SaveLanguagePreference::__get_preferenceKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Polyglot::SaveLanguagePreference::__get_preferenceKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
inline void Polyglot::SaveLanguagePreference::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void Polyglot::SaveLanguagePreference::OnLocalize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(),
                            "OnLocalize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::Polyglot::SaveLanguagePreference* Polyglot::SaveLanguagePreference::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::Polyglot::SaveLanguagePreference*>());
}
inline void Polyglot::SaveLanguagePreference::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Polyglot::SaveLanguagePreference*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
