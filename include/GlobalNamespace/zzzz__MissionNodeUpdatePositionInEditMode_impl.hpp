#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionNodeUpdatePositionInEditMode_def.hpp"
#include "GlobalNamespace/zzzz__MissionNodeConnection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionNodeUpdatePositionInEditMode._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionNodeUpdatePositionInEditMode::*)()>(&::GlobalNamespace::MissionNodeUpdatePositionInEditMode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a1d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeUpdatePositionInEditMode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MissionNodeUpdatePositionInEditMode::__set__missionNodeConnection(::GlobalNamespace::MissionNodeConnection*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MissionNodeConnection*, 0x18>(this, std::forward<::GlobalNamespace::MissionNodeConnection*>(value));
}
constexpr ::GlobalNamespace::MissionNodeConnection* GlobalNamespace::MissionNodeUpdatePositionInEditMode::__get__missionNodeConnection()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionNodeConnection*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeConnection*> GlobalNamespace::MissionNodeUpdatePositionInEditMode::__get__missionNodeConnection() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MissionNodeConnection*, 0x18>(this);
}
inline ::GlobalNamespace::MissionNodeUpdatePositionInEditMode* GlobalNamespace::MissionNodeUpdatePositionInEditMode::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MissionNodeUpdatePositionInEditMode*>());
}
inline void GlobalNamespace::MissionNodeUpdatePositionInEditMode::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionNodeUpdatePositionInEditMode*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
