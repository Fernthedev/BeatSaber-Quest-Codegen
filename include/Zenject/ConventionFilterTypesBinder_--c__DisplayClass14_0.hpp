// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: Zenject.ConventionFilterTypesBinder/<>c__DisplayClass14_0
  // [CompilerGeneratedAttribute] Offset: DDD6FC
  class ConventionFilterTypesBinder::$$c__DisplayClass14_0 : public ::Il2CppObject {
    public:
    // public System.String suffix
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* suffix;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass14_0
    $$c__DisplayClass14_0(::Il2CppString* suffix_ = {}) noexcept : suffix{suffix_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return suffix;
    }
    // System.Boolean <WithSuffix>b__0(System.Type t)
    // Offset: 0x138FCA8
    bool $WithSuffix$b__0(System::Type* t);
    // public System.Void .ctor()
    // Offset: 0x138F8DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionFilterTypesBinder::$$c__DisplayClass14_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass14_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionFilterTypesBinder::$$c__DisplayClass14_0*, creationType>()));
    }
  }; // Zenject.ConventionFilterTypesBinder/<>c__DisplayClass14_0
  #pragma pack(pop)
  static check_size<sizeof(ConventionFilterTypesBinder::$$c__DisplayClass14_0), 16 + sizeof(::Il2CppString*)> __Zenject_ConventionFilterTypesBinder_$$c__DisplayClass14_0SizeCheck;
  static_assert(sizeof(ConventionFilterTypesBinder::$$c__DisplayClass14_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass14_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass14_0");
// Writing includes for template specializations
#include "System/Type.hpp"
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass14_0::$WithSuffix$b__0
// Il2CppName: <WithSuffix>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionFilterTypesBinder::$$c__DisplayClass14_0::*)(System::Type*)>(&Zenject::ConventionFilterTypesBinder::$$c__DisplayClass14_0::$WithSuffix$b__0)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass14_0*), "<WithSuffix>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<System::Type*>()});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionFilterTypesBinder::$$c__DisplayClass14_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
