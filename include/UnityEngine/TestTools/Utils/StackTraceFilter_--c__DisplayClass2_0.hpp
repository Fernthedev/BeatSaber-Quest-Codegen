// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TestTools.Utils.StackTraceFilter
#include "UnityEngine/TestTools/Utils/StackTraceFilter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.TestTools.Utils
namespace UnityEngine::TestTools::Utils {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.Utils.StackTraceFilter/UnityEngine.TestTools.Utils.<>c__DisplayClass2_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class StackTraceFilter::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public System.String line
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* line;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass2_0
    $$c__DisplayClass2_0(::Il2CppString* line_ = {}) noexcept : line{line_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return line;
    }
    // Get instance field reference: public System.String line
    ::Il2CppString*& dyn_line();
    // System.Boolean <Filter>b__0(System.String s)
    // Offset: 0x24002F0
    bool $Filter$b__0(::Il2CppString* s);
    // public System.Void .ctor()
    // Offset: 0x2400108
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackTraceFilter::$$c__DisplayClass2_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackTraceFilter::$$c__DisplayClass2_0*, creationType>()));
    }
  }; // UnityEngine.TestTools.Utils.StackTraceFilter/UnityEngine.TestTools.Utils.<>c__DisplayClass2_0
  #pragma pack(pop)
  static check_size<sizeof(StackTraceFilter::$$c__DisplayClass2_0), 16 + sizeof(::Il2CppString*)> __UnityEngine_TestTools_Utils_StackTraceFilter_$$c__DisplayClass2_0SizeCheck;
  static_assert(sizeof(StackTraceFilter::$$c__DisplayClass2_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0*, "UnityEngine.TestTools.Utils", "StackTraceFilter/<>c__DisplayClass2_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::$Filter$b__0
// Il2CppName: <Filter>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::*)(::Il2CppString*)>(&UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::$Filter$b__0)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0*), "<Filter>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: UnityEngine::TestTools::Utils::StackTraceFilter::$$c__DisplayClass2_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
