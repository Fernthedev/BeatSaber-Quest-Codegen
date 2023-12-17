#pragma once
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::*)()>(&::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x231ce94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::__set_appInitScenesTransitionSetupData(::GlobalNamespace::AppInitScenesTransitionSetupDataSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*, 0x18>(this, std::forward<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*>(value));
}
constexpr ::GlobalNamespace::AppInitScenesTransitionSetupDataSO* GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::__get_appInitScenesTransitionSetupData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*> GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::__get_appInitScenesTransitionSetupData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::AppInitScenesTransitionSetupDataSO*, 0x18>(this);
}
inline ::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO* GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>());
}
inline void GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
