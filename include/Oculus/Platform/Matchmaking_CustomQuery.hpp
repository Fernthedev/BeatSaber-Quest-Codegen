// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Matchmaking
#include "Oculus/Platform/Matchmaking.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Oculus.Platform.MatchmakingCriterionImportance
#include "Oculus/Platform/MatchmakingCriterionImportance.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Matchmaking::CustomQuery);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Matchmaking::CustomQuery*, "Oculus.Platform", "Matchmaking/CustomQuery");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Matchmaking/Oculus.Platform.CustomQuery
  // [TokenAttribute] Offset: FFFFFFFF
  class Matchmaking::CustomQuery : public ::Il2CppObject {
    public:
    // Nested type: ::Oculus::Platform::Matchmaking::CustomQuery::Criterion
    struct Criterion;
    // Size: 0x18
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Oculus.Platform.Matchmaking/Oculus.Platform.CustomQuery/Oculus.Platform.Criterion
    // [TokenAttribute] Offset: FFFFFFFF
    struct Criterion/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.String key
      // Size: 0x8
      // Offset: 0x0
      ::StringW key;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public Oculus.Platform.MatchmakingCriterionImportance importance
      // Size: 0x4
      // Offset: 0x8
      ::Oculus::Platform::MatchmakingCriterionImportance importance;
      // Field size check
      static_assert(sizeof(::Oculus::Platform::MatchmakingCriterionImportance) == 0x4);
      // Padding between fields: importance and: parameters
      char __padding1[0x4] = {};
      // public System.Collections.Generic.Dictionary`2<System.String,System.Object> parameters
      // Size: 0x8
      // Offset: 0x10
      ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* parameters;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*) == 0x8);
      public:
      // Creating value type constructor for type: Criterion
      constexpr Criterion(::StringW key_ = {}, ::Oculus::Platform::MatchmakingCriterionImportance importance_ = {}, ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* parameters_ = {}) noexcept : key{key_}, importance{importance_}, parameters{parameters_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.String key
      [[deprecated("Use field access instead!")]] ::StringW& dyn_key();
      // Get instance field reference: public Oculus.Platform.MatchmakingCriterionImportance importance
      [[deprecated("Use field access instead!")]] ::Oculus::Platform::MatchmakingCriterionImportance& dyn_importance();
      // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.Object> parameters
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*& dyn_parameters();
      // public System.Void .ctor(System.String key_, Oculus.Platform.MatchmakingCriterionImportance importance_)
      // Offset: 0x19E8A1C
      Criterion(::StringW key_, ::Oculus::Platform::MatchmakingCriterionImportance importance_);
    }; // Oculus.Platform.Matchmaking/Oculus.Platform.CustomQuery/Oculus.Platform.Criterion
    #pragma pack(pop)
    static check_size<sizeof(Matchmaking::CustomQuery::Criterion), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*)> __Oculus_Platform_Matchmaking_CustomQuery_CriterionSizeCheck;
    static_assert(sizeof(Matchmaking::CustomQuery::Criterion) == 0x18);
    public:
    // public System.Collections.Generic.Dictionary`2<System.String,System.Object> data
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>* data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*) == 0x8);
    // public Oculus.Platform.Matchmaking/Oculus.Platform.CustomQuery/Oculus.Platform.Criterion[] criteria
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Oculus::Platform::Matchmaking::CustomQuery::Criterion> criteria;
    // Field size check
    static_assert(sizeof(::ArrayW<::Oculus::Platform::Matchmaking::CustomQuery::Criterion>) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,System.Object> data
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Il2CppObject*>*& dyn_data();
    // Get instance field reference: public Oculus.Platform.Matchmaking/Oculus.Platform.CustomQuery/Oculus.Platform.Criterion[] criteria
    [[deprecated("Use field access instead!")]] ::ArrayW<::Oculus::Platform::Matchmaking::CustomQuery::Criterion>& dyn_criteria();
    // public System.Void .ctor()
    // Offset: 0x19E8A14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Matchmaking::CustomQuery* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::Matchmaking::CustomQuery::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Matchmaking::CustomQuery*, creationType>()));
    }
    // public System.IntPtr ToUnmanaged()
    // Offset: 0x19E7538
    ::System::IntPtr ToUnmanaged();
  }; // Oculus.Platform.Matchmaking/Oculus.Platform.CustomQuery
  #pragma pack(pop)
  static check_size<sizeof(Matchmaking::CustomQuery), 24 + sizeof(::ArrayW<::Oculus::Platform::Matchmaking::CustomQuery::Criterion>)> __Oculus_Platform_Matchmaking_CustomQuerySizeCheck;
  static_assert(sizeof(Matchmaking::CustomQuery) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Matchmaking::CustomQuery::Criterion, "Oculus.Platform", "Matchmaking/CustomQuery/Criterion");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::CustomQuery::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::Matchmaking::CustomQuery::ToUnmanaged
// Il2CppName: ToUnmanaged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Oculus::Platform::Matchmaking::CustomQuery::*)()>(&Oculus::Platform::Matchmaking::CustomQuery::ToUnmanaged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Matchmaking::CustomQuery*), "ToUnmanaged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
