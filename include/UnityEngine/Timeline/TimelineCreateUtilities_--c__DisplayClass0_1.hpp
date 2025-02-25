// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TimelineCreateUtilities
#include "UnityEngine/Timeline/TimelineCreateUtilities.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineCreateUtilities/UnityEngine.Timeline.<>c__DisplayClass0_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TimelineCreateUtilities::$$c__DisplayClass0_1 : public ::Il2CppObject {
    public:
    // public System.String result
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* result;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_1
    $$c__DisplayClass0_1(::Il2CppString* result_ = {}) noexcept : result{result_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return result;
    }
    // Get instance field reference: public System.String result
    ::Il2CppString*& dyn_result();
    // System.Boolean <GenerateUniqueActorName>b__1(UnityEngine.ScriptableObject x)
    // Offset: 0x2368D54
    bool $GenerateUniqueActorName$b__1(UnityEngine::ScriptableObject* x);
    // public System.Void .ctor()
    // Offset: 0x23688D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineCreateUtilities::$$c__DisplayClass0_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineCreateUtilities::$$c__DisplayClass0_1*, creationType>()));
    }
  }; // UnityEngine.Timeline.TimelineCreateUtilities/UnityEngine.Timeline.<>c__DisplayClass0_1
  #pragma pack(pop)
  static check_size<sizeof(TimelineCreateUtilities::$$c__DisplayClass0_1), 16 + sizeof(::Il2CppString*)> __UnityEngine_Timeline_TimelineCreateUtilities_$$c__DisplayClass0_1SizeCheck;
  static_assert(sizeof(TimelineCreateUtilities::$$c__DisplayClass0_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_1*, "UnityEngine.Timeline", "TimelineCreateUtilities/<>c__DisplayClass0_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_1::$GenerateUniqueActorName$b__1
// Il2CppName: <GenerateUniqueActorName>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_1::*)(UnityEngine::ScriptableObject*)>(&UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_1::$GenerateUniqueActorName$b__1)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScriptableObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_1*), "<GenerateUniqueActorName>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
