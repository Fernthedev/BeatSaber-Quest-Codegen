// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: IResolveConstraint
  class IResolveConstraint;
}
// Completed forward declares
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Forward declaring type: Assert
  class _Assert;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::_Assert);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::_Assert*, "NUnit.Framework", "Assert");
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Assert
  // [TokenAttribute] Offset: FFFFFFFF
  class _Assert : public ::Il2CppObject {
    public:
    // static public System.Void AreEqual(System.Object expected, System.Object actual)
    // Offset: 0x1C85EC8
    static void AreEqual(::Il2CppObject* expected, ::Il2CppObject* actual);
    // static private System.Void IncrementAssertCount()
    // Offset: 0x1C85F3C
    static void IncrementAssertCount();
    // static public System.Void That(TActual actual, NUnit.Framework.Constraints.IResolveConstraint expression, System.String message, params System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TActual>
    static void That(TActual actual, ::NUnit::Framework::Constraints::IResolveConstraint* expression, ::StringW message, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::_Assert::That");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("NUnit.Framework", "Assert", "That", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TActual>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(actual), ::il2cpp_utils::ExtractType(expression), ::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TActual>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, actual, expression, message, args);
    }
    // static public System.Void IsTrue(System.Boolean condition)
    // Offset: 0x1C86014
    static void IsTrue(bool condition);
    // static public System.Void IsFalse(System.Boolean condition)
    // Offset: 0x1C8607C
    static void IsFalse(bool condition);
  }; // NUnit.Framework.Assert
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::_Assert::AreEqual
// Il2CppName: AreEqual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ::Il2CppObject*)>(&NUnit::Framework::_Assert::AreEqual)> {
  static const MethodInfo* get() {
    static auto* expected = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "AreEqual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expected, actual});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::_Assert::IncrementAssertCount
// Il2CppName: IncrementAssertCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::_Assert::IncrementAssertCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "IncrementAssertCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::_Assert::That
// Il2CppName: That
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: NUnit::Framework::_Assert::IsTrue
// Il2CppName: IsTrue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&NUnit::Framework::_Assert::IsTrue)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "IsTrue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::_Assert::IsFalse
// Il2CppName: IsFalse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&NUnit::Framework::_Assert::IsFalse)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::_Assert*), "IsFalse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition});
  }
};
