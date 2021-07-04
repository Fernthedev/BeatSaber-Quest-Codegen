// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
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
// Type namespace: Mono.Util
namespace Mono::Util {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Util.MonoPInvokeCallbackAttribute
  // [ConditionalAttribute] Offset: D87098
  // [ConditionalAttribute] Offset: D87098
  // [ConditionalAttribute] Offset: D87098
  // [AttributeUsageAttribute] Offset: D87098
  class MonoPInvokeCallbackAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: MonoPInvokeCallbackAttribute
    MonoPInvokeCallbackAttribute() noexcept {}
    // public System.Void .ctor(System.Type t)
    // Offset: 0x18613B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoPInvokeCallbackAttribute* New_ctor(System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Util::MonoPInvokeCallbackAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoPInvokeCallbackAttribute*, creationType>(t)));
    }
  }; // Mono.Util.MonoPInvokeCallbackAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Util::MonoPInvokeCallbackAttribute*, "Mono.Util", "MonoPInvokeCallbackAttribute");
// Writing includes for template specializations
#include "System/Type.hpp"
// Writing MetadataGetter for method: Mono::Util::MonoPInvokeCallbackAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
