// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.IInterval
  class IInterval {
    public:
    // Creating value type constructor for type: IInterval
    IInterval() noexcept {}
    // public System.Int64 get_intervalStart()
    // Offset: 0xFFFFFFFF
    int64_t get_intervalStart();
    // public System.Int64 get_intervalEnd()
    // Offset: 0xFFFFFFFF
    int64_t get_intervalEnd();
  }; // UnityEngine.Timeline.IInterval
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::IInterval*, "UnityEngine.Timeline", "IInterval");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::Timeline::IInterval::get_intervalStart
// Il2CppName: get_intervalStart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::IInterval::*)()>(&UnityEngine::Timeline::IInterval::get_intervalStart)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IInterval*), "get_intervalStart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::IInterval::get_intervalEnd
// Il2CppName: get_intervalEnd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (UnityEngine::Timeline::IInterval::*)()>(&UnityEngine::Timeline::IInterval::get_intervalEnd)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::IInterval*), "get_intervalEnd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
