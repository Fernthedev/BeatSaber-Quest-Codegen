#pragma once
#include "GlobalNamespace/zzzz__SceneSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetupData.get_nextScenesTransitionSetupData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ScenesTransitionSetupDataSO* (::GlobalNamespace::HealthWarningSceneSetupData::*)()>(&::GlobalNamespace::HealthWarningSceneSetupData::get_nextScenesTransitionSetupData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231ccb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(),
                            "get_nextScenesTransitionSetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningSceneSetupData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningSceneSetupData::*)(::GlobalNamespace::ScenesTransitionSetupDataSO*)>(&::GlobalNamespace::HealthWarningSceneSetupData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x231ccb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::HealthWarningSceneSetupData::__set__nextScenesTransitionSetupData(::GlobalNamespace::ScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x10>(this, std::forward<::GlobalNamespace::ScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::HealthWarningSceneSetupData::__get__nextScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ScenesTransitionSetupDataSO*> GlobalNamespace::HealthWarningSceneSetupData::__get__nextScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ScenesTransitionSetupDataSO*, 0x10>(this);
}
inline ::GlobalNamespace::ScenesTransitionSetupDataSO* GlobalNamespace::HealthWarningSceneSetupData::get_nextScenesTransitionSetupData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(),
                            "get_nextScenesTransitionSetupData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScenesTransitionSetupDataSO*, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningSceneSetupData* GlobalNamespace::HealthWarningSceneSetupData::New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData)  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HealthWarningSceneSetupData*>(nextScenesTransitionSetupData));
}
inline void GlobalNamespace::HealthWarningSceneSetupData::_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO*  nextScenesTransitionSetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningSceneSetupData*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, nextScenesTransitionSetupData);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
