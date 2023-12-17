#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstallerRegistry_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry.AddMonoInstaller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)(::Zenject::MonoInstaller*)>(&::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddMonoInstaller)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe23c34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(),
                            "AddMonoInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MonoInstaller*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry.AddScriptableObjectInstaller
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)(::Zenject::ScriptableObjectInstaller*)>(&::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddScriptableObjectInstaller)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xe23cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(),
                            "AddScriptableObjectInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ScriptableObjectInstaller*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::*)()>(&::BGLib::AppFlow::Initialization::AsyncInstallerRegistry::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xe23d84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry"
constexpr  BGLib::AppFlow::Initialization::AsyncInstallerRegistry::operator ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*() noexcept {
return static_cast<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>(static_cast<void*>(this));
}
constexpr void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__set_monoInstallers(::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*, 0x10>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>* BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__get_monoInstallers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*> BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__get_monoInstallers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::MonoInstaller*>*, 0x10>(this);
}
constexpr void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__set_scriptableObjectInstallers(::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*, 0x18>(this, std::forward<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*>(value));
}
constexpr ::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>* BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__get_scriptableObjectInstallers()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*> BGLib::AppFlow::Initialization::AsyncInstallerRegistry::__get_scriptableObjectInstallers() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::List_1<::Zenject::ScriptableObjectInstaller*>*, 0x18>(this);
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddMonoInstaller(::Zenject::MonoInstaller*  newMonoInstaller)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(),
                            "AddMonoInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MonoInstaller*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newMonoInstaller);
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::AddScriptableObjectInstaller(::Zenject::ScriptableObjectInstaller*  newScriptableObjectInstaller)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(),
                            "AddScriptableObjectInstaller",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ScriptableObjectInstaller*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, newScriptableObjectInstaller);
}
inline ::BGLib::AppFlow::Initialization::AsyncInstallerRegistry* BGLib::AppFlow::Initialization::AsyncInstallerRegistry::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>());
}
inline void BGLib::AppFlow::Initialization::AsyncInstallerRegistry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::Initialization::AsyncInstallerRegistry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
