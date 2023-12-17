#pragma once
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolInstallerSO_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolResourceContainerSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolInstallerSO.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolInstallerSO::*)()>(&::GlobalNamespace::RecordingToolInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2307f30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolInstallerSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolInstallerSO*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolInstallerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolInstallerSO::*)()>(&::GlobalNamespace::RecordingToolInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2308114;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolInstallerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RecordingToolInstallerSO::__set__recordingToolResourceContainer(::GlobalNamespace::RecordingToolResourceContainerSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolResourceContainerSO*, 0x20>(this, std::forward<::GlobalNamespace::RecordingToolResourceContainerSO*>(value));
}
constexpr ::GlobalNamespace::RecordingToolResourceContainerSO* GlobalNamespace::RecordingToolInstallerSO::__get__recordingToolResourceContainer()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolResourceContainerSO*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolResourceContainerSO*> GlobalNamespace::RecordingToolInstallerSO::__get__recordingToolResourceContainer() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolResourceContainerSO*, 0x20>(this);
}
inline void GlobalNamespace::RecordingToolInstallerSO::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolInstallerSO*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolInstallerSO* GlobalNamespace::RecordingToolInstallerSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingToolInstallerSO*>());
}
inline void GlobalNamespace::RecordingToolInstallerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolInstallerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
