// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: TimeType
  class TimeType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::TimeType);
DEFINE_IL2CPP_ARG_TYPE(::System::TimeType*, "System", "TimeType");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.TimeType
  // [TokenAttribute] Offset: FFFFFFFF
  class TimeType : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Int32 Offset
    // Size: 0x4
    // Offset: 0x10
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Boolean IsDst
    // Size: 0x1
    // Offset: 0x14
    bool IsDst;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsDst and: Name
    char __padding1[0x3] = {};
    // public System.String Name
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public readonly System.Int32 Offset
    [[deprecated("Use field access instead!")]] int& dyn_Offset();
    // Get instance field reference: public readonly System.Boolean IsDst
    [[deprecated("Use field access instead!")]] bool& dyn_IsDst();
    // Get instance field reference: public System.String Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Name();
    // public System.Void .ctor(System.Int32 offset, System.Boolean is_dst, System.String abbrev)
    // Offset: 0x1D4673C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimeType* New_ctor(int offset, bool is_dst, ::StringW abbrev) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::TimeType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimeType*, creationType>(offset, is_dst, abbrev)));
    }
    // public override System.String ToString()
    // Offset: 0x1D46784
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.TimeType
  #pragma pack(pop)
  static check_size<sizeof(TimeType), 24 + sizeof(::StringW)> __System_TimeTypeSizeCheck;
  static_assert(sizeof(TimeType) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TimeType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::TimeType::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TimeType::*)()>(&System::TimeType::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TimeType*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
