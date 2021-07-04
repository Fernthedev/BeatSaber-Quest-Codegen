// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TimeUtility
#include "UnityEngine/Timeline/TimeUtility.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimeUtility/<>c
  // [CompilerGeneratedAttribute] Offset: DD79C4
  class TimeUtility::$$c : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: $$c
    $$c() noexcept {}
    // Get static field: static public readonly UnityEngine.Timeline.TimeUtility/<>c <>9
    static UnityEngine::Timeline::TimeUtility::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Timeline.TimeUtility/<>c <>9
    static void _set_$$9(UnityEngine::Timeline::TimeUtility::$$c* value);
    // Get static field: static public System.Func`2<System.Char,System.Boolean> <>9__14_0
    static System::Func_2<::Il2CppChar, bool>* _get_$$9__14_0();
    // Set static field: static public System.Func`2<System.Char,System.Boolean> <>9__14_0
    static void _set_$$9__14_0(System::Func_2<::Il2CppChar, bool>* value);
    // Get static field: static public System.Func`2<System.Char,System.Boolean> <>9__14_1
    static System::Func_2<::Il2CppChar, bool>* _get_$$9__14_1();
    // Set static field: static public System.Func`2<System.Char,System.Boolean> <>9__14_1
    static void _set_$$9__14_1(System::Func_2<::Il2CppChar, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x17E9208
    static void _cctor();
    // System.Boolean <ParseTimeCode>b__14_0(System.Char c)
    // Offset: 0x17E9274
    bool $ParseTimeCode$b__14_0(::Il2CppChar c);
    // System.Boolean <ParseTimeCode>b__14_1(System.Char c)
    // Offset: 0x17E92DC
    bool $ParseTimeCode$b__14_1(::Il2CppChar c);
    // public System.Void .ctor()
    // Offset: 0x17E926C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeUtility::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::TimeUtility::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeUtility::$$c*, creationType>()));
    }
  }; // UnityEngine.Timeline.TimeUtility/<>c
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimeUtility::$$c*, "UnityEngine.Timeline", "TimeUtility/<>c");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TimeUtility::$$c::_cctor)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::$$c::$ParseTimeCode$b__14_0
// Il2CppName: <ParseTimeCode>b__14_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimeUtility::$$c::*)(::Il2CppChar)>(&UnityEngine::Timeline::TimeUtility::$$c::$ParseTimeCode$b__14_0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility::$$c*), "<ParseTimeCode>b__14_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::$$c::$ParseTimeCode$b__14_1
// Il2CppName: <ParseTimeCode>b__14_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimeUtility::$$c::*)(::Il2CppChar)>(&UnityEngine::Timeline::TimeUtility::$$c::$ParseTimeCode$b__14_1)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimeUtility::$$c*), "<ParseTimeCode>b__14_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppChar>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimeUtility::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
