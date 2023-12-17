#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeNameGenerator_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodesManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodeNameGenerator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionNodeNameGenerator::*)()>(&::GlobalNamespace::MissionNodeNameGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a088c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeNameGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionNodeNameGenerator::__set__missionNodesManager(::GlobalNamespace::MissionNodesManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionNodesManager*, 0x18>(this, std::forward<::GlobalNamespace::MissionNodesManager*>(value));
}
constexpr ::GlobalNamespace::MissionNodesManager* GlobalNamespace::MissionNodeNameGenerator::__get__missionNodesManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionNodesManager*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodesManager*> GlobalNamespace::MissionNodeNameGenerator::__get__missionNodesManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionNodesManager*, 0x18>(this);
}
inline ::GlobalNamespace::MissionNodeNameGenerator* GlobalNamespace::MissionNodeNameGenerator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionNodeNameGenerator*>());
}
inline void GlobalNamespace::MissionNodeNameGenerator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeNameGenerator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
