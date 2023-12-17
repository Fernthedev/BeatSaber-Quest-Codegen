#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__CustomizableEnvironmentCommandLineArgsProviderSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentCommandLineArgsProvider_def.hpp"
#include "GlobalNamespace/zzzz__ICommandLineArgsProvider_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO.GetCommandLineArgs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::*)()>(&::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::GetCommandLineArgs)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x2304f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get(),
                            "GetCommandLineArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::*)()>(&::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23050e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ICommandLineArgsProvider"
constexpr  GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::operator ::GlobalNamespace::ICommandLineArgsProvider*() noexcept {
return static_cast<::GlobalNamespace::ICommandLineArgsProvider*>(static_cast<void*>(this));
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__useCustomCommandLineArgs(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useCustomCommandLineArgs()  {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr bool const& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useCustomCommandLineArgs() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this);
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__useEnvironmentCommandLineArgs(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useEnvironmentCommandLineArgs()  {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr bool const& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__useEnvironmentCommandLineArgs() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this);
}
constexpr void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__set__customCommandLineArgs(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__customCommandLineArgs()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::__get__customCommandLineArgs() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
inline void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::setStaticF__environmentCommandLineArgsProvider(::GlobalNamespace::EnvironmentCommandLineArgsProvider*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::EnvironmentCommandLineArgsProvider*, "_environmentCommandLineArgsProvider", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get>(std::forward<::GlobalNamespace::EnvironmentCommandLineArgsProvider*>(value));
}
inline ::GlobalNamespace::EnvironmentCommandLineArgsProvider* GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::getStaticF__environmentCommandLineArgsProvider()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::EnvironmentCommandLineArgsProvider*, "_environmentCommandLineArgsProvider", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get>();
}
inline ::ArrayW<::StringW,::Array<::StringW>*> GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::GetCommandLineArgs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get(),
                            "GetCommandLineArgs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO* GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>());
}
inline void GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomizableEnvironmentCommandLineArgsProviderSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
