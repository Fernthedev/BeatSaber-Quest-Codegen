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
// Type namespace: ModestTree.Util
namespace ModestTree::Util {
  // WARNING Size may be invalid!
  // Autogenerated type: ModestTree.Util.ValuePair`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T1, typename T2>
  class ValuePair_2 : public ::Il2CppObject {
    public:
    // public readonly T1 First
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 First;
    // public readonly T2 Second
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 Second;
    // Creating value type constructor for type: ValuePair_2
    ValuePair_2(T1 First_ = {}, T2 Second_ = {}) noexcept : First{First_}, Second{Second_} {}
    // Autogenerated instance field getter
    // Get instance field: public readonly T1 First
    T1& dyn_First() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_2::dyn_First");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "First"))->offset;
      return *reinterpret_cast<T1*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public readonly T2 Second
    T2& dyn_Second() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_2::dyn_Second");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Second"))->offset;
      return *reinterpret_cast<T2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(T1 first, T2 second)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValuePair_2<T1, T2>* New_ctor(T1 first, T2 second) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValuePair_2<T1, T2>*, creationType>(first, second)));
    }
    // public System.Boolean Equals(ModestTree.Util.ValuePair`2<T1,T2> that)
    // Offset: 0xFFFFFFFF
    bool Equals(ModestTree::Util::ValuePair_2<T1, T2>* that) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_2::Equals");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(that)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, that);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValuePair_2<T1, T2>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValuePair_2<T1, T2>*, creationType>()));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_2::Equals");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(obj)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::Util::ValuePair_2::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
  }; // ModestTree.Util.ValuePair`2
  // Could not write size check! Type: ModestTree.Util.ValuePair`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(ModestTree::Util::ValuePair_2, "ModestTree.Util", "ValuePair`2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
