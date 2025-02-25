// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.AssemblyKeyFileAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: DA0B9C
  // [ComVisibleAttribute] Offset: DA0B9C
  class AssemblyKeyFileAttribute : public System::Attribute {
    public:
    // private System.String m_keyFile
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_keyFile;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: AssemblyKeyFileAttribute
    AssemblyKeyFileAttribute(::Il2CppString* m_keyFile_ = {}) noexcept : m_keyFile{m_keyFile_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_keyFile;
    }
    // Get instance field reference: private System.String m_keyFile
    ::Il2CppString*& dyn_m_keyFile();
    // public System.Void .ctor(System.String keyFile)
    // Offset: 0x1D150B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyKeyFileAttribute* New_ctor(::Il2CppString* keyFile) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::AssemblyKeyFileAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyKeyFileAttribute*, creationType>(keyFile)));
    }
  }; // System.Reflection.AssemblyKeyFileAttribute
  #pragma pack(pop)
  static check_size<sizeof(AssemblyKeyFileAttribute), 16 + sizeof(::Il2CppString*)> __System_Reflection_AssemblyKeyFileAttributeSizeCheck;
  static_assert(sizeof(AssemblyKeyFileAttribute) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyKeyFileAttribute*, "System.Reflection", "AssemblyKeyFileAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::AssemblyKeyFileAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
