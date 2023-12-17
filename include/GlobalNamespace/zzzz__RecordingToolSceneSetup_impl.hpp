#pragma once
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSceneSetup_def.hpp"
#include "GlobalNamespace/zzzz__RecordingToolSceneSetupData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSceneSetup.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSceneSetup::*)()>(&::GlobalNamespace::RecordingToolSceneSetup::InstallBindings)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x231c288;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSceneSetup*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSceneSetup*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecordingToolSceneSetup._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecordingToolSceneSetup::*)()>(&::GlobalNamespace::RecordingToolSceneSetup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231c34c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSceneSetup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RecordingToolSceneSetup::__set__sceneSetupData(::GlobalNamespace::RecordingToolSceneSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RecordingToolSceneSetupData*, 0x20>(this, std::forward<::GlobalNamespace::RecordingToolSceneSetupData*>(value));
}
constexpr ::GlobalNamespace::RecordingToolSceneSetupData* GlobalNamespace::RecordingToolSceneSetup::__get__sceneSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolSceneSetupData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RecordingToolSceneSetupData*> GlobalNamespace::RecordingToolSceneSetup::__get__sceneSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RecordingToolSceneSetupData*, 0x20>(this);
}
inline void GlobalNamespace::RecordingToolSceneSetup::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSceneSetup*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::RecordingToolSceneSetup* GlobalNamespace::RecordingToolSceneSetup::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::RecordingToolSceneSetup*>());
}
inline void GlobalNamespace::RecordingToolSceneSetup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecordingToolSceneSetup*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
