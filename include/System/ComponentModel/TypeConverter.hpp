// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.TypeConverter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: DACCDC
  class TypeConverter : public ::Il2CppObject {
    public:
    // Nested type: System::ComponentModel::TypeConverter::StandardValuesCollection
    class StandardValuesCollection;
    // Creating value type constructor for type: TypeConverter
    TypeConverter() noexcept {}
    // static field const value: static private System.String s_UseCompatibleTypeConverterBehavior
    static constexpr const char* s_UseCompatibleTypeConverterBehavior = "UseCompatibleTypeConverterBehavior";
    // Get static field: static private System.String s_UseCompatibleTypeConverterBehavior
    static ::Il2CppString* _get_s_UseCompatibleTypeConverterBehavior();
    // Set static field: static private System.String s_UseCompatibleTypeConverterBehavior
    static void _set_s_UseCompatibleTypeConverterBehavior(::Il2CppString* value);
    // Get static field: static private System.Boolean useCompatibleTypeConversion
    static bool _get_useCompatibleTypeConversion();
    // Set static field: static private System.Boolean useCompatibleTypeConversion
    static void _set_useCompatibleTypeConversion(bool value);
    // public System.Void .ctor()
    // Offset: 0x18B561C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeConverter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ComponentModel::TypeConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeConverter*, creationType>()));
    }
  }; // System.ComponentModel.TypeConverter
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeConverter*, "System.ComponentModel", "TypeConverter");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::TypeConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
