#pragma once
#include "Zenject/zzzz__ScriptableObjectInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformInstallerSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitSetupData_def.hpp"
#include "GlobalNamespace/zzzz__SonyAchievementIdsModelSO_def.hpp"
#include "GlobalNamespace/zzzz__MockPlatformAdditionalContentModelInitialDataSO_def.hpp"
#include "GlobalNamespace/zzzz__AchievementIdsModelSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlatformInstallerSO.InstallBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstallerSO::*)()>(&::GlobalNamespace::PlatformInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2229a34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformInstallerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformInstallerSO::*)()>(&::GlobalNamespace::PlatformInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2229ac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PlatformInstallerSO::__set__setupData(::GlobalNamespace::AppInitSetupData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppInitSetupData*, 0x20>(this, std::forward<::GlobalNamespace::AppInitSetupData*>(value));
}
constexpr ::GlobalNamespace::AppInitSetupData* GlobalNamespace::PlatformInstallerSO::__get__setupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitSetupData*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitSetupData*> GlobalNamespace::PlatformInstallerSO::__get__setupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitSetupData*, 0x20>(this);
}
constexpr void GlobalNamespace::PlatformInstallerSO::__set__ps4AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x28>(this, std::forward<::GlobalNamespace::SonyAchievementIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::SonyAchievementIdsModelSO* GlobalNamespace::PlatformInstallerSO::__get__ps4AchievementIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> GlobalNamespace::PlatformInstallerSO::__get__ps4AchievementIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x28>(this);
}
constexpr void GlobalNamespace::PlatformInstallerSO::__set__ps5AchievementIdsModel(::GlobalNamespace::SonyAchievementIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x30>(this, std::forward<::GlobalNamespace::SonyAchievementIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::SonyAchievementIdsModelSO* GlobalNamespace::PlatformInstallerSO::__get__ps5AchievementIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SonyAchievementIdsModelSO*> GlobalNamespace::PlatformInstallerSO::__get__ps5AchievementIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SonyAchievementIdsModelSO*, 0x30>(this);
}
constexpr void GlobalNamespace::PlatformInstallerSO::__set__achievementIdsModel(::GlobalNamespace::AchievementIdsModelSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AchievementIdsModelSO*, 0x38>(this, std::forward<::GlobalNamespace::AchievementIdsModelSO*>(value));
}
constexpr ::GlobalNamespace::AchievementIdsModelSO* GlobalNamespace::PlatformInstallerSO::__get__achievementIdsModel()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AchievementIdsModelSO*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AchievementIdsModelSO*> GlobalNamespace::PlatformInstallerSO::__get__achievementIdsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AchievementIdsModelSO*, 0x38>(this);
}
constexpr void GlobalNamespace::PlatformInstallerSO::__set__mockPlatformAdditionalContentModelInitialData(::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*, 0x40>(this, std::forward<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*>(value));
}
constexpr ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* GlobalNamespace::PlatformInstallerSO::__get__mockPlatformAdditionalContentModelInitialData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*> GlobalNamespace::PlatformInstallerSO::__get__mockPlatformAdditionalContentModelInitialData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO*, 0x40>(this);
}
inline void GlobalNamespace::PlatformInstallerSO::InstallBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(),
                            "InstallBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::PlatformInstallerSO* GlobalNamespace::PlatformInstallerSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlatformInstallerSO*>());
}
inline void GlobalNamespace::PlatformInstallerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformInstallerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
