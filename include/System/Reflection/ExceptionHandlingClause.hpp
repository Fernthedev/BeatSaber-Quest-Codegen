// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.ExceptionHandlingClauseOptions
#include "System/Reflection/ExceptionHandlingClauseOptions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.ExceptionHandlingClause
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DA1518
  class ExceptionHandlingClause : public ::Il2CppObject {
    public:
    // System.Type catch_type
    // Size: 0x8
    // Offset: 0x10
    System::Type* catch_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Int32 filter_offset
    // Size: 0x4
    // Offset: 0x18
    int filter_offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Reflection.ExceptionHandlingClauseOptions flags
    // Size: 0x4
    // Offset: 0x1C
    System::Reflection::ExceptionHandlingClauseOptions flags;
    // Field size check
    static_assert(sizeof(System::Reflection::ExceptionHandlingClauseOptions) == 0x4);
    // System.Int32 try_offset
    // Size: 0x4
    // Offset: 0x20
    int try_offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 try_length
    // Size: 0x4
    // Offset: 0x24
    int try_length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 handler_offset
    // Size: 0x4
    // Offset: 0x28
    int handler_offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 handler_length
    // Size: 0x4
    // Offset: 0x2C
    int handler_length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ExceptionHandlingClause
    ExceptionHandlingClause(System::Type* catch_type_ = {}, int filter_offset_ = {}, System::Reflection::ExceptionHandlingClauseOptions flags_ = {}, int try_offset_ = {}, int try_length_ = {}, int handler_offset_ = {}, int handler_length_ = {}) noexcept : catch_type{catch_type_}, filter_offset{filter_offset_}, flags{flags_}, try_offset{try_offset_}, try_length{try_length_}, handler_offset{handler_offset_}, handler_length{handler_length_} {}
    // Get instance field reference: System.Type catch_type
    System::Type*& dyn_catch_type();
    // Get instance field reference: System.Int32 filter_offset
    int& dyn_filter_offset();
    // Get instance field reference: System.Reflection.ExceptionHandlingClauseOptions flags
    System::Reflection::ExceptionHandlingClauseOptions& dyn_flags();
    // Get instance field reference: System.Int32 try_offset
    int& dyn_try_offset();
    // Get instance field reference: System.Int32 try_length
    int& dyn_try_length();
    // Get instance field reference: System.Int32 handler_offset
    int& dyn_handler_offset();
    // Get instance field reference: System.Int32 handler_length
    int& dyn_handler_length();
    // protected System.Void .ctor()
    // Offset: 0x1D1B728
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ExceptionHandlingClause* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::ExceptionHandlingClause::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ExceptionHandlingClause*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1D1B72C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Reflection.ExceptionHandlingClause
  #pragma pack(pop)
  static check_size<sizeof(ExceptionHandlingClause), 44 + sizeof(int)> __System_Reflection_ExceptionHandlingClauseSizeCheck;
  static_assert(sizeof(ExceptionHandlingClause) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::ExceptionHandlingClause*, "System.Reflection", "ExceptionHandlingClause");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::ExceptionHandlingClause::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::ExceptionHandlingClause::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Reflection::ExceptionHandlingClause::*)()>(&System::Reflection::ExceptionHandlingClause::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::ExceptionHandlingClause*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
