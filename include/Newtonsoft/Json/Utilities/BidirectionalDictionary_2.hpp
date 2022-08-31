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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: BidirectionalDictionary`2<TFirst, TSecond>
  template<typename TFirst, typename TSecond>
  class BidirectionalDictionary_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Newtonsoft::Json::Utilities::BidirectionalDictionary_2, "Newtonsoft.Json.Utilities", "BidirectionalDictionary`2");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.Utilities.BidirectionalDictionary`2
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10C1128
  template<typename TFirst, typename TSecond>
  class BidirectionalDictionary_2 : public ::Il2CppObject {
    public:
    public:
    // private readonly System.Collections.Generic.IDictionary`2<TFirst,TSecond> _firstToSecond
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IDictionary_2<TFirst, TSecond>* firstToSecond;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<TFirst, TSecond>*) == 0x8);
    // private readonly System.Collections.Generic.IDictionary`2<TSecond,TFirst> _secondToFirst
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::IDictionary_2<TSecond, TFirst>* secondToFirst;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IDictionary_2<TSecond, TFirst>*) == 0x8);
    // private readonly System.String _duplicateFirstErrorMessage
    // Size: 0x8
    // Offset: 0x0
    ::StringW duplicateFirstErrorMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _duplicateSecondErrorMessage
    // Size: 0x8
    // Offset: 0x0
    ::StringW duplicateSecondErrorMessage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.IDictionary`2<TFirst,TSecond> _firstToSecond
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<TFirst, TSecond>*& dyn__firstToSecond() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::dyn__firstToSecond");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_firstToSecond"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IDictionary_2<TFirst, TSecond>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Collections.Generic.IDictionary`2<TSecond,TFirst> _secondToFirst
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IDictionary_2<TSecond, TFirst>*& dyn__secondToFirst() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::dyn__secondToFirst");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_secondToFirst"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::IDictionary_2<TSecond, TFirst>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.String _duplicateFirstErrorMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn__duplicateFirstErrorMessage() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::dyn__duplicateFirstErrorMessage");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_duplicateFirstErrorMessage"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.String _duplicateSecondErrorMessage
    [[deprecated("Use field access instead!")]] ::StringW& dyn__duplicateSecondErrorMessage() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::dyn__duplicateSecondErrorMessage");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_duplicateSecondErrorMessage"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BidirectionalDictionary_2<TFirst, TSecond>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BidirectionalDictionary_2<TFirst, TSecond>*, creationType>()));
    }
    // public System.Void .ctor(System.Collections.Generic.IEqualityComparer`1<TFirst> firstEqualityComparer, System.Collections.Generic.IEqualityComparer`1<TSecond> secondEqualityComparer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BidirectionalDictionary_2<TFirst, TSecond>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BidirectionalDictionary_2<TFirst, TSecond>*, creationType>(firstEqualityComparer, secondEqualityComparer)));
    }
    // public System.Void .ctor(System.Collections.Generic.IEqualityComparer`1<TFirst> firstEqualityComparer, System.Collections.Generic.IEqualityComparer`1<TSecond> secondEqualityComparer, System.String duplicateFirstErrorMessage, System.String duplicateSecondErrorMessage)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BidirectionalDictionary_2<TFirst, TSecond>* New_ctor(::System::Collections::Generic::IEqualityComparer_1<TFirst>* firstEqualityComparer, ::System::Collections::Generic::IEqualityComparer_1<TSecond>* secondEqualityComparer, ::StringW duplicateFirstErrorMessage, ::StringW duplicateSecondErrorMessage) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BidirectionalDictionary_2<TFirst, TSecond>*, creationType>(firstEqualityComparer, secondEqualityComparer, duplicateFirstErrorMessage, duplicateSecondErrorMessage)));
    }
    // public System.Void Set(TFirst first, TSecond second)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Set(TFirst first, TSecond second) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::Set");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Set", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(first), ::il2cpp_utils::ExtractType(second)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, first, second);
    }
    // public System.Boolean TryGetByFirst(TFirst first, out TSecond second)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetByFirst(TFirst first, ByRef<TSecond> second) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::TryGetByFirst");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetByFirst", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(first), ::il2cpp_utils::ExtractIndependentType<TSecond&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, first, byref(second));
    }
    // public System.Boolean TryGetBySecond(TSecond second, out TFirst first)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TryGetBySecond(TSecond second, ByRef<TFirst> first) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Utilities::BidirectionalDictionary_2::TryGetBySecond");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "TryGetBySecond", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(second), ::il2cpp_utils::ExtractIndependentType<TFirst&>()})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, second, byref(first));
    }
  }; // Newtonsoft.Json.Utilities.BidirectionalDictionary`2
  // Could not write size check! Type: Newtonsoft.Json.Utilities.BidirectionalDictionary`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
