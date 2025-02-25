// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConventionFilterTypesBinder
#include "Zenject/ConventionFilterTypesBinder.hpp"
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
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass4_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConventionFilterTypesBinder::$$c__DisplayClass4_0 : public ::Il2CppObject {
    public:
    // public System.Type parentType
    // Size: 0x8
    // Offset: 0x10
    System::Type* parentType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass4_0
    $$c__DisplayClass4_0(System::Type* parentType_ = {}) noexcept : parentType{parentType_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return parentType;
    }
    // Get instance field reference: public System.Type parentType
    System::Type*& dyn_parentType();
    // System.Boolean <DerivingFrom>b__0(System.Type type)
    // Offset: 0x13E9540
    bool $DerivingFrom$b__0(System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x13E8BB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionFilterTypesBinder::$$c__DisplayClass4_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass4_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionFilterTypesBinder::$$c__DisplayClass4_0*, creationType>()));
    }
  }; // Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass4_0
  #pragma pack(pop)
  static check_size<sizeof(ConventionFilterTypesBinder::$$c__DisplayClass4_0), 16 + sizeof(System::Type*)> __Zenject_ConventionFilterTypesBinder_$$c__DisplayClass4_0SizeCheck;
  static_assert(sizeof(ConventionFilterTypesBinder::$$c__DisplayClass4_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass4_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass4_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass4_0::$DerivingFrom$b__0
// Il2CppName: <DerivingFrom>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionFilterTypesBinder::$$c__DisplayClass4_0::*)(System::Type*)>(&Zenject::ConventionFilterTypesBinder::$$c__DisplayClass4_0::$DerivingFrom$b__0)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass4_0*), "<DerivingFrom>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass4_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
