// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Runtime.CompilerServices.CompilationRelaxations
#include "System/Runtime/CompilerServices/CompilationRelaxations.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: CompilationRelaxationsAttribute
  class CompilationRelaxationsAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::CompilationRelaxationsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CompilationRelaxationsAttribute*, "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.CompilationRelaxationsAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 104480C
  // [AttributeUsageAttribute] Offset: 104480C
  class CompilationRelaxationsAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Int32 m_relaxations
    // Size: 0x4
    // Offset: 0x10
    int m_relaxations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_relaxations;
    }
    // Get instance field reference: private System.Int32 m_relaxations
    [[deprecated("Use field access instead!")]] int& dyn_m_relaxations();
    // public System.Int32 get_CompilationRelaxations()
    // Offset: 0x1D79F44
    int get_CompilationRelaxations();
    // public System.Void .ctor(System.Int32 relaxations)
    // Offset: 0x1D79EEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompilationRelaxationsAttribute* New_ctor(int relaxations) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompilationRelaxationsAttribute*, creationType>(relaxations)));
    }
    // public System.Void .ctor(System.Runtime.CompilerServices.CompilationRelaxations relaxations)
    // Offset: 0x1D79F18
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CompilationRelaxationsAttribute* New_ctor(::System::Runtime::CompilerServices::CompilationRelaxations relaxations) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CompilationRelaxationsAttribute*, creationType>(relaxations)));
    }
  }; // System.Runtime.CompilerServices.CompilationRelaxationsAttribute
  #pragma pack(pop)
  static check_size<sizeof(CompilationRelaxationsAttribute), 16 + sizeof(int)> __System_Runtime_CompilerServices_CompilationRelaxationsAttributeSizeCheck;
  static_assert(sizeof(CompilationRelaxationsAttribute) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CompilationRelaxationsAttribute::get_CompilationRelaxations
// Il2CppName: get_CompilationRelaxations
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::CompilerServices::CompilationRelaxationsAttribute::*)()>(&System::Runtime::CompilerServices::CompilationRelaxationsAttribute::get_CompilationRelaxations)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::CompilationRelaxationsAttribute*), "get_CompilationRelaxations", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CompilationRelaxationsAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CompilationRelaxationsAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
